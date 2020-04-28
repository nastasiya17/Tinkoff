#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int n, m, k, f,i,j;
	cin >> n >> m;
	k=0;
	f=0;
	j=0;
	for (i=0; i<n; i++) {
		if (f)
			k=k+j-1;
		for (j=0; j<m; j++) {
			if (k/10 == 0)
				cout << "  ";
			else if ((k/10 > 0)&&(k/100 == 0))
				cout << " ";
			cout << k;
			if (f)
				k--;
			else 
				k++;
		}
		if (f) {
			f=0;
		    k=k+j+1;
		}
		else 
			f=1;
		cout << endl;
	}
	cout << endl;
}
