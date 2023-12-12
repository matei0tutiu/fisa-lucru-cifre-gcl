#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    int suma = 0;

    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10; // == n = n / 10

        if (cifra % 2 == 1)
        {
            suma += cifra; // == suma = suma + cifra
        }
    }

    cout << suma;

    return 0;
}