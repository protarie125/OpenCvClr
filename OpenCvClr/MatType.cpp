#include "pch.h"
#include "MatType.h"

OpenCvClr::MatType::MatType(int rawValue)
	: internalValue_{ rawValue }
{
}

OpenCvClr::MatType::operator int(MatType matType)
{
	return matType.internalValue_;
}
