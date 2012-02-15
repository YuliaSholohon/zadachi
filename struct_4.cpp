#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 4
#define n1 6

using namespace std;

typedef struct a
{
	int key;
	char dani[20];
		
} Key;

void sort( Key a[])
{
    int i,j;
     Key p;
        for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
	
	if (a[i].key>a[j].key)
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
a x[n1];


for(i=0;i<n;i++){
	cout<<endl<<"Key ";
	cin>>x[i].key;
	cout<<"Enter dani ";
	cin>>x[i].dani;
	
}
sort(x);
cout<<setw(8)<<"key"<<" | "<<setw(0)<<setw(20)<<"Dani"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(8)<<x[i].key<<" | "<<setw(0)<<setw(20)<<x[i].dani<<" | "<<setw(0)<<endl;
}
cout<<"Enter two new value"<<endl;
for( i=n;i<n1;i++)
{
	cout<<endl<<"Key ";
	cin>>x[i].key;
	cout<<"Enter dani ";
	cin>>x[i].dani;
}
cout<<setw(8)<<"key"<<" | "<<setw(0)<<setw(20)<<"Dani"<<" | "<<setw(0)<<endl;
for(i=0;i<n1;i++){
	cout<<setw(8)<<x[i].key<<" | "<<setw(0)<<setw(20)<<x[i].dani<<" | "<<setw(0)<<endl;
}

return 0;
}

