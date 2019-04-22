#include<iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    int K;
    cin >> S;

    vector<string> V;

    for (int i = 0; i < S.size(); ++i) {
        for (int j = i; j < S.size(); ++j) {
            if(j - i + 1 > 5){
                break;
            }
            V.push_back(S.substr(i, j-i+1));
        }
    }

    cin >> K;
    sort(V.begin(), V.end());
    unique(V.begin(), V.end());

    cout << V[K - 1] <<endl;

    return 0;
}