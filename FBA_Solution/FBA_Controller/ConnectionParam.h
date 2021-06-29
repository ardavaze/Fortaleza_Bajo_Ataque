#pragma once
using namespace System;
namespace FBAController{
	[Serializable]
	public ref class ConnectionParam {
	public:
		property String^ Server;
		property String^ Database;
		property String^ User;
		property String^ Password;
	};
}

