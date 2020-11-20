#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\user\Desktop\programming\virtual studio\Labwork1\Labwork1.cpp"
#include <cmath>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
    TEST_CLASS(calculate_Tests)
    {
    public:

        TEST_METHOD(calculate_get4and2_2returned)
        {

            #include <iostream>
            #include <math.h>
            using namespace std;
            int main();
            {
                int   x, n;
                double y;

                cout << "Input n>=3 , n=";
                cin >> n;
                cout << " input x=";
                cin >> x;

                if (x < 0)
                {
                    y = 0;
                    for (int i = 1; i <= n; i++)

                    {
                        for (int j = 1; n >= j; j++)
                            y += 1 / (x - i - j);
                    }
                }
                else
                    if (x >= 0)
                    {
                        y = 1;
                        for (int i = 0; i <= n - 3; i++)
                            y *= (x - i);
                    }
                cout << "x=" << x;

                cout << "y=" << y << endl;
                return;
            }
        }

    public:
        TEST_METHOD(calculate_get5andMinus3_0returned)
        {
            #include <iostream>
            #include <math.h>
            using namespace std;
            int main();
            {
                int   x, n;
                double y;

                cout << "Input n>=3 , n=";
                cin >> n;
                cout << " input x=";
                cin >> x;

                if (x < 0)
                {
                    y = 0;
                    for (int i = 1; i <= n; i++)

                    {
                        for (int j = 1; n >= j; j++)
                            y += 1 / (x - i - j);
                    }
                }
                else
                    if (x >= 0)
                    {
                        y = 1;
                        for (int i = 0; i <= n - 3; i++)
                            y *= (x - i);
                    }
                cout << "x=" << x;

                cout << "y=" << y << endl;
                return;

            }
        
        }
    };
    TEST_CLASS(checkValidParams_Tests)
    {
    public:
        TEST_METHOD(checkValidParams_get5and2_exeptionNotThrown)
        {
            int n = 5;
            double x = 2;

            try
            {
              checkValidParams(n, x);
                Assert::IsTrue(true);
            }
            catch (...)
            {
                Assert::Fail();
            }
        }
    public:
        TEST_METHOD(checkValidParams_get1andMinus1_exceptionThrown)
        {
            int n = 1;
            double x = -1;

            try
            {
                checkValidParams(n, x);
                Assert::Fail();
            }
            catch (...)
            {
                Assert::IsTrue(true);
            }
        }
    };
}