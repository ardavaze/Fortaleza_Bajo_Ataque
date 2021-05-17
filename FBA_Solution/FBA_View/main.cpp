using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
#include <string>
using namespace std;
int main() {
    RenderWindow^ window = gcnew RenderWindow(VideoMode(1920, 1080), "SFML graphics with OpenGL", Styles::Fullscreen);
	List <Texture^>^ tex= gcnew List<Texture^>();
    for (int j = 0; j < 20; j++) {
        String^ d;
		if (j > 9)
			d="c/4_enemies_1_attack_0" + (gcnew String(to_string(j).c_str())) + ".png";
		else
			d="c/4_enemies_1_attack_00" + (gcnew String(to_string(j).c_str())) + ".png";
		tex->Add(gcnew Texture(d));
	}
	Sprite^ spr=gcnew Sprite();
	spr->Texture=tex[0];
    spr->Scale = Vector2f (0.5,0.5 );
	for (int j=0, i=0; window->IsOpen;j++) {
        window->Clear();
		if (j == 50) {
			j = 0;
			spr->Texture=tex[i];
			i++;
			if (i == 20)i = 0;
		}
        window->Draw(spr);
        window->Display();
	}
	return 0;
}