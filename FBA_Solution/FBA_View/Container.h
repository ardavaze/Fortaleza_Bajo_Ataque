#pragma once
#include "ControlElements.h"
using namespace System;
namespace FBAView {
    public ref class Container : public ControlElements{
    public:
        array<array<ControlElements^>^>^ internalControlSpace;
    public:
        virtual void MouseCollision(ClickArgs^) override;
    };
}

