#include <iostream>

using namespace std;

int main()
{
    long long int n;

    cin >> n;

    int ultimaCifra = n % 10;
    int penultimaCifra = (n % 100) / 10;

    if (penultimaCifra < ultimaCifra)
    {
        cout << "VALE!";
    }
    else
    {
        cout << "DEAL!";
    }

    return 0;
}