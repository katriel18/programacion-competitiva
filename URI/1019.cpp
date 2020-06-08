/*
Read an integer value, which is the duration in seconds 
of a certain event in a factory, and inform it expressed 
in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted
in hours:minutes:seconds like the following example.
*/
#include <iostream> 
using namespace std;
 
int main() {

    int N;
	int D[3] = {3600, 60,1};
    cin>>N;
   
	for(int i=0;i<3;i++){
		
	    cout<<N/D[i];
		N = N % D[i];
		if(i==2){
			break;
		}
		cout<<":";
	}
	cout<<endl;

    return 0;
    
}
