#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int k;
    cin >> k;

    vector<int> n; 
    for (int i = 0; i < k; i++) {
        int tmp;
        cin >> tmp;

        if(tmp == 0){
            n.pop_back();
            continue;
        }

        n.push_back(tmp);
    }

    unsigned int sum = 0;
    for(vector<int>::iterator i = n.begin(); i != n.end(); i++){
        sum += *i;
    }

    cout << "} \n" << sum;

    return 0;
}