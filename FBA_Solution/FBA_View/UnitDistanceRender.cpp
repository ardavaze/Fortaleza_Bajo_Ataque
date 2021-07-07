#include "UnitDistanceRender.h"
#include "SurvivalRender.h"
FBAView::UnitDistanceRender::UnitDistanceRender(FBAModel::Units^ unit): FBAView::UnitRender::UnitRender(unit){
}

Void FBAView::UnitDistanceRender::ProcessCollision() {
	int k;
	for (int i = 0; i < rango; i++) {//recorremos 2 cuadrados del espacio fisico al frente o detras de la unidad
		if (this->band == Game_obj::Band::Allies) { k = (numRectangule + i); }
		else { k = ((i * -1) - 1); }
		if (((frstRectangule + k) < SurvivalRender::physicalSpace->Length) && ((frstRectangule + k) >= 0)) {
			for (int j = 0; j < SurvivalRender::physicalSpace[frstRectangule + k]->Count; j++) {
				if (SurvivalRender::physicalSpace[frstRectangule + k][j]->band != this->band) {
					this->dist = i * 20;
					this->state = UnitRender::States::Attack;
					this->enemyUnit = SurvivalRender::physicalSpace[frstRectangule + k][j];
					return;
				}
			}
		}
	}
	this->enemyUnit = nullptr;
	this->state = UnitRender::States::Move;
}

Void FBAView::UnitDistanceRender::ToDo() {
	if (this->statejob!=States::DoNothing) {
		timeJob->Start();
		double timeaux;
		if (this->frstTimeJob) {
			timeJob->Restart();
			statejob = state;
			indice = 0;
			switch (statejob) {
			case FBAView::UnitRender::States::Attack:
				totalTimeJob = (60 / attackVelocity);
				break;
			case FBAView::UnitRender::States::Move:
				totalTimeJob = ((80 / 50) / movementVelocity);
				break;
			case FBAView::UnitRender::States::Die:
				totalTimeJob = deathTime;
				break;
			}
			positionx = Position.X;
			frstTimeJob = 0;
		}
		timeJob->Stop();
		timeaux = timeJob->Elapsed.TotalSeconds;
		timeJob->Start();
		if (timeaux >= (indice + 1) * (totalTimeJob / this->unit->MoveAnimation->Count)) {
			indice = int(timeaux * (this->unit->AttackAnimation->Count / totalTimeJob));
			healthbar->GetBar(double(this->HP) / this->unit->Maxlife);
			switch (statejob) {
			case FBAView::UnitRender::States::Attack:
				if (indice >= this->unit->AttackAnimation->Count) { indice = 0; }
				this->body->Texture = unit->AttackAnimation[indice];
				Console::WriteLine(""+ indice);
				if ((indice == int(0.66 * unit->MoveAnimation->Count)) && (state == FBAView::UnitRender::States::Attack)) {
					timeJob->Stop();
					arrow->throwed = 1;
					arrow->damage = 30;
					arrow->arrow->Velocity = 600;
					double ang = Math::Asin(this->dist * (-g)*pixPerMeter / Math::Pow(arrow->arrow->Velocity, 2)) / 2;
					arrow->velocity.X = (band == Game_obj::Band::Allies ? 1 : -1) *arrow->arrow->Velocity * Math::Cos(ang);
					arrow->velocity.Y = arrow->arrow->Velocity * Math::Sin(ang);
					arrow->Timearrow = gcnew System::Diagnostics::Stopwatch;
					arrow->Timearrow->Restart();
					arrow->posInit.X = this->Position.X + 353 * this->Scale.X;
					arrow->posInit.Y = this->Position.Y + 222 * this->Scale.Y;
					arrow->Scale = this->Scale;
					arrow->Origin = Vector2f(arrow->Texture->Size.X / 2, arrow->Texture->Size.Y / 2);
					arrow->Position = Vector2f(arrow->posInit.X, arrow->posInit.Y);
				}
				if (indice == unit->AttackAnimation->Count / 2) {
					//this->unit->attackSound->Play();
				}
					break;
			case FBAView::UnitRender::States::Move:
				if (indice >= this->unit->MoveAnimation->Count) { indice = 0; }
				this->body->Texture = unit->MoveAnimation[indice];
				if (state == FBAView::UnitRender::States::Move)
					if (this->unit->band == FBAModel::Units::Band::Allies) {
						Position = Vector2f(positionx + int(timeaux * movementVelocity * 50), Position.Y);
					}
					else {
						Position = Vector2f(positionx - int(timeaux * movementVelocity * 50), Position.Y);
					}
				break;
			case FBAView::UnitRender::States::Die:
				if (indice >= this->unit->DeathAnimation->Count) { indice = 0; }
				this->body->Texture = unit->DeathAnimation[indice];
				if (indice == unit->DeathAnimation->Count / 2) {
					//this->unit->deathSound->Play();
				}
					break;
			}
			this->PaintTexture();
		}
		if (timeaux >= totalTimeJob) {
			frstTimeJob = 1;
			if (this->statejob == UnitRender::States::Die) {
				death = 1;
			}
			if (this->statejob == UnitRender::States::Attack) {
				this->statejob = States::DoNothing;
			}
		}
	}
	else {
		if (this->arrow->throwed==0) {
			this->statejob = States::Attack;
		}
	}
}

Void FBAView::UnitDistanceRender::PaintTexture() {
	this->board->Clear(SFML::Graphics::Color::Color(0, 0, 0, 0));
	this->board->Draw(healthbar);
	this->board->Draw(body);
	this->board->Display();
	this->Texture = this->board->Texture;
}
