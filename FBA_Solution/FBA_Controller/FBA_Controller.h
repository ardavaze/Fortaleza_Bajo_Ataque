#pragma once
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
#include <string>
using namespace std;
namespace FBA_Controller {
	public ref class FBAController {
	public:
		static RenderWindow^ window;
		static Texture^ backgroundTexture;
		static Sprite^ backgroundSprite;
		static Texture^ Get_texture();
		static void Set_texture(String^ background);
		static Sprite^ Get_sprite();
		static void Set_sprite(Texture^ background);
		static List<Texture^>^ src_attack;
		static List<Sprite^>^ ani_attack;
	};
}
