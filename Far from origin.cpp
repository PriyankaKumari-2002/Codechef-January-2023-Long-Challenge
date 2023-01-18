//problem link - https://www.codechef.com/JAN231A/problems/FARFROMO
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin >> testCases;
	while( testCases --)
	{
	    int alexX1, alexY1, bobX2, bobY2;
	    cin >> alexX1 >> alexY1 >> bobX2 >> bobY2;
	    
	    // distance is hypotenuse only
	    int alexDistancemid = (pow(abs(alexX1),2)) + (pow(abs(alexY1), 2));
	    int bobDistancemid = (pow(abs(bobX2),2)) + (pow(abs(bobY2), 2));
	   // double bobDistance = (sqrt(pow(bobX1),2) + pow(abs(bobY1), 2));
	    double alexDistance = sqrt(alexDistancemid);
	    double bobDistance = sqrt(bobDistancemid);
	    
	    if(alexDistance == bobDistance)
	        cout<< "EQUAL" << endl;
	   else if(bobDistance > alexDistance)
	        cout<<"BOB" << endl;
	  else
	       cout<<"ALEX" << endl;
	}
	return 0;
}
