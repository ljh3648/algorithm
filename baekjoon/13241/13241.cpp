#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    long long int a, b;

    cin >> a >> b;

    long long int result = (a * b) / __gcd(a, b);
    cout << result;

    return 0;
}