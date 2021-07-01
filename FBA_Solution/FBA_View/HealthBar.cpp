#include "HealthBar.h"

FBAView::HealthBar::HealthBar() {

}

FBAView::HealthBar::HealthBar(String^name, String^ life)
{
    this->healthBar = gcnew array<SFML::Graphics::Texture^>(4);
    this->healthBar[0] = gcnew Texture(name);
    this->healthBar[1] = gcnew Texture(life);
    this->healthBar[2] = gcnew Texture(life);
    this->healthBar[3] = gcnew Texture(life);
    this->position = Vector2i(193, 102);
    corner = 0;
    this->Generate(227);
}

Texture^ FBAView::HealthBar::GetBar(double hp) {
    return parts[(int)System::Math::Round(hp*49)];
}

Void FBAView::HealthBar::Generate(int size){
    this->parts = gcnew array<Texture^>(50);
    for (int i = 0; i < 50; i++) {
        this->parts[i] = gcnew Texture(this->healthBar[0]);
        if (corner) {
            if (i > 0) {
                this->parts[i]->Update(this->healthBar[1]->CopyToImage(), 4, 4);
            }

            if (i == 49) {
                this->parts[i]->Update(this->healthBar[3]->CopyToImage(), 119, 4);
            }
        }
        for (int j = 0; j < (size * i) / 49; j++) {
           this->parts[i]->Update(this->healthBar[2]->CopyToImage(), position.X+ j, position.Y);
        }

    }
    return Void();
}
