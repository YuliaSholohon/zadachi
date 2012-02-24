//. From the keyboard enter a entries that contain such data  <Name of publication> <Index> <Number of subscribers>. 
// print the data in tabular form, sorting them by index. 
//Identify the the two most popular publications.
#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 3
using namespace std;

typedef struct a
{
	char name[20];
	int index;
	int number_of_buyers;		
} Post;
// sort indexes
void sort(Post a[])
{
    int i,j;
    Post p;
        for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
	if (a[i].index>a[j].index)
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
	cout<<endl<<"Enter name of publishing ";
	cin>>x[i].name;
	
	cout<<"Enter index ";
	cin>>x[i].index;
	cout<<"Enter number of buyers ";
	cin>>x[i].number_of_buyers;
	
}
sort(x);
cout<<setw(20)<<"Name of publishing"<<" | "<<setw(0)<<setw(10)<<"index"<<" | "<<setw(0)<<setw(20)<<"number of buyers"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(20)<<x[i].name<<" | "<<setw(0)<<setw(10)<<x[i].index<<" | "<<setw(0)<<setw(20)<<x[i].number_of_buyers<<" | "<<setw(0)<<endl;
}
// findind two most popular publications
int max,pos;
cout<<"Two most popular"<<endl;
cout<<setw(20)<<"Name of publishing"<<" | "<<setw(0)<<setw(10)<<"index"<<" | "<<setw(0)<<setw(20)<<"number of buyers"<<" | "<<setw(0)<<endl;
for(int j=0;j<2;j++){
	max=x[0].number_of_buyers;pos=0;
	for(i=0;i<n;i++){
		if(x[i].number_of_buyers>max){
			max=x[i].number_of_buyers;
			pos=i;
		}
	}
	cout<<setw(20)<<x[pos].name<<" | "<<setw(0)<<setw(10)<<x[pos].index<<" | "<<setw(0)<<setw(20)<<x[pos].number_of_buyers<<" | "<<setw(0)<<endl;
	x[pos].number_of_buyers=0;
}
		return 0;
}

