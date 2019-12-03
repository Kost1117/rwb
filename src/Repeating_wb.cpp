//============================================================================
// Name        : Repeating_wb.cpp
// Author      : Oleg Kostyuchenko
// Version     :
// Copyright   : Oleg Kostyuchenko
// Description : Повторение White Belt
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> nums = {1, 2, 5, 9, 5, 8};
	sort(begin(nums), end(nums));
	for (auto n : nums) {
		cout << n << ' ';
	}
	return 0;
}
