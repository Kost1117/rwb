//============================================================================
// Name        : Repeating_wb.cpp
// Author      : Oleg Kostyuchenko
// Version     :
// Copyright   : Oleg Kostyuchenko
// Description : Repeating the White Belt
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<string> v {"one", "two", "three"};
	char ch;
	cin >> ch;
	for (auto w : v) {
		cout << count(begin(w), end(w), ch) << endl;
	}
	return 0;
}
