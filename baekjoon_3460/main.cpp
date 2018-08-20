#include <iostream>
using namespace std;

int t, n, c;
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		while (n != 0) {
			if (n % 2 == 1) cout << c << " ";
			c++;
			n /= 2;
		}
		cout << endl;
		c = 0;
	}
	return 0;
}