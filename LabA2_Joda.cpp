#include <iostream>
#include <string>
using namespace std;


int main()
{
	double value[10];
	int number;
	for(number =0; number < 10; number++)
	{
		cout << "Please enter a Number: "; 
		cin >> value[number];
	
	}
	for(number = 10; number >= 0; number = number - 2)
	{
		cout << value[number] << endl;
	                   
	}
	


	system("pause");
	return 0;
}