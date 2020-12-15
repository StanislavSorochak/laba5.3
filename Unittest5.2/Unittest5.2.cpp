#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Unittest52
{
	TEST_CLASS(Unittest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			//int f=0;
			t = f(2);
			Assert::AreEqual(t, 0.717258, 00591505.);

		}
	};
}
