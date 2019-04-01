#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;

class Cworkers
{
private:
	string name;
	string EGN;
	float dayPayment;
	int workDays;
public:

	Cworkers() //empty constructor 
	{
		name = "000000";
		EGN = "000000";
		dayPayment = 00;
		workDays = 00;

	}
	Cworkers(string name, string EGN, float dayPayment, int workDays)
	{
		this->name = name;
		this->EGN = EGN;
		this->dayPayment = dayPayment;
		this->workDays = workDays;
	}
	void getName() { cout << name<<endl; };
	bool getGender();
	void getAge();
	void getSalary();
	void getData();
	void display();
	
};

bool Cworkers::getGender()
{

	int k = stoi(EGN.substr(7, 1));
	if (k % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void Cworkers::getAge()
{

	int  M, Y;

	M =stoi(EGN.substr(2, 2));
	Y = stoi(EGN.substr(0, 2));

	if (M > 40)
	{
		Y = 2019 - 2000 - Y;
	}
	else
	{
		Y = 2019 - 1900 - Y;
	}

	cout << Y <<endl;
}

void Cworkers::getSalary()
{

	cout << dayPayment * workDays << endl;

}

void Cworkers::getData()
{
	cin.ignore();
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter EGN:";
	cin >> EGN;
	cout << "Enter day payment: ";
	cin >> dayPayment;
	cout << "Enter work days:";
	cin >> workDays;
}

void Cworkers::display()
{
	cout << "Name: " << name << endl;
	cout << "EGN: " << EGN << endl;
	cout << "Day payment: " << dayPayment << endl;
	cout << "Work days: " << workDays << endl;



}
const int maxWorkers = 10;
class CCompany
{
private:
	Cworkers* arrWorkers[maxWorkers];
	int count;
	int countMale;
	Cworkers* arrMale[maxWorkers]; //правене на масив.
public:
	void addWorker();
	void printAll();
	void allMale();
	void nameMale();	//and salary
	CCompany() { count = 0; countMale = 0; }// винаги трябва да има брояч в конструктора.
};

void CCompany::addWorker() // масив за добавяне на нов работник
{
	arrWorkers[count] = new Cworkers;
	arrWorkers[count]->getData();
	count++;


}

void CCompany::printAll()
{
	for (int i = 0; i < count; i++)
	{

		arrWorkers[i]->display();

	}


}

void CCompany::allMale()
{

	for (int i = 0; i < count; i++)
	{

		if (arrWorkers[i]->getGender() == true)    //проверява дали работника е мъж. масивът с указател към функцията getgender.
		{
			arrWorkers[i]->getName();
			arrWorkers[i]->getAge();
		}
	}


}

void CCompany::nameMale()
{
	for (int i = 0; i < count; i++)
	{
		if (arrWorkers[i]->getGender() == true)
		{

			arrMale[countMale] = arrWorkers[i];
			countMale++;
		}
	}

	for (int i = 0; i < countMale; i++)
	{
		arrMale[i]->display();
		arrMale[i]->getSalary();
	}

}

//правене на меню ЗАДЪЛЖИТЕЛНО във всяка програма

int main()
{

	int answer;

	CCompany Menu;
	do
	{
		cout << endl;
		cout << "\t Menu" << endl;
		cout << "1 - Add new worker" << endl;
		cout << "2 - Print all workers" << endl;
		cout << "3 - Print male name and age" << endl;
		cout << "4 - Male name and salary " << endl;
		cout << " 0 - exit" << endl;  
		cout << "Choose your function";
		cin >> answer;

		switch (answer)
		{
		case 0: break;
		case 1: Menu.addWorker(); break;
		case 2: Menu.printAll(); break;
		case 3: Menu.allMale(); break;
		case 4: Menu.nameMale(); break;


		default:
			cout << "Error!" << endl;
			break;
		}
	} while (answer !=0);



}
