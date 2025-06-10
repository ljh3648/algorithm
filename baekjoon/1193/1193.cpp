#include <iostream>
using namespace std;

int main(void){
	int N, sum = 0, psum, layer = 0;
	cin >> N;

	while( sum < N ){
		layer++;
		sum += layer;
	}
	psum = (layer - 1) * layer / 2;
	
	int num,den;

	if( layer % 2 == 0){
		num = N - psum;
		den = (layer + 1) - num; 
	}
	else {
		den = N - psum;
		num = (layer + 1) - den; 
	}

	cout << num << "/" << den;
	
	return 0;
}

//g++-13 -g *.cpp -o main