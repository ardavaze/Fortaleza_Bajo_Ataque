#pragma once
#include "Match.h"

using namespace System;
namespace FBAModel {
    [Serializable]
    public ref class Survival : public Match {
    public:
        /// <summary>
        /// 
        /// </summary>
        int timeMax; //en Segundos
    };
}
