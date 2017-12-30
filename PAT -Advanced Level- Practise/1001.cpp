#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		int c = a + b;
		if (abs(c) < 1000)
			cout << c << endl;
		else {
			int i;
			for (i = 1; i <= 8; i++) {
				int bit = abs(c) / pow(10, i);
				if (bit == 0)
					break;
			}
			switch (i) {
			case 1:
			case 2:
			case 3:
				cout << c << endl;
				break;
			case 4:
			case 5:
			case 6:
				if (c >= 0) {
					cout << c / 1000 << ",";
					if (c % 1000 < 10)
						cout << "00" << c % 1000 << endl;
					else if (c % 1000 < 100)
						cout << "0" << c % 1000 << endl;
					else
						cout << c % 1000 << endl;
				}
				else {
					cout << c / 1000 << ",";
					if (-c % 1000 < 10)
						cout << "00" << -c % 1000 << endl;
					else if (-c % 1000 < 100)
						cout << "0" << -c % 1000 << endl;
					else
						cout << -c % 1000 << endl;
				}
				break;
			case 7:
				if (c >= 0) {
					cout << c / 1000000 << ",";
					if ((c - c / 1000000 * 1000000) / 1000 < 10)
						cout << "00" << (c - c / 1000000 * 1000000) / 1000 << ",";
					else if ((c - c / 1000000 * 1000000) / 1000 < 100)
						cout << "0" << (c - c / 1000000 * 1000000) / 1000 << ",";
					else
						cout << (c - c / 1000000 * 1000000) / 1000 << ",";
					if (c % 1000 < 10)
						cout << "00" << c % 1000 << endl;
					else if (c % 1000 < 100)
						cout << "0" << c % 1000 << endl;
					else
						cout << c % 1000 << endl;
				}
				else {
					cout << c / 1000000 << ",";
					if (-(c - c / 1000000 * 1000000) / 1000 < 10)
						cout << "00" << -(c - c / 1000000 * 1000000) / 1000 << ",";
					else if (-(c - c / 1000000 * 1000000) / 1000 < 100)
						cout << "0" << -(c - c / 1000000 * 1000000) / 1000 << ",";
					else
						cout << -(c - c / 1000000 * 1000000) / 1000 << ",";
					if (-c % 1000 < 10)
						cout << "00" << -c % 1000 << endl;
					else if (-c % 1000 < 100)
						cout << "0" << -c % 1000 << endl;
					else
						cout << -c % 1000 << endl;
				}


			}
		}
	}
		return 0;
}
