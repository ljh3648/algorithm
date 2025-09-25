#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cin >> m >> n;

    // 체는 소수가 아닌것들을 미리 판단할 수 있음.

    bool isPrime[n - m + 1] = { false };

    for (int i = m; i <= n; i++) {
        if (isPrime[i - m]) continue;

        bool flag = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            for (int k = i; k <= n; k *= i) {
                isPrime[k - m] = false; // 소수가 아님
            }
        }
    }

    for (int i = 0; i <= n - m; i++) {
        if(!isPrime[i]) continue;
        cout << isPrime[i] << "\n";
    }

    return 0;
}