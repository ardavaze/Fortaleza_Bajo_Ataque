#pragma once
using namespace System;
using namespace SFML::Graphics;
using namespace SFML::System;
namespace FBAView {
	public ref class BackGroundRender : public Sprite {
	public:
		BackGroundRender(FBAModel::Skin_Background^ backGround);
	protected:
		Sprite^ BG1;
		Sprite^ BG2;
		FBAModel::Skin_Background^ backGround;
		RenderTexture^ board;
		Void PaintTexture();
	};
}

