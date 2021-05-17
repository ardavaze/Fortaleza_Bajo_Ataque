#pragma once
#include "Product.h"

using namespace System;
namespace FBAModel{
    public ref class Upgrade :public Product {
    public:
        String^ Tipo;
        int Cantidad;
    };
}
