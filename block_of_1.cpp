#include<iostream>
#include <bitset>
using namespace std;
//the function returns the block of 1 length n  from position p
unsigned long block_of_1(int n,int p);
int main(){
	int n,p;
	cout<< "Enter n=";
	cin>>n;
	cout<<"Enter p=";
	cin>>p;
	unsigned long x=block_of_1(n,p);
	unsigned long long x1;
	x1=static_cast<unsigned long long> (x);
	cout <<"result is= "<< bitset<32>(x1) << endl;

	return 0;
}
unsigned long block_of_1(int n,int p)
{
	unsigned long mask=0xffffffff;
	unsigned  long  x;
	int temp1,temp2;
	temp1=32-n-p;
	x=(mask>>temp1);//define the limits of the block on the left
	temp2=32-p;
	temp2=mask>>temp2;//define the limits of the block on the right
	x=x^temp2;//overlay limits
return x;
}