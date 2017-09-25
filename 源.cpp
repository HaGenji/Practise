/**
* The Hamming distance between two integers is the number of positions
* at which the corresponding bits are different.
* Given two integers x and y, calculate the Hamming distance.
*/

/**
* ����������ʹ�������ݴ�������Ʊ�������ģ�����������һ�����
* ����ʾ��������ͬ���ȣ��ֶ�Ӧλ��ͬ��������������d��x,y����ʾ������x,y֮��ĺ������롣
* �������ַ�������������㣬��ͳ�ƽ��Ϊ1�ĸ�������ô��������Ǻ������롣
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