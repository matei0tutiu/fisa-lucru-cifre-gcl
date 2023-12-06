// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    
    unsigned long long int n,m, k;
    
    cout << "n= ";
    cin >> n;
    cout << "k= ";
    cin >> k;
    
    int num[9] = {0};
    
    for(int i = 0; i < 9; i++){
        int cifra = n % 10;
        
        if(cifra == 0) {break;}
        
        m = m * 10 + n % 10;
        n /= 10;
    }
    
    for(int i = 0; i < 9; i++){
        num[i] = m % 10;
        m /= 10;
    }

    cout << num[k];

    return 0;
}
