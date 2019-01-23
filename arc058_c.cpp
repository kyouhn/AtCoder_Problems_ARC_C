#include<iostream>

using  namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int D[15];
	for (int i = 0; i < K; i++) {
		cin >> D[i];
	}

	int ans = N;

	while (true) {
		int cp = ans;
		bool not_emerge = true;
		while (cp != 0) {
			for (int i = 0; i < K; i++) {
				if (cp % 10 == D[i]) {
					not_emerge = false;
				}
			}
			cp /= 10;
		}
		if (not_emerge) {
			cout << ans << endl;
			return 0;
		}
		ans++;
	}

	return 0;
}