#pragma once
#include <opencv2/opencv.hpp>

#include "Mat.h"
#include "ImreadModes.h"

using namespace System;

namespace OpenCvClr {
	public ref class Cv abstract sealed
	{
	public:
		static OpenCvClr::Mat^ ImRead(String^ filename, OpenCvClr::ImreadModes flags);

		static bool ImWrite(String^ filename, OpenCvClr::Mat^ mat);
	};
}