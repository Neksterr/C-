#include<iostream>
#include<string>
#include<string.h>
using namespace std;






class CKarta
		  {
		private:
			  string nomer;
			  int D,M,Y,Dt,Mt,Yt;
		  public:
			  void getNomer(){cout<<"N: "<<nomer<<endl;}
			  void getDataP(){cout<<"Arrival:"<<D<<"/"<<M<<"/"<<Y<<endl;}
			  void getDataT(){cout<<"Departure:"<<Dt<<"/"<<Mt<<"/"<<Yt<<endl;}
			  void getData();
			  void display();
};

void CKarta::getData()
{
	
	cout<<"Enter number: ";
	cin>> nomer;
	cout<<"Enter date of arrival: ";
	cin>>D>>M>>Y;
	cout<<"Enter date of departure: " ;
	cin>>Dt>>Mt>>Yt;
}
void CKarta::display()
{
	
	cout<<"Number: "<<nomer<<endl;
	cout<<"Arrival: "<<D<<"/"<<M<<"/"<<Y<<endl;
	cout<<"Departure:"<<Dt<<"/"<<Mt<<"/"<<Yt<<endl;
}
//-----------------------------------------------------------------
class DanniHotel
{
private:
	string nameHotel;
	int roomNum;
	float priceForNight;
public:
	float getPrice(){cout<<"Price: "<<priceForNight<<endl;}
	void getData();
	void display();
};
void DanniHotel::getData()
{
	cout<<" Enter hotel name: ";
	cin>>nameHotel;
	cout<<"Enter room number";
		cin>>roomNum;
	cout<<"Enter price for a room: ";
	cin>>priceForNight;
}

//-----------------------------------------------------------------

class CDelegati:public CKarta, public DanniHotel
{

private:
	string name;
	string EGN;
	string city;
	float razhodi;
public:
	CDelegati()
	{
		name="00000";
		EGN="000000";
		city="000000";
		razhodi=000;
	}
	CDelegati(string name,string EGN,string city,float razhodi)
	{
		this->name=name;
		this->EGN=EGN;
		this->city=city;
		this->razhodi=razhodi;
	}
	
	void getData();
	void display();

};
void CDelegati::getData()
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter ID: ";
	cin>>EGN;
	cout<<"Enter city: ";
	cin>>city;
	cout<<"Enter money: ";
	cin>>razhodi;
}
void CDelegati::display()
{
	cout<<"Name : " << name<<endl;
	cout<<"ID : " <<EGN<<endl;
	cout<<"City: "<<city<<endl;
	cout<<"Expenses: " <<razhodi<<endl;
}
//-----------------------------------------------------------------

const int max_delegati = 10;
class CHotel{
private:
	
	CDelegati* arrD[max_delegati];
	int count;
public:
	
	void addDelegat();
	void printAll();
	float getSum();
	void getFirst();
	CHotel(){count=0;}
	

};

void CHotel::addDelegat()
{
	arrD[count] = new CDelegati;
	arrD[count]->getData();
	count++;
}
void CHotel::printAll()
{
	for (int i = 0; i< count;i++)
	{
		arrD[i]->display();
	}
}
float CHotel::getSum()
{
	for(int i = 0; i< count;i++)
	{
		int stay = arrD[i]->getDataT() - arrD[i]->getDataP();
		float sum = stay * arrD[i]->getPrice();
		float total =total + sum;
	}
}
