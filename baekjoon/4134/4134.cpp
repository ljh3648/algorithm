#include <iostream>
using namespace std;

bool f(unsigned int n){
    unsigned int x = 2;
    
    for (unsigned int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main(void) {
    int t = 0;
    cin >> t;

    for(int i = 0; i < t; i++){
        unsigned int n;
        cin >> n;

        while(true){
            if(f(n)) break;
            n++;
        }

        if(n < 2) n = 2;
        cout << n << endl;
    }

    return 0;
}