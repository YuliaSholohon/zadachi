//From the keyboard enter a data on vocal groups
//Print entered data in tabular form, sorting them by name groups in alphabetical order. 
//Randomly select from a list of three teams and identify among them the most numerous.
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include<iostream>
#include <iomanip>
#include <time.h>
#define n 4
using namespace std;
typedef struct a
{
        char name [20];
        short year;
        char Lead[20];
		
		short Number;
} Group;
// sort the names of groups in alphabetical order
void sort(Group a[])
{
    int i,j;
    Group p;
        for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
                if (strcmpi(a[i].name, a[j].name)>0)
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

//printf("Enter name, year,m/w, Height,Number \n");

for(i=0;i<n;i++){
	cout<<endl<<"Enter name ";
	cin>>x[i].name;//>>x[i].year>>x[i].Man_Woman>>x[i].Height>>x[i].Number;
	cout<<"Enter year ";
	cin>>x[i].year;
	cout<<"Enter Number ";
	cin>>x[i].Number;
	cout<<"Enter lead ";
	cin>>x[i].Lead;
	
}
sort(x);
srand( (unsigned)time( NULL ) );

cout<<setw(10)<<"name"<<" | "<<setw(0)<<setw(5)<<"year"<<" | "<<setw(0)<<setw(5)<<"number"<<" | "<<setw(0)<<setw(10)<<"lead"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){

	cout<<setw(10)<<x[i].name<<" | "<<setw(0)<<setw(5)<<x[i].year<<" | "<<setw(0)<<setw(5)<<x[i].Number<<" | "<<setw(0)<<setw(10)<<x[i].Lead<<" | "<<setw(0)<<endl;}
//random selection of 3 groups
	int k1,k2,k3,max,temp;
	k1=rand()%n;
	k2=rand()%n;
	if(k1==k2){
		while(k2!=k1){
			k2=rand()%n;
		}
	}
	k3=rand()%n;
	if(k1==k3 || k2==k3  ){
		while(k3!=k2 && k3 !=k1 )
		{
			k3=rand()%n;
		}
	}
	cout<<"First colective "<<k1<<" "<<x[k1].Number<<endl <<"Second colective "<<k2<<" "<<x[k2].Number<<"Third colective "<<k3<<" "<<x[k3].Number<<endl;
	
	// find the largest group among 3 groups
	if(x[k1].Number>x[k2].Number){
		max=k1;
		temp=x[k1].Number;
	}else{
		max=k2;
		temp=x[k2].Number;
	}
	if(temp<x[k3].Number){
		max=k3;
	}
	cout<<"The greatest is "<<max<<"It is "<<x[max].Number;
return 0;
}

