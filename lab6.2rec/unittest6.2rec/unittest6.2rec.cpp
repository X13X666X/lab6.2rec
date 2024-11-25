#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RecursiveTest
{
    TEST_CLASS(RecursiveTest)
    {
    public:
        TEST_METHOD(TestSumOddIndices) {
            int arr[5] = { 1, 2, 3, 4, 5 };
            Assert::AreEqual(6, SumOddIndices(arr, 5));
        }
    };
}