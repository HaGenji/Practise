/**
* Initially, there is a Robot at position (0, 0). Given a sequence of its moves, 
* judge if this robot makes a circle, which means it moves back to the original place.
* The move sequence is represented by a string. And each move is represent by a character. 
* The valid robot moves are R (Right), L (Left), U (Up) and D (down). 
* The output should be true or false representing whether the robot makes a circle.
*/

/*判断路径是否成环*/

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	string Route;
	getline(cin, Route);
	for (char ch : Route)
	{
		switch (ch)
		{
		case 'L': x++; break;
		case 'R': x--; break;
		case 'U': y++; break;
		case 'D': y--; break;
		}
	}

	if (x == 0 && y == 0) 
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return 0;
}