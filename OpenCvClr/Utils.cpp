#include "pch.h"
#include "Utils.h"

void OpenCvClr::Utils::StringToStdString(String^ input, std::string& output)
{
	using namespace Runtime::InteropServices;

	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(input)).ToPointer();
	output = chars;

	Marshal::FreeHGlobal(IntPtr((void*)chars));
}
