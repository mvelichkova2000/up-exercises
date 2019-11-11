#include <iostream>
#include <cmath>
using namespace std;

bool isBelowFunction(double x, double y)
{
    if (x + y <= 6)
        return true;
    else
        return false;
}
bool isInSquare(double x, double y)
{
    if ((x >= 2 && x <= 7) && (y >= 2 && y <= 7))
        return true;
    else
        return false;
}
bool isInTriangle(double x, double y)
{
    if (isInSquare(x, y) && isBelowFunction(x, y))
        return true;
    else
        return false;
}
bool isInBigCircle(double x, double y)
{
    if (((x + 9) * (x + 9) + y * y) <= 9)
        return true;
    else
        return false;
}
bool isInSmallCircle(double x, double y)
{
    if (((x + 9) * (x + 9) + y * y) <= 1)
        return true;
    else
        return false;
}
bool isInPokeball(double x, double y)
{
    if (isInBigCircle(x, y) && !isInSmallCircle(x, y) && y >= 0)
        return true;
    else
        return false;
}
int main()
{
    for (int i = 0; i < 32; i++)
    {
        double a, b;
        cin >> a >> b;

        if (isInPokeball(a, b) || isInTriangle(a, b))
        {
            cout << "YES!" << endl;
        }
        else
            cout << "No!" << endl;
    }

    return 0;
}
