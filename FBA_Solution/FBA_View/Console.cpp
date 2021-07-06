#include "Console.h"
#include "menu_principal.h"
#include "SurvivalRender.h"


FBAView::Console::Console()
{
	board = gcnew RenderTexture(1770, 320);
	consoleMold = gcnew Sprite;
	barbarianButton = gcnew Button;
	dwarfButton = gcnew Button;
	wraithButton = gcnew Button;
	barbarianLetter = gcnew SFML::Graphics::Text;
	dwarfLetter = gcnew SFML::Graphics::Text;
	wraithLetter= gcnew SFML::Graphics::Text;
	barbarianLetter = gcnew SFML::Graphics::Text;
	dwarfLetter = gcnew SFML::Graphics::Text;
	wraithLetter = gcnew SFML::Graphics::Text;
	coin1= gcnew Sprite;
	coin2= gcnew Sprite;
	coin3= gcnew Sprite;
	barbarianCost= gcnew SFML::Graphics::Text;
	dwarfCost = gcnew SFML::Graphics::Text;
	wraithCost = gcnew SFML::Graphics::Text;
	separator = gcnew RectangleShape;
	coin4 = gcnew Sprite;
	userCoinsText= gcnew SFML::Graphics::Text;
	barbarianBar= gcnew RectangleShape;
	barbarianQueue1= gcnew CircleShape;
	barbarianQueue2= gcnew CircleShape ;
	barbarianQueue3= gcnew CircleShape ;
	//
	Position = Vector2f(200,800);
	Scale = Vector2f(1, 1);
	//statik
	consoleMold->Scale = Vector2f(1.75, 1.75);
	consoleMold->Position = Vector2f(0,0);
	consoleMold->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/MapsElements/console mold 4.png");
	barbarianButton->Scale =Vector2f(0.25,0.25);
	barbarianButton->Position = Vector2f(268, 78);
	barbarianButton->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/button/barbaro 2.jpg");
	dwarfButton->Scale = Vector2f(0.25, 0.25);
	dwarfButton->Position = Vector2f(418, 78);
	dwarfButton->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/button/enano.jpg");
	wraithButton->Scale = Vector2f(0.25, 0.25);
	wraithButton->Position = Vector2f(568, 78);
	wraithButton->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/button/wraith.jpg");
	ConsoleFont1 = gcnew SFML::Graphics::Font("Assets/Fonts/SHAXIZOR.ttf");
	ConsoleFont2 = gcnew SFML::Graphics::Font("Assets/Fonts/Legionary.ttf");
	barbarianLetter->Scale = Vector2f(2, 1);
	barbarianLetter->Position = Vector2f(260, 78);
	barbarianLetter->Color= SFML::Graphics::Color::White;
	barbarianLetter->Font = ConsoleFont1;
	barbarianLetter->DisplayedString = "D";
	dwarfLetter->Scale = Vector2f(2, 1);
	dwarfLetter->Position = Vector2f(412, 78);
	dwarfLetter->Color = SFML::Graphics::Color::White;
	dwarfLetter->Font = ConsoleFont1;
	dwarfLetter->DisplayedString = "E";
	wraithLetter->Scale = Vector2f(2, 1);
	wraithLetter->Position = Vector2f(564, 78);
	wraithLetter->Color = SFML::Graphics::Color::White;
	wraithLetter->Font = ConsoleFont1;
	wraithLetter->DisplayedString = "F";
	coin1->Scale = Vector2f(0.15, 0.15);
	coin1->Position = Vector2f(268, 175);
	coin1->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/monedas.png");
	coin2->Scale = Vector2f(0.15, 0.15);
	coin2->Position = Vector2f(418, 175);
	coin2->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/monedas.png");
	coin3->Scale = Vector2f(0.15, 0.15);
	coin3->Position = Vector2f(568, 175);
	coin3->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/monedas.png");
	barbarianCost->Scale = Vector2f(1.5, 1);
	barbarianCost->Position = Vector2f(315, 175);
	barbarianCost->Color = SFML::Graphics::Color::White;
	barbarianCost->Font = ConsoleFont2;
	barbarianCost->DisplayedString = "50";
	dwarfCost->Scale = Vector2f(1.5, 1);
	dwarfCost->Position = Vector2f(465, 175);
	dwarfCost->Color = SFML::Graphics::Color::White;
	dwarfCost->Font = ConsoleFont2;
	dwarfCost->DisplayedString = "50";
	wraithCost->Scale = Vector2f(1.5, 1);
	wraithCost->Position = Vector2f(615, 175);
	wraithCost->Color = SFML::Graphics::Color::White;
	wraithCost->Font = ConsoleFont2;
	wraithCost->DisplayedString = "50";
	separator->Size= Vector2f(10, 144);
	separator->Position= Vector2f(1150, 71);
	separator->FillColor= SFML::Graphics::Color::Color(32,32,32,255);
	coin4->Scale = Vector2f(0.15, 0.15);
	coin4->Position = Vector2f(1200, 120);
	coin4->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/monedas.png");
	userCoinsText->Scale = Vector2f(1.5, 1);
	userCoinsText->Position = Vector2f(1250, 120);
	userCoinsText->Color = SFML::Graphics::Color::White;
	userCoinsText->Font = ConsoleFont2;
	userCoinsText->DisplayedString = ""+ SurvivalRender::userCoins;
	//dinamic
	barbarianBar->Size = Vector2f(10, 90);
	barbarianBar->Scale= Vector2f(1, -1);
	barbarianBar->Position = Vector2f(245, 170);
	barbarianBar->FillColor = SFML::Graphics::Color::Cyan;
	barbarianQueue1->Radius = 7;
	barbarianQueue1->Scale = Vector2f(1, 1);
	barbarianQueue1->Position = Vector2f(368, 86);
	barbarianQueue1->FillColor= SFML::Graphics::Color::Cyan;
	barbarianQueue2->Radius = 7;
	barbarianQueue2->Scale = Vector2f(1, 1);
	barbarianQueue2->Position = Vector2f(368, 116);
	barbarianQueue2->FillColor = SFML::Graphics::Color::Cyan;
	barbarianQueue3->Radius = 7;
	barbarianQueue3->Scale = Vector2f(1, 1);
	barbarianQueue3->Position = Vector2f(368, 146);
	barbarianQueue3->FillColor = SFML::Graphics::Color::Cyan;
	//
	internalControlElemts = gcnew List<ControlElements^>;
	internalControlElemts->Add(barbarianButton);
	internalControlElemts->Add(dwarfButton);
	internalControlElemts->Add(wraithButton);
	UpdateQueue();
	int sizeX = Math::Round(Math::Abs(this->Texture->Size.X * this->Scale.X));
	int sizeY = Math::Round(Math::Abs(this->Texture->Size.Y * this->Scale.Y));
	internalControlSpace = gcnew array<array<ControlElements^>^>(sizeX);
	for (int i = 0; i < sizeX; i++) {
		internalControlSpace[i] = gcnew array<ControlElements^>(sizeY);
	}
	
	InternalOcuppySpace();
}

void FBAView::Console::UpdateQueue()
{
	BarAnalysis();
	QueueAnalysis();
	userCoinsText->DisplayedString = "" + SurvivalRender::userCoins;
	board->Clear(SFML::Graphics::Color::Color(0, 0, 0, 0));
	board->Draw(barbarianButton);
	board->Draw(dwarfButton);
	board->Draw(wraithButton);
	board->Draw(consoleMold);
	board->Draw(barbarianLetter);
	board->Draw(dwarfLetter);
	board->Draw(wraithLetter);
	board->Draw(coin1);
	board->Draw(coin2);
	board->Draw(coin3);
	board->Draw(barbarianCost);
	board->Draw(dwarfCost);
	board->Draw(wraithCost);
	board->Draw(separator);
	board->Draw(coin4);
	board->Draw(userCoinsText);
	board->Draw(barbarianBar);
	board->Draw(barbarianQueue1);
	board->Draw(barbarianQueue2);
	board->Draw(barbarianQueue3);
	board->Display();
	this->Texture = board->Texture;
}

void FBAView::Console::BarAnalysis()
{	
	if (SurvivalRender::barbarianQueue>0)
	{
		float yscale = -1 * (SurvivalRender::barbarianTime->Elapsed.TotalSeconds / 6) * 1;
		barbarianBar->Scale = Vector2f(1, yscale);
	}
	else
		barbarianBar->Scale = Vector2f(1, 0);

}

void FBAView::Console::QueueAnalysis()
{
	if (SurvivalRender::barbarianQueue == 0) {
		barbarianQueue1->Scale = Vector2f(0, 0);
		barbarianQueue2->Scale = Vector2f(0, 0);
		barbarianQueue3->Scale = Vector2f(0, 0);
	}
	if (SurvivalRender::barbarianQueue == 1) {
	barbarianQueue1->Scale = Vector2f(1, 1);
	barbarianQueue2->Scale = Vector2f(0, 0);
	barbarianQueue3->Scale = Vector2f(0, 0);
	}
	if (SurvivalRender::barbarianQueue == 2) {
	barbarianQueue1->Scale = Vector2f(1, 1);
	barbarianQueue2->Scale = Vector2f(1, 1);
	barbarianQueue3->Scale = Vector2f(0, 0);
	}
	if (SurvivalRender::barbarianQueue == 3) {
	barbarianQueue1->Scale = Vector2f(1, 1);
	barbarianQueue2->Scale = Vector2f(1, 1);
	barbarianQueue3->Scale = Vector2f(1, 1);
	}
}
