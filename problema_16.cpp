#include <iostream>
using namespace std;

int main()
{

    unsigned long long int n, k;

    cout << "n= ";
    cin >> n;
    cout << "k= ";
    cin >> k;

    int num[9] = {0};
    int nrCifre = 0;

    for (int i = 0; n > 0; i++)
    {
        num[i] = n % 10;
        nrCifre++;
        n /= 10;
    }

    cout << num[nrCifre - 1 - k];

    return 0;
}
