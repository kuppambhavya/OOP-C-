#include <iostream>
using namespace std;
int main() {
	int n, i;
	cout<<"given number:";
	cin >> n;
	if (n <= 0) {
		cout << "Invalid";
		return 0;
	}
	int count = 0;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	cout << "Number of factors = " << count << endl;
	int N;
	cout<<"N=";
	cin >> N;
	if (N > count) {
		cout << "Invalid";
		return 0;
	}
	int j = 1, k = 1;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			if (j == N) {
				cout << N << "th factor of " << n << " = " << i;
				break;
			}
			j++;
		}
	}
}
