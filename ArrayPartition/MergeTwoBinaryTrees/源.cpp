/**
* Given an array of 2n integers, your task is to group these integers into n pairs of integer, 
* say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi)
* for all i from 1 to n as large as possible.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//排序后将每两项中序号较小的一项累加后可得结果
int main()
{
	vector <int> nums;
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n; i++)
	{
		int num = 0;
		cin >> num;
		nums.push_back(num);
	}

	sort(nums.begin(), nums.end());

	int sum = 0;
	for (int i = 0; i < 2 * n; i += 2)
		sum += nums[i];
	
	cout << sum << endl;
}