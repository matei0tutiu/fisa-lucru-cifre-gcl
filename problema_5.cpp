#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    int cifra_minima = 10;

    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10; // == n = n / 10

        if (cifra < cifra_minima)
        {
            cifra_minima = cifra;
        }
    }

    cout << cifra_minima;

    return 0;
}