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
	for (int i = 0; i < n; i++) {
		cin.ignore();
		a[i].nhap();
	}
	for (int i = 0; i < n; i++) {
		if (a[i].diaChi == "Nam Dinh" && a[i].gpa >= 2.5) {
			a[i].in();
			cout << endl;
		}
	}
}
