#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 2
using namespace std;
struct month{
			char *name_mounth[20];
			int number;
		};
typedef struct a
{
	month name;
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
	if (a[i].percent<a[j].percent)
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
	cout<<endl<<"Enter number of mounth ";
	cin>>x[i].name.number;
	
	cout<<"Enter plan ";
	cin>>x[i].plan;
	cout<<"Enter output ";
	cin>>x[i].output;
}

for(i=0;i<n;i++){
	switch(x[i].name.number)
	{
	case 1:*x[i].name.name_mounth="january";
		break;
	case 2:*x[i].name.name_mounth="february";
		break;
	case 3:*x[i].name.name_mounth="march";
		break;
	case 4:*x[i].name.name_mounth="april";
		break;
	case 5:*x[i].name.name_mounth="may";
		break;
	case 6:*x[i].name.name_mounth="june";
		break;
	case 7:*x[i].name.name_mounth="july";
		break;
	case 8:*x[i].name.name_mounth="august";
		break;
	case 9:*x[i].name.name_mounth="september";
		break;
	case 10:*x[i].name.name_mounth="november";
		break;
	case 11:*x[i].name.name_mounth="october";
		break;
     case 12:*x[i].name.name_mounth="december";
		break;
	 default:cout<<"error"<<endl;

	}
}
for(i=0;i<n;i++){
	x[i].percent=(x[i].output*100)/x[i].plan;
}
sort(x);
	
cout<<setw(10)<<"Number"<<" | "<<setw(0)<<setw(6)<<"plan"<<" | "<<setw(0)<<setw(12)<<"output"<<" | "<<setw(0)<<setw(8)<<"percent"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	cout<<setw(10)<<*x[i].name.name_mounth<<" | "<<setw(0)<<setw(6)<<x[i].plan<<" | "<<setw(0)<<setw(12)<<x[i].output<<" | "<<setw(0)<<setw(8)<<x[i].percent<<" | "<<setw(0)<<endl;}

return 0;
}

