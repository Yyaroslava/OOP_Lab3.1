#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab3.1/Triad.h"
#include "../OOP Lab3.1/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date d1(1975,4,1), d2(1974,10,15);
			Assert::AreEqual(d1 > d2, false);
		}
	};
}
