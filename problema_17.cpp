#include <iostream>

using namespace std;

int main() {
    
    unsigned long long int n, suma;
    
    cin >> n;
    suma = n;
    
    while(suma == n){
        suma = 0;
        while(n > 0){
            int cifra = n % 10;
            n /= 10;
    
            suma += cifra;
        
        }
        if (suma > 10) n = suma;
    
    }
    
    cout << suma;

    return 0;
}
