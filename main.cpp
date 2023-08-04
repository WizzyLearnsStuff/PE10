#include<iostream>
#include<vector>

using namespace std;

int main() {
	long long int sum = 0;
	const int lim = 2000001;
	vector<bool> arr(lim);
	fill(arr.begin(), arr.end(), true);
	for (long long int i = 2; i < lim; i++) {
		if (arr[i]) {
			sum += i;
			for (long long int j = i * i; j < lim; j += i) {
				arr[j] = false;
			}
		}
	}

	cout << sum;
}
