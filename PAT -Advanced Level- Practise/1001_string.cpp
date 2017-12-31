#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		int c = a + b;
		string ans = to_string(c);
		if (c >= 0) {
			switch (ans.size()) {
			case 1:
			case 2:
			case 3:
				cout << ans << endl;
				break;
			case 4:
				cout << ans[0] << "," << ans[1] << ans[2] << ans[3] << endl;
				break;
			case 5:
				cout << ans[0] << ans[1] << "," << ans[2] << ans[3] << ans[4] << endl;
				break;
			case 6:
				cout << ans[0] << ans[1] << ans[2] << "," << ans[3] << ans[4] << ans[5] << endl;
				break;
			case 7:
				cout << ans[0] << "," << ans[1] << ans[2] << ans[3] << "," << ans[4] << ans[5] << ans[6] << endl;
			}
		}
		else {
			switch (ans.size()) {
			case 2:
			case 3:
			case 4:
				cout << ans << endl;
				break;
			case 5:
				cout << "-" << ans[1] << "," << ans[2] << ans[3] << ans[4] << endl;
				break;
			case 6:
				cout << "-" << ans[1] << ans[2] << "," << ans[3] << ans[4] << ans[5] << endl;
				break;
			case 7:
				cout << "-" << ans[1] << ans[2] << ans[3] << "," << ans[4] << ans[5] << ans[6] << endl;
				break;
			case 8:
				cout << "-" << ans[1] << "," << ans[2] << ans[3] << ans[4] << "," << ans[5] << ans[6] << ans[7] << endl;
			}
		}
	}
	return 0;
}
