#include<iostream>
#include <bitset>
using namespace std;

//function takes cyclic shift of r bits to the right
unsigned long cyclic_right ( unsigned long x, unsigned long r );
int main(){
	unsigned long x,r;
	unsigned long long x1;
	cout<<"Enter value x= ";
	cin>>x;
	cout<<"Enter r=";
	cin>>r;
	x1=static_cast<unsigned long long> (x);
	 cout<<"Binary value x= "<<bitset<32> (x1)<<endl;
	 x1=static_cast<unsigned long long>( cyclic_right(x,r));
	 cout<<"the result is x="<<bitset<32> (x1)<<endl;
	return 0;
}
unsigned long cyclic_right ( unsigned long x, unsigned long r )
{
	long mask;
	mask=x<<(32-r);
	x=x>>r;
	x=x^mask;
	return x;
}


