
// lab work.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int  a, b, x, n;
    double y;
    int step;
    cout << "Input n>=3 , n=";
    cin >> n;
    cout << " input a=";
    cin >> a;
    cout << " input b=";
    cin >> b;
    cout << " Input step";
    cin >> step;
    for (int x = a; x <= b; x += step)
    {
        if (x < 0)
        {
            y = 0;
            for (int i = 1; i <= n; i++)

            {
                for (int j = 1; j >= n; j++)
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
    }
    return 0;
}


