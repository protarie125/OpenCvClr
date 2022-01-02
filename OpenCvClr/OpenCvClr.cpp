#include "pch.h"
#include "OpenCvClr.h"

OpenCvClr::Mat^ OpenCvClr::Cv::ImRead(String^ filename, OpenCvClr::ImreadModes imreadModes)
{
	return gcnew OpenCvClr::Mat(filename, imreadModes);
}

bool OpenCvClr::Cv::ImWrite(String^ filename, OpenCvClr::Mat^ mat)
{
	try
	{
		return mat->ImWrite(filename);
	}
	catch (...)
	{
		return false;
	}
}