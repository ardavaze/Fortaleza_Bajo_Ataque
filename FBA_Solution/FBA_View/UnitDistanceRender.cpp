#include "UnitDistanceRender.h"

FBAView::UnitDistanceRender::UnitDistanceRender(FBAModel::Units^ unit): FBAView::UnitRender::UnitRender(unit){
}

Void FBAView::UnitDistanceRender::ToDo() {
	if (this->arrow->throwed == 0) {
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
			this->HPBar->Texture = healthbar->GetBar(double(this->life) / this->unit->Maxlife);
			switch (statejob) {
			case FBAView::UnitRender::States::Attack:
				if (indice >= this->unit->MoveAnimation->Count) { indice = 0; }
				this->body->Texture = unit->AttackAnimation[indice];
				if ((indice == int(0.66 * unit->MoveAnimation->Count)) && (state == FBAView::UnitRender::States::Attack)) {
					timeJob->Stop();
					arrow->throwed = 1;
					arrow->parrow->Velocity = 400;
					double ang = Math::Asin(this->dist * (-400) / Math::Pow(arrow->parrow->Velocity, 2)) / 2;
					arrow->velX = arrow->parrow->Velocity * Math::Cos(ang);
					arrow->velY = arrow->parrow->Velocity * Math::Sin(ang);
					arrow->Timearrow = gcnew System::Diagnostics::Stopwatch;
					arrow->Timearrow->Restart();
					arrow->xInicial = this->Position.X + 353 * this->Scale.X;
					arrow->yInicial = this->Position.Y + 222 * this->Scale.Y;
					arrow->Scale = this->Scale;
					arrow->Origin = Vector2f(arrow->Texture->Size.X / 2, arrow->Texture->Size.Y / 2);
					arrow->Position = Vector2f(arrow->xInicial, arrow->yInicial);
				}
				if (indice == unit->AttackAnimation->Count / 2)
					//this->unit->attackSound->Play();
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
				if (indice == unit->DeathAnimation->Count / 2)
					//this->unit->deathSound->Play();
					break;
			}
			this->PaintTexture();
		}
		if (timeaux >= totalTimeJob) {
			frstTimeJob = 1;
			if (this->statejob == UnitRender::States::Die) {
				death = 1;
			}
		}
	}
}

Void FBAView::UnitDistanceRender::PaintTexture() {
	this->board->Clear(SFML::Graphics::Color::Color(0, 0, 0, 0));
	this->board->Draw(HPBar);
	this->board->Draw(body);
	this->board->Display();
	this->Texture = this->board->Texture;
}
