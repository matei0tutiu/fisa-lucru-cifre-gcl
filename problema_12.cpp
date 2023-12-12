#include <iostream>

using namespace std;

int main()
{
    long long int n, x;

    cout << "n= ";
    cin >> n;
    cout << "x= ";
    cin >> x;

    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10;

        if (cifra != x)
        {
            cout << "n NU are toate cifrele egale cu " << x;
            return 0;
        }
    }

    cout << "n are toate cifrele egale cu " << x;

    return 0;
}