#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = C(2, 3);
			Assert::AreEqual(t, 3);
		}
	};
}
