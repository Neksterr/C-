#include<iostream>
#include<string>
#include<string.h>
using namespace std;

struct Words {
	char name[20];
};

class Person
{
private: 
	string FirstName;
	string LastName;
	string DateOfBirth;
	string PhoneNumber;
	string Email;

public:
	Person()
	{
		FirstName = "00000000000";
		LastName = "000000000000";
		DateOfBirth = "00000000";
		PhoneNumber = "0000000000";
		Email = "000000000";

	}
	Person(string FirstName, string LastName, string DateOfBirth, string PhoneNumber, string Email)
	{
		this->FirstName = FirstName;
		this->LastName = LastName;
		this->DateOfBirth = DateOfBirth;
		this->PhoneNumber = PhoneNumber;
		this->Email = Email;
	}
	void getData();
	void display();
	string getFirstName() { return FirstName; }
	string getLastName() { return LastName; }
	string getPhone();
	string getEmail();


};

void Person::getData()
{
	cout << "Enter your first name: ";
	cin >> FirstName;
	cout << "Enter your last name: ";
	cin >> LastName;
	cout << "Enter your date of birth: ";
	cin >> DateOfBirth;
	cout << "Enter your phone number: ";
	cin >> PhoneNumber;
	cout << "Enter your Email: ";
	cin >> Email;


}

void Person::display()
{
	cout << "First name: " << FirstName << endl;
	cout << "Last name: " << LastName << endl;
	cout << "Date of birth: " << DateOfBirth << endl;
	cout << "Phone number: " << PhoneNumber << endl;
	cout << "Email: " << Email << endl;
}

//--------------------------------------------------------------------------------------------
const int n = SHRT_MAX;
class Users
{

private: 
	Person* arrUsers[n];
	
	int count;
public:
	void addNewUser();
	void PrintAll();
	void SortByLastName();
	void sortByDate();
	Users() { count = 0; }
};

void Users::addNewUser()
{

	arrUsers[count] = new Person;
	arrUsers[count]->getData();
	count++;

}

void Users::PrintAll()
{

	for (int i = 0; i < count; i++)
	{
		arrUsers[i]->display();
	}

}

void Users::SortByLastName()
{

	Words arrUsers[count];
	int temp;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (arrUsers[j + 1]->getLastName().(int)name[0] < arrUsers[j]->getLastName().(int)name[0])
			{
				temp = arrUsers[j]->getLastName().name;
				arrUsers[j]->getLastName().name = arrUsers[j + 1]->getLastName().name;
				arrUsers[j + 1]->getLastName().name = temp;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		cout << arrUsers[i]->getLastName().name << endl;
	}

}
