#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int c, maxl, prev, f, max;
	maxl=0;
	max=1;
	cin >> c;
	while (c) {
		prev=c;
		cin >> c;
		if (c) {
			if (max==1) {
				if (prev > c)
					f=-1;
				else if (prev < c) 
					f=1;
				else 
					f=0;
			}

			if ((f==1)&&(c>prev)) {
				max++;
			}
			else if ((f==-1)&&(c<prev)) {
				max++;
			}
			else if (c==prev) {
				max=1;
			}
			else {
				max=2;
				if (c<prev)
					f=-1;
				else if (c>prev)
					f=1;
				else 
					f=0;
			}
		}

		if (max > maxl) 
			maxl=max;
	}

	cout << maxl << endl;
}
