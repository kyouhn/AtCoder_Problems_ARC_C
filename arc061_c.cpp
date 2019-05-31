#include"bits/stdc++.h"

using namespace std;

int main() {
	string S;
	cin >> S;
	long long ans = 0;
	for (int i = 0; i < (1 << (S.size()-1)); i++)
	{
		string now = "";
		now += S[0];
		for (int j = 0; j < S.size()-1; j++)
		{
			if (i&(1 << j)) {
				now += "+";
			}
			now += S[j + 1];
		}
		long long sum = 0;
		int pos = 0;
		while (now.find("+", pos) != string::npos) {
			int nextpos = now.find("+", pos);
			ans += stoll(now.substr(pos, nextpos - pos));
			pos = nextpos + 1;
		}
		ans += stoll(now.substr(pos));
	}

	cout << ans << endl;
	return 0;
}