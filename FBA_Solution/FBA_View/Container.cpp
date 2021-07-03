#include "Container.h"

void FBAView::Container::MouseCollision(ClickArgs^ e) {
    e->mousePosition.X = e->mousePosition.X - this->Position.X;
    e->mousePosition.Y = e->mousePosition.Y - this->Position.Y;
    if (internalControlSpace[e->mousePosition.X][e->mousePosition.Y] != nullptr) {
        internalControlSpace[e->mousePosition.X][e->mousePosition.Y]->MouseCollision(e);
    }
    else {
        this->click(this, e);
    }
}
