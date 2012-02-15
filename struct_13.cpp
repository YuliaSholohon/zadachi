#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 2
using namespace std;
typedef struct a
{
        char Surname [20];
        short Age;
        char Man_Woman[2];
		float Height;
		short Weight;
} STUDENT;

void sort(STUDENT a[])
{
    int i,j;
    STUDENT p;
        for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
                if (strcmpi(a[i].Surname, a[j].Surname)>0)
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

//printf("Enter name, Age,m/w, Height,Weight \n");

for(i=0;i<n;i++){
	cout<<endl<<"Enter surname ";
	cin>>x[i].Surname;//>>x[i].Age>>x[i].Man_Woman>>x[i].Height>>x[i].Weight;
	cout<<"Enter Age ";
	cin>>x[i].Age;
	cout<<"Choose m or w ";
	cin>>x[i].Man_Woman;
	cout<<"Enter height ";
	cin>>x[i].Height;
	cout<<"Enter weight ";
	cin>>x[i].Weight;
}
int man=0;int woman=0;int result;
float average_man_weight=0;float average_woman_weight=0;float average_woman_height=0;float average_man_height=0;
char m[1]={'m'};
for(i=0;i<n;i++){
	result=strcmp(m,x[i].Man_Woman);
	if(result>0){
		average_man_weight=average_man_weight+x[i].Weight;
		average_man_height=average_man_height+x[i].Height;
		man++;
	}else
	{
		average_woman_weight=average_woman_weight+x[i].Weight;
		average_woman_height=average_woman_height+x[i].Height;
		woman++;
	}

}
average_man_weight=average_man_weight/man;
average_woman_weight=average_woman_weight/woman;
average_man_height=average_man_height/man;
average_woman_height=average_woman_height/woman;
sort(x);
cout<<setw(10)<<"Surname"<<" | "<<setw(0)<<setw(5)<<"Age"<<" | "<<setw(0)<<setw(5)<<"m/w"<<" | "<<setw(0)<<setw(6)<<"Height"<<" | "<<setw(0)<<setw(8)<<"Weight"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	//printf("%s  %d %s %0.2f %d \n",x[i].Surname, x[i].Age, x[i].Man_Woman,x[i].Height,x[i].Weight);
	cout<<setw(10)<<x[i].Surname<<" | "<<setw(0)<<setw(5)<<x[i].Age<<" | "<<setw(0)<<setw(5)<<x[i].Man_Woman<<" | "<<setw(0)<<setw(6)<<x[i].Height<<" | "<<setw(0)<<setw(8)<<x[i].Weight<<" | "<<setw(0)<<endl;}
cout<<"Average weight of man is "<< average_man_weight<< "Average weight of woman is "<<average_woman_weight<<endl;
cout<<"Average height of man is "<< average_man_height<< "Average height of woman is "<<average_woman_height<<endl;
return 0;
}

