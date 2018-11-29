#include<iostream>
#include<math.h>
using namespace std;
void main()
{
	//L - отсечка, R - процент
	int n, x[20], y[20], i, br = 0;
		float S = 0, SrArr = 0,  L[20], R , c;

	cout << "n = ";
	cin >> n;

	for ( i = 0; i < n; i++)
	{
		cout << "x[ " <<i<< "]=";
		cin >> x[i];
	}
	for (i = 0; i < n; i++)
	{
		cout << "y[ " <<i<< "]=";
		cin >> y[i];
	}

	for ( i = 0; i < n - 1; i++)
	{
		c = (x[i + 1] - x[i])*(x[i + 1] - x[i]) + (y[i + 1] - y[i])*(y[i + 1] - y[i]);
		L[i] = sqrt(c) ;

	}

	for (i = 0; i < n - 1; i++)
	{

		S = S + L[i];

	}

	SrArr = S / (n - 1);

	for ( i = 0; i < n - 1; i++)
	{

		if (L[i] < SrArr)
		{
			br += 1;
		}

	}

	R = (br / (float)(n - 1)) * 100;

	cout << "Procent = " << R << endl;




	system("pause");
}
