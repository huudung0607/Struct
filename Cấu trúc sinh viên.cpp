#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
struct SinhVien {
	string ten, ngaySinh, diaChi;
	int toan, ly, hoa, tongDiem;

	void nhap() {
		getline(cin, ten);
		cin >> ngaySinh;
		cin.ignore();
		getline(cin, diaChi);
		cin >> toan >> ly >> hoa;
		tongDiem = toan + ly + hoa;
	}
	void inTk() {
		cout << ten << " " << ngaySinh << " " << diaChi << " " << tongDiem;
	}
	void in() {
		cout << ten << " " << ngaySinh << " " << diaChi << " " << tongDiem << " "
			<< (tongDiem >= 24 ? "DO" : "TRUOT");
	}
};
int main() {
	int n; cin >> n;
	SinhVien a[n];
	int diemMax = 0;
	for (int i = 0; i < n; i++) {
		cin.ignore();
		a[i].nhap();
		diemMax = max(diemMax, a[i].tongDiem);
	}
	cout << "DANH SACH THU KHOA :" << endl;
	for (int i = 0; i < n; i++) {
		if (a[i].tongDiem == diemMax) {
			a[i].inTk();
			cout << endl;
		}
	}
	cout << "KET QUA XET TUYEN:" << endl;
	for (int i = 0; i < n; i++) {
		a[i].in();
		cout << endl;
	}

}
