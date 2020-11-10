#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.2(1)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			
			int x = 1;
				int n = 0;
				double a = 1 / x;
				int s = a;
				int eps = 1;
				
				
				do
				{
					n++;
					A(x, n, a);
					s += a;

				} while (abs(a) >= eps);
			
				int R = (2 * n);
				a *= R;
				Assert::AreEqual(R, 1);
			
		}
	}; 
}
