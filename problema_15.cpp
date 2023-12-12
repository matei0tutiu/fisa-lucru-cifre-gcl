#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    long long int numere[9] = {n};

    for (int i = 0; i < 9; i++)
    {
        numere[i] = n;
    }

    int nrCifre = 0;
    int m = 10;

    numere[0] = numere[0] / 10;

    for (int i = 1; n > 0; i++)
    {
        int cifra = n % 10;
        n /= 10;

        numere[i] = (numere[i] / (m * 10)) * m + (numere[i] % m);

        m *= 10;
        nrCifre++;
    }

    long long int n_max = LLONG_MIN;

    for (int i = 0; i < nrCifre; i++)
    {

        if (numere[i] > n_max)
        {
            n_max = numere[i];
        }
    }

    cout << n_max;

    return 0;
}