#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
long long gcd(int a, int b)
{
	if (b==0)
	{
		return a;
	}
	return gcd(b, a % b);
}
struct PhanSo {
	long long tu, mau;
	friend istream& operator >> (istream& in, PhanSo& ps) {
		in >> ps.tu >> ps.mau;
		return in;
	}
	friend ostream& operator << (ostream& out, PhanSo ps) {
		long long mc = gcd(ps.tu, ps.mau);
		ps.tu /= mc;
		ps.mau /= mc;
		if (ps.mau < 0) {
			ps.mau *= -1;
			ps.tu *= -1;
		}
		out << ps.tu << "/" << ps.mau << endl;
		return out;
	}
	friend PhanSo operator + (PhanSo a, PhanSo b) {
		PhanSo tmp;
		tmp.tu = a.tu * b.mau + b.tu * a.mau;
		tmp.mau = a.mau * b.mau;
		return tmp;
	}
	friend PhanSo operator - (PhanSo a, PhanSo b) {
		PhanSo tmp;
		tmp.tu = a.tu * b.mau - b.tu * a.mau;
		tmp.mau = a.mau * b.mau;
		return tmp;
	}
};
int main() {
	PhanSo a, b; cin >> a >> b;
	cout << a << endl << b << endl << a + b << endl << a - b;
}
