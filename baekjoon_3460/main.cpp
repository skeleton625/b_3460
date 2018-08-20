#include <iostream>
using namespace std;

int t, n;
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; n; i++) {
			if (n & 1) cout << i << " ";
			n >>= 1;
		}
		cout << endl;
	}
	return 0;
}