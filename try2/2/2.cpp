#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	char c;
	int k;
	bool f;
	k=0;
	cin.get(c);
	while (c!='\n') {
		f=0;
		if ((c==':')||(c==';')) {
			cin.get(c);
			while ((c==':')||(c==';')) {
				cin.get(c);
			}
			while (c=='-') {
				cin.get(c);
			}

			if ((c==':')||(c==';')) 
				f=1;
			else if ((c=='(')||(c==')')||(c==']')||(c=='[')) 
				k++;
		}
		if (!f)
			cin.get(c);
	}

	cout << k << endl;
}
