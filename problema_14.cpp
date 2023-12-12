#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    int cifra_max = -1;

    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10;

        if (cifra > cifra_max)
        {
            cifra_max = cifra;
        }
    }

    cout << cifra_max + 1;

    return 0;
}