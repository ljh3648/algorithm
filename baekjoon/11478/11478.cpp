#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {
    string str;
    cin >> str;

    int len = str.size();
    set<string> arr;
    for (int i = 0; i < len; i++) {
        string temp;
        for (int j = 0; j < len - i; j++) {
            temp = str.substr(j, i + 1);
            arr.insert(temp);
        }
    }
    
    cout << arr.size() << endl;

    return 0;
}