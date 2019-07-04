#include <iostream>
#include <string>
using namespace std;

int main() {
	int count;
	cin >> count;
	string s1;
	int a = 0;
	int prev = -1;
	int cur = -1;
	int cur_number = count;
	for (int i = 0; i < count; i++) {
		int s2[100] = { 0 };
		prev = -1;
		cin >> s1;
		for (int j = 0; j < s1.size(); j++) {

			cur = s1[j] - 97;
			if (s2[cur] != 0) {
				if (cur != prev) {
					cur_number--;
					break;
				}
			}
			else {
				s2[cur] = 1;
				prev = cur;
			}
		}

	}

	cout << cur_number << endl;

}