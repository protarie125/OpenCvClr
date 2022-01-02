#pragma once
#include <opencv2/opencv.hpp>

using namespace System;

namespace OpenCvClr {
	public enum class ImreadModes
	{
		Unchanged = cv::ImreadModes::IMREAD_UNCHANGED,
		Grayscale = cv::ImreadModes::IMREAD_GRAYSCALE,
		Color = cv::ImreadModes::IMREAD_COLOR,
		Anydepth = cv::ImreadModes::IMREAD_ANYDEPTH,
		Anycolor = cv::ImreadModes::IMREAD_ANYCOLOR,
		LoadGdal = cv::ImreadModes::IMREAD_LOAD_GDAL,
		ReducedGrayscale2 = cv::ImreadModes::IMREAD_REDUCED_GRAYSCALE_2,
		ReducedColor2 = cv::ImreadModes::IMREAD_REDUCED_COLOR_2,
		ReducedGrayscale4 = cv::ImreadModes::IMREAD_REDUCED_GRAYSCALE_4,
		ReducedColor4 = cv::ImreadModes::IMREAD_REDUCED_COLOR_4,
		ReducedGrayscale8 = cv::ImreadModes::IMREAD_REDUCED_GRAYSCALE_8,
		ReducedColor8 = cv::ImreadModes::IMREAD_REDUCED_COLOR_8,
		IgnoreOrientation = cv::ImreadModes::IMREAD_IGNORE_ORIENTATION
	};
}