#include "pch.h"

#include "Mat.h"

OpenCvClr::Mat::Mat()
{
	nativeMat_ = new cv::Mat();
}

OpenCvClr::Mat::Mat(String^ filename, OpenCvClr::ImreadModes flags)
{
	auto str = std::string{};
	OpenCvClr::Utils::StringToStdString(filename, str);

	nativeMat_ = new cv::Mat{ cv::imread(str, (int)flags) };
}

OpenCvClr::Mat::Mat(int rows, int cols, OpenCvClr::MatType type)
{
	nativeMat_ = new cv::Mat(rows, cols, (int)type);
}

bool OpenCvClr::Mat::ImWrite(String^ filename)
{
	try
	{
		auto str = std::string{};
		OpenCvClr::Utils::StringToStdString(filename, str);

		return cv::imwrite(str, *nativeMat_);
	}
	catch (...)
	{
		return false;
	}
}
