#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    int ultima_cifra = n % 10;

    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10;

        if (cifra > ultima_cifra)
        {
            cout << "cifrele NU sunt in ordine crescatoare";
            return 0;
        }

        ultima_cifra = cifra;
    }

    cout << "cifrele sunt in ordine crescatoare";

    return 0;
}