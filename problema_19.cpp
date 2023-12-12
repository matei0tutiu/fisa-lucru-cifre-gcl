#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    int nrCifre = 0;
    int numar[9] = {0};

    for (int i = 0; n > 0; i++)
    {
        numar[i] = n % 10;
        n /= 10;
        nrCifre++;
    }

    cout << '\n';

    if (nrCifre % 2 == 0)
    {
        for (int i = nrCifre / 2 - 1; i >= 0; i--)
        {
            for (int j = 0; j < nrCifre - 2 * i; j++)
            {
                cout << numar[nrCifre - (i + j) - 1];
            }
            cout << '\n';
        }
    }
    else
    {
        for (int i = nrCifre / 2; i >= 0; i--)
        {
            for (int j = 0; j < nrCifre - 2 * i; j++)
            {
                cout << numar[nrCifre - (i + j) - 1];
            }
            cout << '\n';
        }
    }

    return 0;
}