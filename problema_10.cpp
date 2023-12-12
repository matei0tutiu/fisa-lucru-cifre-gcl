#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    long long copie = n, invers = 0;

    while (copie > 0)
    {
        int cifra = copie % 10;
        copie /= 10;

        invers = invers * 10 + cifra;
    }

    if (invers == n)
    {
        cout << "palindrom";
    }
    else
    {
        cout << "NU este palindrom";
    }

    return 0;
}