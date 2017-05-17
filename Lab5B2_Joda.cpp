//Name: Emmanuel Joda
//Description: Calculating the average sum of numbers in a 1 dimensional array

#include <iostream>
#include <string>
using namespace std;


int main()
{
	int value[5];
	int number;
	int sum = 0;
	int avg = 0;
	for(number =0; number < 5; number++)
	{
		cout << "Please enter a Number: "; 
		cin >> value[number];
		
	sum = sum + value[number];
	}
	avg = (sum/2);
	cout << "The Average of the number inputed is = " << avg << endl;


	system("pause");
	return 0;
}