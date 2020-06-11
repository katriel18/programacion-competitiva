/*
11498 - Division of Nlogonia
*/

#include <iostream>
using namespace std;

int main(){
    int i=1,x,y, a, b;  
    do{
	    cin >> i;
	    if (i==0) break;
		cin >>x>>y;				
	    while(i>0){			
	        cin >> a >> b ;  
			a=a-x;
			b=b-y;	
			if (a ==0 || b==0)
			   cout<<"divisa"<<endl;
	        else if (a >0 && b>0)
	        	cout<<"NE"<<endl;
	    	else if (a > 0 && b<0) 
	        	cout<<"SE"<<endl;
	        else if (a < 0 && b>0) 
	        	cout<<"NO"<<endl;
	        else
	        	cout<<"SO"<<endl;  
	        i--;
   		}
    
    }while(true);
    
    return 0;
}
