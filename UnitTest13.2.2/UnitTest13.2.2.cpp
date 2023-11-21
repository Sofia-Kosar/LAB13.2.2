#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../LAB13.2.2/LAB13.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1322
{
	TEST_CLASS(UnitTest1322)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 2;

			// Act
			int result = LINE_NUMBER;

			// Assert
			Assert::AreEqual(result, 19);
		}
	};
}
