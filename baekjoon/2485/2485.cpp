#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int* arr = new int[n];
    int* space = new int[n - 1];

    cin >> arr[0];
    cin >> arr[1];
    space[0] = arr[1] - arr[0];

    int gcd = space[0];
    for(int i = 2; i < n; i++){
        cin >> arr[i];
        space[i - 1] = arr[i] - arr[i - 1];
        gcd = __gcd(gcd, space[i - 1]);
    }

    int result = 0;
    for(int i = 0; i < n - 1; i++){
        result += (space[i] / gcd) - 1;
    }

    cout << result << endl;
    return 0;
}