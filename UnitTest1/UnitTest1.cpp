#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3E/Time.h"
#include "../lab3.3E/Time.cpp"
#include "../lab3.3E/Triad.h"
#include "../lab3.3E/Triad.cpp"
#include "../lab3.3E/Object.h"
#include "../lab3.3E/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triad tr1(1, 2, 3);
			int t = tr1.getHour();
			Assert::AreEqual(1, t);
		}
	};
}
