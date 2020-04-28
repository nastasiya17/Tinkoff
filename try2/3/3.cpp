#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	double X,Y,S,St;
	int k;
	cin >> X >> Y;
	S=X;
	St=X;
	k=1;
	while (S<Y) {
		St=1.7*St;
		S=S+St;
		k++;
	}

	cout << k << endl;
}
