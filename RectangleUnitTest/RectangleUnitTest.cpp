#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleUnitTest
{
	TEST_CLASS(RectangleUnitTest)
	{
	public:
		
		TEST_METHOD(GetPerimeter_ValidInputs_ReturnsCorrectPerimeter)
		{
			int lenght = 5, width = 10;
			int result = getPerimeter(&lenght, &width);
			Assert::AreEqual(30, result); // 2 * (5 + 10)

		}
		
		TEST_METHOD(GetArea_ValidInputs_ReturnsCorrectArea)
		{
			int lenght = 10, width = 5;
			int result = getArea(&lenght, &width);
			Assert::AreEqual(50, result); // 10 * 5
		}

		TEST_METHOD(SetLength_ValidInput_SetsLength)
		{
			int length = 0;            // Initial length value is set to 0.
			setLength(50, &length);     // Call setLength with a valid input of 50.
			Assert::AreEqual(50, length); // Check if length was correctly set to 50.
		}

		TEST_METHOD(SetLength_LowerBoundary_SetsLength) 
		{
			int length = 0;            // Initial length value is set to 0.
			setLength(1, &length);     // Call setLength with the minimum boundary input of 1.
			Assert::AreEqual(1, length); // Check if length was correctly set to 1.
		}

		TEST_METHOD(SetLength_UpperBoundary_SetsLength) 
		{
			int length = 0;            // Initial length value is set to 0.
			setLength(99, &length);    // Call setLength with the maximum boundary input of 99.
			Assert::AreEqual(99, length); // Check if length was correctly set to 99.
		}

		TEST_METHOD(SetWidth_ValidInput_SetsWidth)
		{
			int Width = 0;            // Initial Width value is set to 0.
			setWidth(50, &Width);     // Call setWidth with a valid input of 50.
			Assert::AreEqual(50, Width); // Check if Width was correctly set to 50.
		}

		TEST_METHOD(SetWidth_LowerBoundary_SetsWidth)
		{
			int Width = 0;            // Initial Width value is set to 0.
			setWidth(1, &Width);     // Call setWidth with the minimum boundary input of 1.
			Assert::AreEqual(1, Width); // Check if Width was correctly set to 1.
		}

		TEST_METHOD(SetWidth_UpperBoundary_SetsWidth)
		{
			int Width = 0;            // Initial Width value is set to 0.
			setWidth(99, &Width);    // Call setWidth with the maximum boundary input of 99.
			Assert::AreEqual(99, Width); // Check if Width was correctly set to 99.
		}
	
	};
}
