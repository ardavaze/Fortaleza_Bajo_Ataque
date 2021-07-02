
#include "Button.h"
#include "UserLifeBar.h"
void FBAView::Button::ProcessCollision(int x, int y)
{
    this->EventClick();
}

void FBAView::Button::EventClick()
{
    UserLifeBar::usernameText->Color = SFML::Graphics::Color::Red;
}
