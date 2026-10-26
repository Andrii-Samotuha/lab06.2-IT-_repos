
#include "pch.h"
#include "CppUnitTest.h"

#define UNIT_TEST
#include "../Lab_06_2_it/Lab_06_2_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
    TEST_CLASS(UnitTest62)
    {
    public:

        TEST_METHOD(TestAverageMinMax)
        {
            int a[6] = { -20, -8, 0, 4, 16, 11 };

            double expected = -2.0;

            double actual = AverageMinMax(a, 6);

            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}
