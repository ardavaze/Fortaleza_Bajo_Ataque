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

Void FBAView::Container::MouseMove(ClickArgs^ e) {
    e->mousePosition.X = e->mousePosition.X - this->Position.X;
    e->mousePosition.Y = e->mousePosition.Y - this->Position.Y;
    e->mousePositionBefore.X = e->mousePositionBefore.X - this->Position.X;
    e->mousePositionBefore.Y = e->mousePositionBefore.Y - this->Position.Y;
    switch (e->mouseState) {
    case ClickArgs::MouseState::inside:
        if (internalControlSpace[e->mousePosition.X][e->mousePosition.Y] != internalControlSpace[e->mousePositionBefore.X][e->mousePositionBefore.Y]) {
            if (internalControlSpace[e->mousePosition.X][e->mousePosition.Y] != nullptr) {
                e->mouseState = ClickArgs::MouseState::Over;
                internalControlSpace[e->mousePosition.X][e->mousePosition.Y]->MouseMove(e);
            }
            if (internalControlSpace[e->mousePositionBefore.X][e->mousePositionBefore.Y] != nullptr) {
                e->mouseState = ClickArgs::MouseState::Leave;
                internalControlSpace[e->mousePositionBefore.X][e->mousePositionBefore.Y]->MouseMove(e);
            }
        }
        else {
            if (internalControlSpace[e->mousePosition.X][e->mousePosition.Y]!=nullptr) {
                e->mouseState = ClickArgs::MouseState::inside;
                internalControlSpace[e->mousePosition.X][e->mousePosition.Y]->MouseMove(e);
            }
        }
        break;
    case ClickArgs::MouseState::Leave:
        if (internalControlSpace[e->mousePositionBefore.X][e->mousePositionBefore.Y] != nullptr) {
            internalControlSpace[e->mousePositionBefore.X][e->mousePositionBefore.Y]->MouseMove(e);
        }
        break;
    case ClickArgs::MouseState::Over:
        if (internalControlSpace[e->mousePosition.X][e->mousePosition.Y] != nullptr) {
            internalControlSpace[e->mousePosition.X][e->mousePosition.Y]->MouseMove(e);
        }
        break;
    }
}

