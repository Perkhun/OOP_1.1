#include "pch.h"
#include "CppUnitTest.h"
#include "../12.1/Number.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest121
{
	TEST_CLASS(UnitTest121)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number n;
			n.Init(6, -6);
			Assert::IsTrue(n.getSecond() == 0);
		}
	};
}
