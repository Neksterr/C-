#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<stdlib.h>
using namespace std;
void main()
{
	system("chcp 1251");
	
	int randomNum;
	string word;

	cout << "Отговори на въпроса! \n";
	cin.get();

	Start:

	srand(time(0));
	randomNum = (rand() % 5) + 1;

	//cout << randomNum << endl;
	cin.get();
	switch (randomNum)
	{
		case 1:
			cout << "Как се превежда какво ? \n";
			cin >> word;
			if ((word == "What") || (word == "what"))
			{
				cout << "Вярно! \n" << endl;
			}
			else
			{
				cout << "Грешно!!! \n" << endl;
			}
		break;
		case 2:
			cout << "Как се превежда къде ? \n";
			cin >> word;
			if ((word == "Where") || (word == "where"))
			{
				cout << "Вярно! \n" << endl;
			}
			else
			{
				cout << "Грешно!!! \n" << endl;
			}
			break;
		case 3:
			cout << "Как се превежда кога ? \n";
			cin >> word;
			if ((word == "When") || (word == "when"))
			{
				cout << "Вярно! \n " << endl;
			}
			else
			{
				cout << "Грешно!!! \n" << endl;
			}
			break;
		case 4:
			cout << "Как се превежда защо ? \n ";
			cin >> word;
			if ((word == "Why") || (word == "why"))
			{
				cout << "Вярно! \n" << endl;
			}
			else
			{
				cout << "Грешно!!! \n" << endl;
			}
			break;
		case 5:
			cout << "Как се превежда как ? \n";
			cin >> word;
			if ((word == "How") || (word == "how"))
			{
				cout << "Вярно! \n" << endl;
			}
			else
			{
				cout << "Грешно!!! \n" << endl;
			}
			break;
			
	}
	cin.get();
	goto Start;





}
