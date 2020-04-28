#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int N,M, min, x, i, j, r, min1, min2;
	cin >> N;
	vector <int> v1;
	vector <int> v2;
	for (i=0; i<N; i++) {
		cin >> x;
		v1.push_back(x);
	}
	cin >> M;
	for (i=0; i<M; i++) {
		cin >> x;
		v2.push_back(x);
	}

	i=0;
	j=0;
	min=abs(v1[0]-v2[0]);
	min1=0;
	min2=0;
	while ((i<v1.size())&&(j<v2.size())) {
		r=v1[i]-v2[j];

		if (abs(r)<min) {
			min=abs(r);
			min1=i;
			min2=j;
		}

		if (r>0) 
			j++;
		else if (r<0)
			i++;
		else 
			break;
	}

	cout << v1[min1] << " " << v2[min2] << endl;

}
