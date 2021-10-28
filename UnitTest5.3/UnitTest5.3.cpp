#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
				int x = 0;
				int z;
				z = (1 + exp(x) + sin(x));
				Assert::AreEqual(z, 2);
		}
	};
}