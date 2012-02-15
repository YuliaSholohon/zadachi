#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 3
using namespace std;
typedef struct a
{
	char Surname[20];
	char Name[20];
    short average_mark;
     
		
} Group;

void sort( Group a[])
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
	cout<<endl<<"Enter Surname ";
	cin>>x[i].Surname;
	
	cout<<"Enter name ";
	cin>>x[i].Name;
	cout<<"Enter average mark ";
	cin>>x[i].average_mark;
	
	
}
sort(x);
cout<<setw(10)<<"Surname"<<" | "<<setw(0)<<setw(10)<<"Name"<<" | "<<setw(0)<<setw(12)<<"Average mark"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(10)<<x[i].Surname<<" | "<<setw(0)<<setw(6)<<x[i].Name<<" | "<<setw(0)<<setw(12)<<x[i].average_mark<<" | "<<setw(0)<<endl;}

	int number_of_students=0;
	for(i=0;i<n;i++){
		if(x[i].average_mark>70)
		{
			number_of_students++;
		}
	}
	int percent;
	percent=(number_of_students*100)/n;
	cout<<"The percent of students which have average mark more than 70 is  "<<percent<<endl;


return 0;
}

