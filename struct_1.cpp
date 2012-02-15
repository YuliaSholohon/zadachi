#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 3
using namespace std;
typedef struct a
{
        char Author [20];
        short year;
        char book_name[30];
		char comment[30];
		
} BOOK;

void sort(BOOK a[])
{
    int i,j;
    BOOK p;
        for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
                if (strcmpi(a[i].Author, a[j].Author)>0)
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
	cout<<endl<<"Enter Author ";
	cin>>x[i].Author;
	
	cout<<"Enter book name ";
	cin>>x[i].book_name;
	cout<<"Enter year ";
	cin>>x[i].year;
	cout<<"Enter comment ";
	cin>>x[i].comment;
	cout<<endl;
}
sort(x);
cout<<setw(20)<<"Author"<<" | "<<setw(0)<<setw(20)<<"book name"<<" | "<<setw(0)<<setw(5)<<"year"<<" | "<<setw(0)<<setw(20)<<"Comment"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(20)<<x[i].Author<<" | "<<setw(0)<<setw(20)<<x[i].book_name<<" | "<<setw(0)<<setw(5)<<x[i].year<<" | "<<setw(0)<<setw(20)<<x[i].comment<<" | "<<setw(0)<<endl;}
cout<<endl<<"Books before 1970"<<endl;
cout<<setw(20)<<"Author"<<" | "<<setw(0)<<setw(20)<<"book name"<<" | "<<setw(0)<<setw(5)<<"year"<<" | "<<setw(0)<<setw(20)<<"Comment"<<" | "<<setw(0)<<endl;
bool flag=0;
for(i=0;i<n;i++){
	if(x[i].year<1970){
		cout<<setw(20)<<x[i].Author<<" | "<<setw(0)<<setw(20)<<x[i].book_name<<" | "<<setw(0)<<setw(5)<<x[i].year<<" | "<<setw(0)<<setw(20)<<x[i].comment<<" | "<<setw(0)<<endl;
	flag=1;
	}
}
if(flag==0){
	cout<<"There is no book before 1970"<<endl;
}
return 0;
}

