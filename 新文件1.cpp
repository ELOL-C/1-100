#include <iostream>   
using namespace std;

int main()
{
	int sum  ;
	int max ,enter ;
	cout << "輸入";
	cin >> max;
	cout << "不超過多少\n>>";
	cin >> enter;
//	cout  << "0"  ;
	for(int i=1;i<=max;i++){
		sum += i ; 
		if(sum < enter){
			cout << i << "+";
		}
		else if (sum > enter){
		sum = sum - i;
		goto o;
		}
		
	}
	o:
	//	cout << str ;
	cout <<"\n="<<sum;
	return 0 ;
} 
