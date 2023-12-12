#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    int numere[9] = {0};
    int nrCifre = 0;

    for (int i = 0; n > 0; i++)
    {
        int cifra = n % 10;
        n /= 10;

        nrCifre++;
        numere[i] = cifra;
    }

    for (int i = 0; i < nrCifre; i++)
    {
        int nr = 0;
        for (int j = i; j < i + nrCifre; j++)
        {
            nr = nr * 10 + numere[j % nrCifre];
        }

        cout << nr << " ";
    }
    return 0;
}