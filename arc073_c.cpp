#include <iostream>
#include <algorithm>
#include <vector>

typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N,T;
    cin >> N >> T;
    vector<int>t(N);

    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }

    int tmp = 0;

    for (int i = 1; i < N; i++) {
        tmp += min(T,t[i]-t[i-1]);
    }
    
    tmp += T;
    
    cout << tmp << endl;

    return 0;
}