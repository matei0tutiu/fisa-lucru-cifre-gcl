#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    int produs = 1;

    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10; // == n = n / 10

        if (cifra % 2 == 0)
        {
            produs *= cifra; // acelasi lucru cu produs = produs * cifra;
        }
    }

    cout << produs;

    return 0;
}