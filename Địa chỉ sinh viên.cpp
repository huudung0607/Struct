#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

// friend + kieu_tra_ve + operator + toan_tu + (....)
struct SinhVien {
	string ten, ngaySinh, diaChi;
	double gpa;
	void nhap() {
		getline(cin, ten);
		cin >> ngaySinh;
		cin.ignore();
		getline(cin, diaChi);
		cin >> gpa;
	}
	void in() {
		cout << ten << " " << ngaySinh << " " << diaChi << " " << fixed << setprecision(2) << gpa;
	}
};

int main() {
	int n; cin >> n;
	SinhVien a[n];
	map<string, int>mp;
	for (int i = 0; i < n; i++) {
		cin.ignore();
		a[i].nhap();
		mp[a[i].diaChi]++;
	}
	int maxValue = 0;
	for (auto x : mp) {
		maxValue = max(maxValue, x.second);
	}
	for (auto x : mp) {
		if (x.second == maxValue) {
			cout << x.first << endl;
		}
	}
}
