#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cin >> m >> n;

    if (m == 1) m = 2;

    for (int i = m; i <= n; i++) {

        bool flag = true;
        for (int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << i << endl;
        }
    }

    return 0;
}