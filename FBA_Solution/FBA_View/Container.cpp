#include "Container.h"

Void FBAView::Container::MouseCollision(ClickArgs^ e) {
    e->mousePosition.X = e->mousePosition.X - this->Position.X;
    e->mousePosition.Y = e->mousePosition.Y - this->Position.Y;
    if (internalControlSpace[e->mousePosition.X][e->mousePosition.Y] != nullptr) {
        internalControlSpace[e->mousePosition.X][e->mousePosition.Y]->MouseCollision(e);
    }
    else {
        this->click(this, e);
    }
}
Void FBAView::Container::InternalOcuppySpace() {
    for (int i = 0; i < internalControlElemts->Count; i++) {
        this->internalControlElemts[i]->OcuppySpace(this->internalControlSpace);
    }
}

