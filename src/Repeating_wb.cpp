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
	int qty = count(begin(nums), end(nums), 5);
	cout << "There are " << qty << " 5s in the nums.";
	return 0;
}
