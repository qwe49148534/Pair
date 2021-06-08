/*
  寫一個排隊/插隊程式，可輸入多個姓名和優先權，優先權為1~5的整數，若優先權>=3，則該姓名可以從最前方插隊
，若優先權<3，則從後方排隊，當姓名輸入0時結束，並顯示姓名的排隊順序及其優先權。
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
		cout << de[i].first << "：" << de[i].second << endl;
	}

}