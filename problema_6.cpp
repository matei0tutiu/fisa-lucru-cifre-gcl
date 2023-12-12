#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    int numar_pare = 0, numar_impare = 0;

    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10; // == n = n / 10

        if (cifra % 2 == 0)
        {
            numar_pare++; // == numar = numar = 1;
        }
        else
        {
            numar_impare++;
        }
    }

    if (numar_pare == numar_impare)
    {
        cout << "NUMARUL CIFRE PARE = NUMAR CIFRE IMPARE";
    }
    else
    {
        cout << "NUMARUL CIFRE PARE != NUMAR CIFRE IMPARE";
    }

    return 0;
}