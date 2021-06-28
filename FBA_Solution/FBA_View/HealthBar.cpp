#include "HealthBar.h"

FBAView::HealthBar::HealthBar() {

}

Texture^ FBAView::HealthBar::GetBar(double hp) {
    return parts[(int)System::Math::Round(hp*49)];
}

Void FBAView::HealthBar::Generate(){
    this->parts = gcnew array<Texture^>(50);
    for (int i = 0; i < 50; i++) {
        this->parts[i] = gcnew Texture(this->healthBar[0]);
        if (i > 0) {
            this->parts[i]->Update(this->healthBar[1]->CopyToImage(),4,4);
        }
        for (int j = 0; j < (112*i)/49; j++) {
            this->parts[i]->Update(this->healthBar[2]->CopyToImage(),9+j,4);
        }
        if (i == 49) {
            this->parts[i]->Update(this->healthBar[3]->CopyToImage(),119,4);
        }
    }
    return Void();
}
