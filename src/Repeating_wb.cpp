//============================================================================
// Name        : Repeating_wb.cpp
// Author      : Oleg Kostyuchenko
// Version     :
// Copyright   : Oleg Kostyuchenko
// Description : Повторение White Belt
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> nums = {"1", "2", "5", "9", "5", "8"};
	for (auto n : nums) {
		cout << n << ',';
	}
	return 0;
}
