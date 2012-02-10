#include<iostream>
#include <bitset>
using namespace std;
//function changes the places of bits in 2 set positions
int change (int first, int second, unsigned long x );
int main(){
	unsigned long x;
	int first, second;
	cout<<"Enter value x= ";
	cin>>x;
	unsigned long long x1;
	x1=static_cast<unsigned long long> (x);
	cout<<"Binary value of x= "<<bitset<32>(x1)<<endl;
	cout<<"Enter number of bit first number= ";
	cin>>first;
	cout<<"Enter number of bit second number= ";
	cin>>second;
	cout<<"The result is = "<<bitset<32>(change(first,second,x))<<endl;;
	return 0;
}

int change (int first, int second, unsigned long x ){
	int result;
	long a,b;
	long temp=0x1;//mask to separate the bits
	a=temp<<first;
	b=temp<<second;
	result=x ^ a ^ b;
	return result;
}
