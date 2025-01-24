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
struct sophuc {
	long long thuc, ao;
	friend istream& operator >> (istream& in, sophuc &sp)
	{
		in >> sp.thuc >> sp.ao;
		return in;
	}
	friend ostream& operator << (ostream& out, sophuc sp)
	{
		out << sp.thuc << " " << sp.ao;
		return out;
	}
	friend sophuc operator + (sophuc a, sophuc b)
	{
		sophuc tmp;
		tmp.thuc = a.thuc + b.thuc;
		tmp.ao = a.ao + b.ao;
		return tmp;
	}
	friend sophuc operator - (sophuc a, sophuc b)
	{
		sophuc tmp;
		tmp.thuc = a.thuc - b.thuc;
		tmp.ao = a.ao - b.ao;
		return tmp;
	}
	friend sophuc operator * (sophuc a, sophuc b)
	{
		sophuc tmp;
		tmp.thuc = a.thuc * b.thuc - a.ao * b.ao;
		tmp.ao = a.thuc * b.ao + a.ao * b.thuc;
		return tmp;
	}
};
int main() {
	sophuc a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
}
