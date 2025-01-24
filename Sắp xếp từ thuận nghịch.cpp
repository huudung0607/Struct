#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct word {
  string data;
  int fre;
};

bool check(string s) {
	string t = s;
	reverse(t.begin(), t.end());
	return t == s;
}

bool cmp(word a, word b) {
	if (a.fre != b.fre) return a.fre > b.fre;
	else return a.data < b.data;
}

int main() {
    string x; 
    vector<word> v;
    while (cin >> x) {
    	if (!check(x)) continue;
    	bool ok = false; // x chua ton tai trong vector
    	for (int i = 0; i < v.size(); i++) {
    		if (v[i].data == x) {
    			v[i].fre++;
    			ok = true; // ton tai roi
    			break;
			}
		}
		if (!ok) v.push_back({x, 1});
	}
	sort(v.begin(), v.end(), cmp);
	for (word x : v) {
		cout << x.data << " " << x.fre << endl;
	}
}
