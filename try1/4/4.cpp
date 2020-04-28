#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int A, X, N;
	cin >> A >> X >> N;
	A=A+X*(N-1);
	cout << A; 
	for (int i=0; i<N-1; i++) {
		A=A-X;
		cout << " " << A;
	}
	cout << endl;
}
