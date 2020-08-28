#include <iostream>
using namespace std;
int main() {
	int total, x, y, z;
	cout << "Total number of seconds: \n";
	cin >> total;
	x = total / 3600;
	total = total % 3600;
	y = total / 60;
	z = total % 60;
	cout << x << " hours, " << y << " minutes, and " << z << " seconds.\n";
	return 0;
}
