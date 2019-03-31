#include<iostream>
using namespace std;
	bool testPass(char pass[]) 
	{
		// flags
		bool aUpper = false, aSpecial= false,
			aLower = false,
			aDigit = false;
		for (int i = 0; pass[i]; ++i)
			if (isupper(pass[i]))
				aUpper = true;
			else if (islower(pass[i]))
				aLower = true;
			else if (isdigit(pass[i]))
				aDigit = true;
			else if (pass[i] >= '!' && pass[i] <= '+')
				aSpecial = true;
		if (aUpper && aLower && aDigit && aSpecial)
			return true;
		else
			return false;
	}
	void main()
	{
		char pass[101];

		cin >> pass;
		short int passLen = strlen(pass);

		if (passLen < 6)
		{
			//cout << "Please enter a password length of at least 6 characters." << endl;
			int need;
			need = 6 - passLen;
			cout << need << endl;
			
		}

		if (testPass(pass))
		{
			cout << "Your password is valid." << endl;
		}
		else
		{
			cout << "Your password is not valid. "<<endl;
		}

		system("pause");

	}
