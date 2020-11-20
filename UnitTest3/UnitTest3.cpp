#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\user\Desktop\programming\virtual studio\Labworkrange\Labworkrange.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(calculate_Tests)
	{
	public:
		
		TEST_METHOD(calculate_get4and2_2returned)
		{
			int n = 4;
			double x = 2;
			int expected = 2;

			int actual = calculate(n, x);
			Assert::AreEqual(expected, actual);
		}
	};
}
