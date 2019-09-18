#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void calprice(float price[5][3]);
void display(string name[5] , float price[5][3]);
int main()
{
	string name[5];
	float price[5][3];

	// Input name , price 
	for(int n = 0 ; n < 5 ; n++)
	{
		cout << "Enter product name : " ;
		cin >> name[n];
		cout << "\t price : " ;
		cin >> price[n][0];
	}
	calprice(price);
	display(name ,price);
	return 0 ;
}

void calprice(float price[5][3])
{
	
	for(int n = 0 ; n < 5 ; n++)
	{
		// cal vat
		price[n][1] = price[n][0]*7/100 ;
		// cal net
		price[n][2] = price[n][0] + price[n][0]*7/100 ;
	}

}

void display(string name[5] , float price[5][3])
{
	cout << endl;
	cout << setfill(' ') <<setw(3)<< "No." << " Product\t" << setw(16)  << setw(16) << " price" << setw(16) << " vat7%" << setw(16) << " Net " << endl;
	for(int n = 0 ; n < 5 ; n++)
	{
		cout << setw(3) << n+1 ;
		if (name[n].length() < 5 ) name[n] += "   ";
		cout << " " << name[n] << "\t";
		cout << setprecision(2) << fixed ;
		for(int m = 0 ; m < 3 ; m++)
		{
			cout << setw(16) << price[n][m] ;
		}
		cout << endl;
	}
}