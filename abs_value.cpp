#include<iostream>
#include <bitset>
using namespace std;
//function for finding the absolute value of two numbers
long abs(long a,long b);
int main(){
	long a,b;
	cout<<"Enter a=";
	cin>>a;
	cout<<"Enter b=";
	cin>>b;
	cout<<"Value a in binary form a= "<<bitset<32>(a)<<endl<<"Value a in binary form b= "<<bitset<32>(b)<<endl;
	cout<<"The result is= "<<abs(a,b)<<endl<<"The binary form of result is= "<<bitset<32>(abs(a,b))<<endl;
	return 0;
}
long abs(long a,long b)
{
	long x=a-b;
	int sign;
	sign=x>>31;//define the sign of the number
return (x^sign)-sign;//the function returns module number
}


