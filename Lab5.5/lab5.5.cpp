#include <iostream>

using namespace std;

double C(int k, int n, int level, int &depth) {
	
		if (k == n || k == 0)
			return 1;
		else
			if (n > 0) {
				if (level > depth) {
					depth = level;
					return C(k - 1, n - 1, level + 1, depth) + C(k, n - 1, level + 1, depth);
				}
			}
			else
				return 0;

}

int main() {
	int k, n;
	int depth = 0;

	cout << "k = "; cin >> k;
	cout << "n = "; cin >> n;
	cout << endl;

	
	cout << "C = " << C(k, n, 1, depth) << endl;
	cout << "Depth = " << depth << endl;
	
}