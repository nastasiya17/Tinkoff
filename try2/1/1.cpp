#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int K, f, x;
	cin >> K;
	f=1;
	for (int i=2; i<=K; i++) {
		f=f*i;
	}

	x=f%10;
	f/=10;
	while (x==0) {
		x=f%10;
		f/=10;
	}

	cout << x << endl;
}
