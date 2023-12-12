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

        if (ultima_cifra != cifra)
        {
            cout << "cifrele NU sunt egale";
            return 0;
        }
    }

    cout << "cifrele sunt egale";

    return 0;
}