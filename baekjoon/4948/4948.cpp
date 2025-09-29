#include <iostream>
using namespace std;

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int n = 1;

    cin >> n;
    while (n) {
        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++) {
            if(isPrime(i)) cnt++;
        }

        cout << cnt << '\n';
        cin >> n;
    }
    
    return 0;
}