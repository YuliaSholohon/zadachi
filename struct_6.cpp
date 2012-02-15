#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 5
using namespace std;
typedef struct a
{
        short number;
		char group[6];
        short average_mark;
       
		
} Group;

void sort(Group a[])
{
    int i,j;
    Group p;
        for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
	if (a[i].average_mark<a[j].average_mark)
                {
                        p = a[i];
                        a[i] = a[j];
                        a[j] = p;
                }
        }
        }
}

int main()
{ 
int i;
a x[n];


for(i=0;i<n;i++){
	cout<<endl<<"Enter number ";
	cin>>x[i].number;
	
	cout<<"Enter group ";
	cin>>x[i].group;
	cout<<"Enter average mark ";
	cin>>x[i].average_mark;
	
	
}
sort(x);
cout<<setw(6)<<"Number"<<" | "<<setw(0)<<setw(6)<<"Group"<<" | "<<setw(0)<<setw(12)<<"Average mark"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(6)<<x[i].number<<" | "<<setw(0)<<setw(6)<<x[i].group<<" | "<<setw(0)<<setw(12)<<x[i].average_mark<<" | "<<setw(0)<<endl;}
char *p;
char str1[]="KH";
for(i=0;i<n;i++){
	p=strstr(x[i].group,str1);
if(p==0){
	x[i].average_mark=0;
}
}
cout<<"Three groups KH which have the greatest average mark"<<endl;
cout<<setw(6)<<"Group"<<" | "<<setw(0)<<setw(12)<<"Average mark"<<" | "<<setw(0)<<endl;
int max,pos;
for(int j=0;j<3;j++){
	max=x[0].average_mark;pos=0;
	for(i=0;i<n;i++){
		if(x[i].average_mark>max){
			max=x[i].average_mark;
			pos=i;
		}
	}
	cout<<setw(6)<<x[pos].group<<" | "<<setw(0)<<setw(12)<<x[pos].average_mark<<" | "<<setw(0)<<endl;
	x[pos].average_mark=0;
}

return 0;
}

