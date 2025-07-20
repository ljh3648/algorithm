#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;

    int *a_arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a_arr[i];
    }

    int *b_arr = new int[m];
    for (int i = 0; i < m; i++) {
        cin >> b_arr[i];
    }

    sort(a_arr, a_arr + n);
    sort(b_arr, b_arr + m);

    int result = 0;
    for (int i = 0; i < n; i++) {
        if (binary_search(b_arr, b_arr + m, a_arr[i])){
            result+=2;
        }
    }

    cout << n + m - result;

    return 0;
}