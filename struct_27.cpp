//sort the names of students in alphabetical order. find  2 highest children aged 9 - 10
#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 4
using namespace std;
struct Date{
	int day;
	int mounth;
	int year;
};
typedef struct a
{
	char Surname[20];
	char Name[20];
  Date Birthday;
  float height;
  int Weight;
     int age;
		
} Group;

void sort( Group a[])
{
    int i,j;
     Group p;
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


for(i=0;i<n;i++){
	cout<<endl<<"Enter Name ";
	cin>>x[i].Name;
	cout<<"Enter Surname ";
	cin>>x[i].Surname;
	cout<<"Day of birthday ";
	cin>>x[i].Birthday.day;
	while(x[i].Birthday.day>31){
		cout<<"Error! "<<endl;
		cout<<"Day of birthday ";
		cin>>x[i].Birthday.day;
	}
	cout<<"Mounth of birthday ";
	cin>>x[i].Birthday.mounth;
	while(x[i].Birthday.mounth>12){
		cout<<"Error! "<<endl;
		cout<<"Mounth of birthday ";
	cin>>x[i].Birthday.mounth;
	}
	cout<<"Year of birthday ";
	cin>>x[i].Birthday.year;
	while(x[i].Birthday.year>2012){
		cout<<"Error! "<<endl;
		cout<<"Year of birthday ";
	cin>>x[i].Birthday.year;
	}
	cout<<"Enter height ";
	cin>>x[i].height;
	cout<<"Enter weight ";
	cin>>x[i].Weight;
	
}
sort(x);

cout<<setw(10)<<"Surname"<<" | "<<setw(0)<<setw(10)<<"Name"<<" | "<<setw(0)<<setw(4)<<"Day"<<" | "<<setw(0)<<setw(7)<<"Mounth"<<" | "<<setw(0)<<setw(4)<<"Year"<<" | "<<setw(0)<<setw(7)<<"Height"<<" | "<<setw(0)<<setw(7)<<"Weight"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(10)<<x[i].Surname<<" | "<<setw(0)<<setw(10)<<x[i].Name<<" | "<<setw(0)<<setw(4)<<x[i].Birthday.day<<" | "<<setw(0)<<setw(7)<<x[i].Birthday.mounth<<" | "<<setw(0)<<setw(4)<<x[i].Birthday.year<<" | "<<setw(0)<<setw(7)<<x[i].height<<" | "<<setw(0)<<setw(7)<<x[i].Weight<<" | "<<setw(0)<<endl;}
for(i=0;i<n;i++){
	x[i].age=2012-x[i].Birthday.year;
}
for(i=0;i<n;i++){
	if(x[i].age!=9 && x[i].age!=10 ){
		x[i].height=0;
	}
}

//finding two highest child
int max,pos;
cout<<"Two max"<<endl;
cout<<setw(10)<<"Surname"<<" | "<<setw(0)<<setw(10)<<"Name"<<" | "<<setw(0)<<setw(4)<<"Day"<<" | "<<setw(0)<<setw(7)<<"Mounth"<<" | "<<setw(0)<<setw(4)<<"Year"<<" | "<<setw(0)<<setw(7)<<"Height"<<" | "<<setw(0)<<setw(7)<<"Weight"<<" | "<<setw(0)<<endl;
for(int j=0;j<2;j++){
	max=x[0].height;pos=0;
	for(i=0;i<n;i++){
		if(x[i].height>max){
			max=x[i].height;
			pos=i;
		}
	}
	cout<<setw(10)<<x[pos].Surname<<" | "<<setw(0)<<setw(10)<<x[pos].Name<<" | "<<setw(0)<<setw(4)<<x[pos].Birthday.day<<" | "<<setw(0)<<setw(7)<<x[pos].Birthday.mounth<<" | "<<setw(0)<<setw(4)<<x[pos].Birthday.year<<" | "<<setw(0)<<setw(7)<<x[pos].height<<" | "<<setw(0)<<setw(7)<<x[pos].Weight<<" | "<<setw(0)<<endl;
	x[pos].height=0;
}

return 0;
}

