/*
  �g�@�ӱƶ�/�����{���A�i��J�h�өm�W�M�u���v�A�u���v��1~5����ơA�Y�u���v>=3�A�h�өm�W�i�H�q�̫e�贡��
�A�Y�u���v<3�A�h�q���ƶ��A��m�W��J0�ɵ����A����ܩm�W���ƶ����ǤΨ��u���v�C
*/

#include <iostream>
#include <utility>
#include <deque>
using namespace std;
int main() {
	deque<pair<string, int> > de;
	int a = 0;
	string name;

	while (true) {
		cin >> name;
		if (name == "0") {
			break;
		}
		else {
			cin >> a;
			if (a >= 3) {
				de.push_front(make_pair(name,a));
			}
			else {
				de.push_back(make_pair(name, a));
			}
		}
	}
	for (int i = 0; i < de.size(); i++) {
		cout << de[i].first << "�G" << de[i].second << endl;
	}

}