#include <iostream>

using namespace std;

double C(int k, int n) {
	if (k == n || k == 0)
		return 1;
	else
		if (n > 0) {
			return C(k - 1, n - 1) + C(k, n - 1);
		}
		else
			return 0;
}

int main() {
	int k, n;

	cout << "k = "; cin >> k;
	cout << "n = "; cin >> n;
	cout << endl;

	cout << "Depth = " << n << endl;
	cout << "C = " << C(k, n);
	
}