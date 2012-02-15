#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 3
using namespace std;
struct point{
	int x;
	int y;
};
typedef struct Decart
{
	point a;
	point b;
	point c;
	point d;   
	int square;
	int square_min;
	
		
} Group;

void sort( Group Decart[])
{
    int i,j;
     Group p;
        for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
	if (Decart[i].a.x>Decart[j].a.x)
                {
                        p = Decart[i];
                        Decart[i] = Decart[j];
                        Decart[j] = p;
                }
        }
        }
}

int main()
{ 
int i;
Decart x[n];


for(i=0;i<n;i++){
	cout<<endl<<"Enter point A x: ";
	cin>>x[i].a.x;
	cout<<"Enter point A y: ";
	cin>>x[i].a.y;
	cout<<"Enter point B x: ";
	cin>>x[i].b.x;
	cout<<"Enter point B y: ";
	cin>>x[i].b.y;
	cout<<"Enter point C x: ";
	cin>>x[i].c.x;
	cout<<"Enter point C y: ";
	cin>>x[i].c.y;
	cout<<"Enter point D x: ";
	cin>>x[i].d.x;
	cout<<"Enter point D y: ";
	cin>>x[i].d.y;
	
	
}
sort(x);
int A,B;
for(i=0;i<n;i++){
	A=x[i].b.y-x[i].a.y;
	B=x[i].d.x-x[i].a.x;
	x[i].square=A*B;
}

cout<<setw(3)<<"Ax"<<" | "<<setw(0)<<setw(3)<<"Ay"<<" | "<<setw(0)<<setw(3)<<"Bx"<<" | "<<setw(0)<<setw(3)<<"By"<<" | "<<setw(0)<<setw(3)<<"Cx"<<" | "<<setw(0)<<setw(3)<<"Cy"<<" | "<<setw(0)<<setw(3)<<"Dx"<<" | "<<setw(0)<<setw(3)<<"Dy"<<" | "<<setw(0)<<setw(6)<<"square"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(3)<<x[i].a.x<<" | "<<setw(0)<<setw(3)<<x[i].a.y<<" | "<<setw(0)<<setw(3)<<x[i].b.x<<" | "<<setw(0)<<setw(3)<<x[i].b.y<<" | "<<setw(0)<<setw(3)<<x[i].c.x<<" | "<<setw(0)<<setw(3)<<x[i].c.y<<" | "<<setw(0)<<setw(3)<<x[i].d.x<<" | "<<setw(0)<<setw(3)<<x[i].d.y<<" | "<<setw(0)<<setw(6)<<x[i].square<<" | "<<setw(0)<<endl;
}

for(i=0;i<n;i++){
	x[i].square_min=x[i].square;
}
int max,pos;
cout<<"Two max"<<endl;
cout<<setw(3)<<"Ax"<<" | "<<setw(0)<<setw(3)<<"Ay"<<" | "<<setw(0)<<setw(3)<<"Bx"<<" | "<<setw(0)<<setw(3)<<"By"<<" | "<<setw(0)<<setw(3)<<"Cx"<<" | "<<setw(0)<<setw(3)<<"Cy"<<" | "<<setw(0)<<setw(3)<<"Dx"<<" | "<<setw(0)<<setw(3)<<"Dy"<<" | "<<setw(0)<<setw(6)<<"square"<<" | "<<setw(0)<<endl;
for(int j=0;j<2;j++){
	max=x[0].square;pos=0;
	for(i=0;i<n;i++){
		if(x[i].square>max){
			max=x[i].square;
			pos=i;
		}
	}
	cout<<setw(3)<<x[pos].a.x<<" | "<<setw(0)<<setw(3)<<x[pos].a.y<<" | "<<setw(0)<<setw(3)<<x[pos].b.x<<" | "<<setw(0)<<setw(3)<<x[pos].b.y<<" | "<<setw(0)<<setw(3)<<x[pos].c.x<<" | "<<setw(0)<<setw(3)<<x[pos].c.y<<" | "<<setw(0)<<setw(3)<<x[pos].d.x<<" | "<<setw(0)<<setw(3)<<x[pos].d.y<<" | "<<setw(0)<<setw(6)<<x[pos].square<<" | "<<setw(0)<<endl;
	x[pos].square=0;
}
int min,pos1;
cout<<"Two min"<<endl;
cout<<setw(3)<<"Ax"<<" | "<<setw(0)<<setw(3)<<"Ay"<<" | "<<setw(0)<<setw(3)<<"Bx"<<" | "<<setw(0)<<setw(3)<<"By"<<" | "<<setw(0)<<setw(3)<<"Cx"<<" | "<<setw(0)<<setw(3)<<"Cy"<<" | "<<setw(0)<<setw(3)<<"Dx"<<" | "<<setw(0)<<setw(3)<<"Dy"<<" | "<<setw(0)<<setw(6)<<"square"<<" | "<<setw(0)<<endl;
for(int j=0;j<2;j++){
	min=x[0].square_min;pos1=0;
	for(i=0;i<n;i++){
		if(x[i].square_min<min){
			min=x[i].square_min;
			pos1=i;
		}
	}
	cout<<setw(3)<<x[pos1].a.x<<" | "<<setw(0)<<setw(3)<<x[pos1].a.y<<" | "<<setw(0)<<setw(3)<<x[pos1].b.x<<" | "<<setw(0)<<setw(3)<<x[pos1].b.y<<" | "<<setw(0)<<setw(3)<<x[pos1].c.x<<" | "<<setw(0)<<setw(3)<<x[pos1].c.y<<" | "<<setw(0)<<setw(3)<<x[pos1].d.x<<" | "<<setw(0)<<setw(3)<<x[pos1].d.y<<" | "<<setw(0)<<setw(6)<<x[pos1].square_min<<" | "<<setw(0)<<endl;
	x[pos1].square_min=100;
}
return 0;
}

