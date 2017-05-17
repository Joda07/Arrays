#include <iostream>
#include <string>
using namespace std;


int main()
{
	int value[5];
	int number;
	int sum = 0;
	for(number =0; number < 5; number++)
	{
		cout << "Please enter a Number: "; 
		cin >> value[number];
		
	sum = sum + value[number];
	}
	
	cout << "The sum of the number inputed is = " << sum << endl;


	system("pause");
	return 0;
}