#include <iostream>
using namespace std;
void display(int *salary , int);
int Cal_bonus(int);
int main()
{
	int num ;

	cout << "Enter number of person : ";
	cin >> num ;
	int *salary = new int [num];

	cout << endl;
	for(int i = 0 ; i < num ; i++)
	{
		cout << "Enter the salary " << i+1 << " : " ;
		cin >> salary[i];
		cout << endl;
	}
	display(salary , num);
	return (0);
}

void display(int *salary , int num)
{
	cout << "-------------------------------------------" << endl;
	cout << "There are " << num << " person." << endl;
	for(int i = 0 ; i < num ; i++)
	{
		cout << "The salary for person " << i << " = " << salary[i] << " and Bonus = " << Cal_bonus(salary[i]) << endl;
	}
	cout << "-------------------------------------------" << endl;
}

int Cal_bonus(int salary)
{
	return(salary*2);
}