//problem link - https://www.codechef.com/JAN231D/problems/FINE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin>> testCases;
	
	while(testCases --)
	{
	    int SpeedOfCar;
	    cin >> SpeedOfCar;
	    
	    if(SpeedOfCar > 70 && SpeedOfCar <= 100)
	       cout << 500 <<endl;
	    if(SpeedOfCar <= 70)
	       cout << 0 << endl;
	   if(SpeedOfCar > 100)
	      cout << 2000 << endl;
	}
	return 0;
}
