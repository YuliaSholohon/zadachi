//From the keyboard enter data set about books in the form: 
//<author> <name>, <Published-operation> <publication year>. 
//Print a list of books entered in tabular form, combining them with years of publications in descending order.
//Print information about books on programming in C / C + +.
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
		char publishing[30];
		
} BOOK;
//sort in descending order
void sort(BOOK a[])
{
    int i,j;
    BOOK p;
        for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
	if (a[i].year<a[j].year)
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
	cout<<"Enter publishing ";
	cin>>x[i].publishing;
	cout<<endl;
}
sort(x);
cout<<setw(20)<<"Author"<<" | "<<setw(0)<<setw(20)<<"book name"<<" | "<<setw(0)<<setw(5)<<"year"<<" | "<<setw(0)<<setw(20)<<"publishing"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(20)<<x[i].Author<<" | "<<setw(0)<<setw(20)<<x[i].book_name<<" | "<<setw(0)<<setw(5)<<x[i].year<<" | "<<setw(0)<<setw(20)<<x[i].publishing<<" | "<<setw(0)<<endl;}
cout<<endl<<"Books about programming C/C++"<<endl;
cout<<setw(20)<<"Author"<<" | "<<setw(0)<<setw(20)<<"book name"<<" | "<<setw(0)<<setw(5)<<"year"<<" | "<<setw(0)<<setw(20)<<"publishing"<<" | "<<setw(0)<<endl;
char *p;
//finding books on C / C + + and output them
char str1[]="C/C++";
for(i=0;i<n;i++){
p=strstr(x[i].book_name,str1);
if(p!=0){
	cout<<setw(20)<<x[i].Author<<" | "<<setw(0)<<setw(20)<<x[i].book_name<<" | "<<setw(0)<<setw(5)<<x[i].year<<" | "<<setw(0)<<setw(20)<<x[i].publishing<<" | "<<setw(0)<<endl;
}
}
if(p==0){
	cout<<"There is no books about C/C++"<<endl;
}
return 0;
}

