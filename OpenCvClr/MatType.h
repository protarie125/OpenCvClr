#pragma once
#include <opencv2/opencv.hpp>

using namespace System;

namespace OpenCvClr {
	public value class MatType
	{
	private:
		int internalValue_;

	public:
		MatType(int rawValue);

		static operator int(MatType matType);

		static property MatType CV8UC1 {
			MatType get() {
				return MatType(CV_8UC1);
			}
		}

		static property MatType CV8UC3 {
			MatType get() {
				return MatType(CV_8UC3);
			}
		}
	};
}