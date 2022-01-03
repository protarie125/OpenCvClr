#pragma once
#include <opencv2/opencv.hpp>

#include "MatType.h"
#include "ImreadModes.h"

using namespace System;

namespace OpenCvClr {
	public ref class Mat
	{
	private:
		cv::Mat* nativeMat_;

	public:
		Mat();

		Mat(String^ filename, OpenCvClr::ImreadModes flags);

		Mat(int rows, int cols, OpenCvClr::MatType type);

		~Mat();

		!Mat();

		bool ImWrite(String^ filename);
	};
}