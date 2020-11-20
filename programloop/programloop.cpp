#include <iostream>

using namespace std;

int main()
{
    double x, y = 0;
    int i, n;
    cout << "Input x : ";
    cin >> x;
    cout << "Input n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (1 > n)
        {
            cout << "Error!\n";
            break;
        }
        else {
            y += n / (x + 2 * n);
        }

    }
    if (i > n)    // Sum is calculated
        cout << "y = " << y << "\n";
    return 0;
}
