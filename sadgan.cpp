#include <iostream>
using namespace std;
int main(){
	int n1, n2, a1, a2;
	int rvrs1=0, rvrs2=0;
	cin>>n1>>n2;
	int num1=n1;
	int num2=n2;
	
	while (n1 > 0){
		a1 = n1 % 10;
		rvrs1 = rvrs1 * 10 + a1;
		n1 = n1 / 10;
	}
	
	while (n2 > 0){
		a2 = n2 % 10;
		rvrs2 = rvrs2 * 10 + a2;
		n2 = n2 / 10;
	}
	
	if( rvrs1 > rvrs2 ){
		cout<<num2 << " < " <<num1;
	}
	
	
	else if( rvrs2 > rvrs1 ){
		cout<<num1 << " < " <<num2;
	}
	
	
	else if (rvrs1 == rvrs2 ){
		cout<<num1 << " = " <<num2;
	}
	
}
