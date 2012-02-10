#include<iostream>
#include <bitset>
using namespace std;
//the function returns number of 1 at a given number
int number_of_1(unsigned long);
int main(){
	unsigned long x;
	cout<<"Enter value x=";
	cin>>x;
	unsigned long long x1=static_cast<unsigned long long> (x);
	cout<<"Binary value is ="<<bitset<32>(x1)<<endl;
	cout<<"The result is= "<<number_of_1(x)<<endl;
return 0;
}
int number_of_1(unsigned long x)
{
	int count = 0;//variable that counts the number  1
int mask = 0x01; // 00000001
count = (x & mask);
count += (x >> 1) & mask;
count += (x >> 2) & mask;
count += (x >> 3) & mask;
count += (x >> 4) & mask;
count += (x >> 5) & mask;
count += (x >> 6) & mask;
count += (x >> 7) & mask;
count += (x >> 8) & mask;
count += (x >> 9) & mask;
count += (x >> 10) & mask;
count += (x >> 11) & mask;
count += (x >> 12) & mask;
count += (x >> 13) & mask;
count += (x >> 14) & mask;
count += (x >> 15) & mask;
count += (x >> 16) & mask;
count += (x >> 17) & mask;
count += (x >> 18) & mask;
count += (x >> 19) & mask;
count += (x >> 20) & mask;
count += (x >> 21) & mask;
count += (x >> 22) & mask;
count += (x >> 23) & mask;
count += (x >> 24) & mask;
count += (x >> 25) & mask;
count += (x >> 26) & mask;
count += (x >> 27) & mask;
count += (x >> 28) & mask;
count += (x >> 29) & mask;
count += (x >> 30) & mask;
count += (x >> 31) & mask;
return count;
}