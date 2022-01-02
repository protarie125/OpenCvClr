#pragma once
#include <string>

using namespace System;

namespace OpenCvClr {
	public ref class Utils abstract sealed
	{
	public:
		static void StringToStdString(String^ input, std::string& output);
	};
}