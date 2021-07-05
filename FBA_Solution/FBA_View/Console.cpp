#include "Console.h"


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
	//
	Position = Vector2f(200,800);
	Scale = Vector2f(1, 1);
	//
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
	board->Clear(SFML::Graphics::Color::Color(0, 0, 0, 0));
	board->Draw(barbarianButton);
	board->Draw(dwarfButton);
	board->Draw(wraithButton);
	board->Draw(consoleMold);
	board->Draw(barbarianLetter);
	board->Draw(dwarfLetter);
	board->Draw(wraithLetter);
	board->Display();
	this->Texture = board->Texture;
}

