/**
* The Hamming distance between two integers is the number of positions
* at which the corresponding bits are different.
* Given two integers x and y, calculate the Hamming distance.
*/

/**
* 汉明距离是使用在数据传输差错控制编码里面的，汉明距离是一个概念，
* 它表示两个（相同长度）字对应位不同的数量，我们以d（x,y）表示两个字x,y之间的汉明距离。
* 对两个字符串进行异或运算，并统计结果为1的个数，那么这个数就是汉明距离。
*/

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int x, y;
	int dis;
	cin >> x >> y;
	dis = bitset<32>(x^y).count();
	//normal solution
	/*
	int n = x^y;
	while(n)
	{
		++dis;
		n &= n-1;
	}
	*/
	cout << dis << endl;
	return 0;
}