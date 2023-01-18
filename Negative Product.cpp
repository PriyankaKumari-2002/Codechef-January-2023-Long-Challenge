// Problem link - https://www.codechef.com/JAN231D/problems/NEGPROD
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin >> testCase;
	while(testCase --)
	{
	    int num1;
	    int num2;
	    int num3;
	    cin >> num1>>num2>>num3;
	    
	    int product1 = num1*num2;
	    int product2 = num2*num3;
	    int product3 = num3*num1;
	    
	    if(product1<0 || product2<0 || product3<0)
	        cout<<"YES"<<endl;
	    else
	       cout<<"NO"<<endl;
	}
	return 0;
}
