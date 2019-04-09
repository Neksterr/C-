#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{

	string turn;
	
	while(cin >> turn;)
	{
	string turn2;
	int n = turn.size();

	for (int i = 0; i < n; i++)
	{

		if ((turn[i] == 'U'&&turn[i + 1] == 'R') || (turn[i] == 'R'&&turn[i + 1] == 'U'))
		{
			
			turn2 = turn2 + "D";
			
			i++;
		}
		else 
		{
			turn2 = turn2 + turn[i];
			
		}



	}
	}
	cout << turn2.size() << endl;
	cout << turn2 << endl;
	
	return 0 ;
}
