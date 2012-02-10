#include<iostream>
#include <bitset>
using namespace std;
// the function returns 1 if the given number is a power of 2, otherwise 0
int stepin_two(unsigned long);
int main(){
	unsigned long x;
	cout<<"Enter value x=";
	cin>>x;
	unsigned long long x1=static_cast<unsigned long long> (x);
	cout<<"Binary value is ="<<bitset<32>(x1)<<endl;
	cout<<"The result is= "<<stepin_two(x)<<endl;
return 0;
}
int stepin_two(unsigned long x)
{
	int count = -1;//counting starts from -1, in the case when the number is a power of 2 the result is 0
int mask = 0x01; // 00000001
count += (x & mask);
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
int y;
// if the number is greater than 0, then the multiplication sign to -1 is equal to 1
y=count*(-1);
int sign;
//if the number of negative returns 0
sign = 1 ^ ((unsigned int)y >> (sizeof(int) * CHAR_BIT - 1));
return sign;
}