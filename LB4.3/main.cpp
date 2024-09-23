#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, y, a, b, c, F;
    double g;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << fixed;
    cout << "----------" << endl;
    cout << "|" << setw(5) << "F" << setw(4) << "|" << endl;
    cout << "----------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x < 3 && b != 0)
            F = ((a * pow(x, 2)) - (b * x) + c);
        else
            if (x > 3 && b == 0)
                F = (x - a) / (x - c);
            else
                F = x / c;

        cout << "|" << setw(7) << setprecision(2) << F
            << " |" << endl;
        x += dx;
    }
    cout << "----------" << endl;
    return 0;
}
