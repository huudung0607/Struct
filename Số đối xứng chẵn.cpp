#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct word {
  string data;
  int fre;
};

bool check(string s) {
	int l = 0, r = s.size() - 1;
	while (l <= r) {
		if (s[l] != s[r]) return false;
		int x = s[l] - '0', y = s[r] = '0';
		if (x % 2 == 1 || y % 2 == 1) return false;
		++l; --r;
	}
	return true;
}

bool cmp(word a, word b) {
	return a.fre > b.fre;
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
	stable_sort(v.begin(), v.end(), cmp);
	for (word x : v) {
		cout << x.data << " " << x.fre << endl;
	}
}
