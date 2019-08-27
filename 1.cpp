#include  <iostream>
#include<string>
#include <time.h>
using namespace std;
string checkNum(int n1 ,int r);
int main()
{
	int r, n1,count;
	count=0;
	cout << "### Welcome to guessing number game ###\n";
	cout << "Secret number has been chosen\n";
	srand(time(NULL));
	r = rand()%10+1;
	do{
	cout << "Guess the number (1 to 10) : " ;
	cin >> n1;
	cout << checkNum(n1 , r) ;
	count++;
	}while (n1!=r);
	cout <<"The secret number is "<< r << endl;
	cout << "You made "<<count<< " guesses" << endl;
}
string checkNum(int n1 , int r)
{
		if (n1<r){
		return "The secret number is lower\n";
		}
		else if (n1>r){
			return "The secret number is higher\n";
		}
		else (n1==r);{
			return "Congratulations!\n";
		}
}





