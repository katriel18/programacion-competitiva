
#include <iostream>
using namespace std;

int main(){
    int i,k=1, a, b, c;
    cin >> i;				
    while(i--){				
        cin >> a >> b >>c;     
        if (a > b && a<c || a < b && a>c)
        	cout<<"caso "<<k<<": "<<a<<endl;
        else if (b > a && b<c ||b < a && b>c) 
        	cout<<"caso "<<k<<": "<<b<<endl;
        else
        	cout<<"caso "<<k<<": "<<c<<endl;      
        k++;
    }
    return 0;
}
