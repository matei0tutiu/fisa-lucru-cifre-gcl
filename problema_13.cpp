#include <iostream>
using namespace std;

void ScrieStele(int n){
    for(int i = 0; i < n; i++){
        cout << '*';
    }
}

int main() {
    
    unsigned long long int n;
    
    cin >> n;
    
    int frec[10] = {0};
    
    for(int i = 0; n != 0; i++){
        int cifra = n % 10;
        n /= 10;
        
        frec[cifra]++;
    }
    
    for(int i = 0;i < 10; i++){
        cout << i << ":";
        ScrieStele(frec[i]);
        cout << '\n';
    }

    return 0;
}
