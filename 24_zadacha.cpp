#include<iostream>
#include <bitset>
using namespace std;
//the function changes the places neighboring groups of 8 bits
unsigned long change_8 ( unsigned long x );
int main(){
	unsigned long x;
	 unsigned long long x1;
	 cout<<"Enter value x= ";
	 cin>>x;
	 x1=static_cast<unsigned long long> (x);
	 cout<<"Binary value x= "<<bitset<32> (x1)<<endl;
	 x1=static_cast<unsigned long long>( change_8(x));
	 cout<<"the result is x="<<bitset<32> (x1)<<endl;
	return 0;
}
unsigned long change_8 ( unsigned long x )
{
	unsigned long mask;
	 mask=x<<24;
	 x=x>>8;
	 x=x^mask;
	 return x;
}