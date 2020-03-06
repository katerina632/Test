#include<iostream>
#include<string>
#include<ctime>
#include "Calk.h"
#include "StringWorker.h"
using namespace std;

#define CLEAR system("cls");
#define PI 3.14

#define begin {
#define end }



int main() {

	int result=Calc::sum(10, 5);

	StringWorker::sum("Hel", "lo");



	/*int result2 = mnozh(5, 5);
	cout << result << endl;
	cout << result2 << endl;*/




	/*for (int i = 0; i < 10; i++) 
	begin
		cout << i << endl;

	end*/
	/*cout << "Hello World 1" << endl;
	CLEAR
	cout << "Hello World 2" << endl;
	CLEAR
	cout << "Hello World 3" << endl;

	cout << PI << endl;*/

	   	 

	system("pause");
	return 0;
}