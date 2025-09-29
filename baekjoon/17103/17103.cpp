#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int max = 1000000;

    vector<bool> isPrime(max, true);

    for (int i = 2; i * i < max; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= max; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, cnt = 0;
        cin >> n;
        for(int j = 2; j <= n / 2; j++) {
            if(isPrime[j] && isPrime[n - j]) cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}