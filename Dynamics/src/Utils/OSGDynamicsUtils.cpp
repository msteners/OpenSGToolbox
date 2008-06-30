#include "OSGDynamicsUtils.h"

#include <OpenSG/OSGBaseFunctions.h>

OSG_BEGIN_NAMESPACE


UInt32 stlBinarySearch(std::vector<Real32> vector, UInt32 lowerBound, UInt32 upperBound, Real32 value)
{
	UInt32 hi, mid, lo;
	hi = upperBound;
	lo = lowerBound;
	mid = (lo + hi) / 2;
	
	if(lo == hi)
	{
		return -1;
	}
	
	if (value == vector[mid])
	{
		return mid;
	}
	else
	{
		if (value < vector[mid])
		{
			return stlBinarySearch(vector, lo, mid - 1, value);
		}
		else
		{
			return stlBinarySearch(vector, mid, hi, value);
		}
	}
}

UInt32 stlLowerBound(std::vector<Real32> vector, UInt32 lowerBound, UInt32 upperBound, Real32 value)
{
	UInt32 hi, mid, lo;
	hi = upperBound;
	lo = lowerBound;
	mid = static_cast<UInt32>(osgceil(static_cast<Real32>(lo + hi) / 2.0f));
	
	if (lo == hi)
	{
		return mid;
	}
	
	if (value >= vector[mid])
	{
			return stlLowerBound(vector, mid, hi, value);
	}
	else
	{
		return stlLowerBound(vector, lo, mid - 1, value);
	}
}

std::string addStringBetweenUpperCaseChange(const std::string& Source, const std::string& Pad)
{
	std::string Result(Source);
	
	for (UInt32 i(0); i < Result.size() - 2; ++i)
	{
		if ((97 <= Result[i] && Result[i] <= 122) && (65 <= Result[i + 1] && Result[i + 1] <= 90))
		{
			Result.insert(i+1, Pad);
		}
	}
	
	return Result;
}
OSG_END_NAMESPACE
