//============================================================================
// Name        : Repeating_wb.cpp
// Author      : Oleg Kostyuchenko
// Version     :
// Copyright   : Oleg Kostyuchenko
// Description : Повторение White Belt
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string word;
	char ch;
	while (1){
		int qty = 0;
		cin >> word;
		if (word == "exit"){
			break;
		} else {
			cin >> ch;
			qty = count(begin(word), end(word), ch);
				}
		cout << qty << endl;
	}
	return 0;
}
