#include <iostream>

using namespace std;

int main()
{

    long long int n;

    cin >> n;

    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10;

        if (cifra == 0)
        {
            cout << "numarul are cifre de zero";
            return 0;
        }
    }
    cout << "numarul NU are cifre de zero";
    return 0;
}