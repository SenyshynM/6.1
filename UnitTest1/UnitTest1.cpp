#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1/6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 0; 
			int sum = 0;
			const int n = 21;
			int c[n] = {16, 72, 77, 26, 44, 20, 43, 60, 83, 35, 58, 19, 57, 27, 64, 35, 65, 65, 34, 36, 57};
			
			format_mas(c, sum, k, n);
			
			Assert::AreEqual(12, k);
			Assert::AreEqual(589, sum);
		}
	};
}
