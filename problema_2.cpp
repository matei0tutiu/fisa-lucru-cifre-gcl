#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    int numar = 0;

    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10; // == n = n / 10

        if (cifra % 2 == 1)
        {
            numar++; // == numar = numar = 1;
        }
    }

    cout << numar;

    return 0;
}