#include <iostream>
using namespace std;


int main() {
    
    unsigned long long int n, k;
    
    cout << "n= ";
    cin >> n;
    cout << "k= ";
    cin >> k;
    
    int num[9] = {0};
    int nrCifre = 0;
    
    for(int i = 0; i < 9; i++){
        num[i] = n % 10;
        nrCifre++;
        n /= 10;
        if(n == 0) break;
    }
    

    cout << num[nrCifre - 1 - k];

    return 0;
}
