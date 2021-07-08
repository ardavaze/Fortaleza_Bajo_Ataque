#pragma once
#include "ControlElements.h"
namespace FBAView {
    public ref class Container : public ControlElements{
    public:
        array<array<ControlElements^>^>^ internalControlSpace;
        List<ControlElements^>^ internalControlElemts;
        Void MouseCollision(ClickArgs^) override;
        Void InternalOcuppySpace();
        virtual Void MouseMove(ClickArgs^) override;
    };
}

