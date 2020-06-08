/*
Make a program that reads 3 integer values and present the greatest
 one followed by the message "eh o maior". Use the following formula:

mayor(a,b,c)=(((a+b+abs(a-b))/2) +c+abs(((a+b+abs(a-b))/2)-c))/2

Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the 
message “eh o maior”.
*/

#include <iostream>
#include <stdlib.h> 
using namespace std;
 
int main() {
 
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(((a+b+abs(a-b))/2) +c+abs(((a+b+abs(a-b))/2)-c))/2<<" eh o maior"<<endl;
 
    return 0;
}
