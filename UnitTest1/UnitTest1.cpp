#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Asus\Desktop\1 курс\мпзз\мпзз\мпзз.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(calculate_Tests)
    {
    public:
        TEST_METHOD(calculate6_and_5_21rtn)
        {
            int n = 6;
            int x = 5;
            int expec = 21;
            int actual = y(n, x);
            Assert::AreEqual(expec, actual);
        }

    public:
        TEST_METHOD(calculate8_and_10_78rtn)
        {
            int n = 8;
            int x = 10;
            int expec = 78;
            int actual = y(n, x);
            Assert::AreEqual(expec, actual);
        }
    };

    TEST_CLASS(checkValidParams_Tests)
    {
    public:
        TEST_METHOD(checkValidParams_minus100)
        {
            int n = -100;
            int x = -100;
            try
            {
                checkValidParams(n, x);
                Assert::Fail();
            }
            catch (...) {
                Assert::IsTrue(true);
            }
        }
    };
}