#include<iostream>
#include <bitset>
using namespace std;
//the function returns logarithm of a number
int log_2(unsigned long x);

int main(){
	unsigned long long x,binary_res;
	cout<<"Enter x= ";
	cin>>x;
	cout<<"Binary value of x is=";
	cout << bitset<32>(x) << endl;
	unsigned long x1;
	x1=static_cast<unsigned long> (x);
	binary_res=static_cast<unsigned long long>(log_2(x1));
	cout<<"The result is ="<<log_2(x1)<<endl;
	cout<<"The binary result= "<<bitset<32>(binary_res)<<endl;
	return 0;
}

int log_2(unsigned long x){
	//function calculates significant zeros
	int n;
	if(x==0)return(32);
	n=1;
	if( (x & 0x0000FFFF)==0){n=n+16;x=x>>16;}
	if( (x & 0x000000FF)==0){n=n+8;x=x>>8;}
	if( (x & 0x0000000F)==0){n=n+4;x=x>>4;}
	if( (x & 0x00000003)==0){n=n+2;x=x>>2;}
	
return n-(x & 1);
}	