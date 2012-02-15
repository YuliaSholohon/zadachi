#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 3
using namespace std;

typedef struct a
{
	int day;
		int plan;
		int output;
       int percent;
		
} Group;

void sort(Group a[])
{
    int i,j;
    Group p;
        for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
	if (a[i].plan>a[j].plan)
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
	cout<<endl<<"Enter number of day ";
	cin>>x[i].day;
	
	cout<<"Enter plan ";
	cin>>x[i].plan;
	cout<<"Enter output ";
	cin>>x[i].output;
}


for(i=0;i<n;i++){
	x[i].percent=(x[i].output*100)/x[i].plan;
}
sort(x);
	
cout<<setw(10)<<"Number"<<" | "<<setw(0)<<setw(6)<<"plan"<<" | "<<setw(0)<<setw(12)<<"output"<<" | "<<setw(0)<<setw(8)<<"percent"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(10)<<x[i].day<<" | "<<setw(0)<<setw(6)<<x[i].plan<<" | "<<setw(0)<<setw(12)<<x[i].output<<" | "<<setw(0)<<setw(8)<<x[i].percent<<" | "<<setw(0)<<endl;}
int max,pos;
max=x[0].percent;pos=0;
	for(i=0;i<n;i++){
		if(x[i].percent>max){
			max=x[i].percent;
			pos=i;
		}
	}
	cout<<setw(10)<<"Number"<<" | "<<setw(0)<<setw(6)<<"plan"<<" | "<<setw(0)<<setw(12)<<"output"<<" | "<<setw(0)<<setw(8)<<"percent"<<" | "<<setw(0)<<endl;
	cout<<"Day which have the biggest percent"<<endl;
		cout<<setw(10)<<x[pos].day<<" | "<<setw(0)<<setw(6)<<x[pos].plan<<" | "<<setw(0)<<setw(12)<<x[pos].output<<" | "<<setw(0)<<setw(8)<<x[pos].percent<<" | "<<setw(0)<<endl;
		int min;
min=x[0].percent;pos=0;
	for(i=0;i<n;i++){
		if(x[i].percent<min){
			min=x[i].percent;
			pos=i;
		}
	}
	cout<<setw(10)<<"Number"<<" | "<<setw(0)<<setw(6)<<"plan"<<" | "<<setw(0)<<setw(12)<<"output"<<" | "<<setw(0)<<setw(8)<<"percent"<<" | "<<setw(0)<<endl;
	cout<<"Day which have the lowwest percent"<<endl;
		cout<<setw(10)<<x[pos].day<<" | "<<setw(0)<<setw(6)<<x[pos].plan<<" | "<<setw(0)<<setw(12)<<x[pos].output<<" | "<<setw(0)<<setw(8)<<x[pos].percent<<" | "<<setw(0)<<endl;

		return 0;
}

