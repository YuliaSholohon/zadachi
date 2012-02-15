#include <stdio.h>
#include <string>
#include<iostream>
#include <iomanip>
#define n 2
using namespace std;

typedef struct a
{
	char group[10];
	int number;
	int good;
	int not_bad;
	int bad;
	int persent;

		
} Group;
int find(Group x[]);
/*void sort(Group a[])
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
}*/

int main()
{ 
int i;
a x[n];


for(i=0;i<n;i++){
	cout<<endl<<"Enter group ";
	cin>>x[i].group;
	
	cout<<"Enter all students ";
	cin>>x[i].number;
	cout<<"Enter good ";
	cin>>x[i].good;
	cout<<"Enter not_bad ";
	cin>>x[i].not_bad;
	cout<<"Enter bad ";
	cin>>x[i].bad;
}
for(i=0;i<n;i++){
	x[i].persent=(x[i].not_bad*100)/x[i].number;
}
cout<<setw(6)<<"Group"<<" | "<<setw(0)<<setw(6)<<"All"<<" | "<<setw(0)<<setw(6)<<"Have 5"<<" | "<<setw(0)<<setw(10)<<"Without 3"<<" | "<<setw(0)<<setw(10)<<"Bad marks"<<" | "<<setw(0)<<setw(10)<<"percent of 3"<<" | "<<setw(0)<<endl;
for(i=0;i<n;i++){
	
	cout<<setw(6)<<x[i].group<<" | "<<setw(0)<<setw(6)<<x[i].number<<" | "<<setw(0)<<setw(6)<<x[i].good<<" | "<<setw(0)<<setw(10)<<x[i].not_bad<<" | "<<setw(0)<<setw(10)<<x[i].bad<<" | "<<setw(0)<<setw(10)<<x[i].persent<<" | "<<setw(0)<<endl;
}

cout<<endl;
find(x);

int max,pos;
max=x[0].persent;pos=0;
	for(i=0;i<n;i++){
		if(x[i].persent>max){
			max=x[i].persent;
			pos=i;
		}
	}
	cout<<"Group which have the biggest percent without 3 is  "<<x[pos].group;

		return 0;
}

int find(Group x[])
{
	cout<<setw(6)<<"Course"<<" | "<<setw(0)<<setw(6)<<"Have 5"<<" | "<<setw(0)<<setw(10)<<"Without 3"<<" | "<<setw(0)<<setw(10)<<"Bad marks"<<" | "<<setw(0)<<endl;
	int sum_good=0,sum_not_bad=0,sum_bad=0;int i;
char *group,*group1,*group2;
char str1[]="11";char str2[]="12";char str3[]="13";
for(i=0;i<n;i++){
	group=strstr(x[i].group,str1);
	group1=strstr(x[i].group,str2);
	group2=strstr(x[i].group,str3);
	if(group>0||group1>0||group2>0)
	{
		sum_good=sum_good+x[i].good;
		sum_not_bad=sum_not_bad+x[i].not_bad;
		sum_bad=sum_bad+x[i].bad;
	}
}
cout<<setw(6)<<"1"<<" | "<<setw(0)<<setw(6)<<sum_good<<" | "<<setw(0)<<setw(10)<<sum_not_bad<<" | "<<setw(0)<<setw(10)<<sum_bad<<" | "<<setw(0)<<endl;
//cout<<"First course good studied "<<sum_good<<" have no three  "<<sum_not_bad<<"  bad "<<sum_bad<<endl;
 sum_good=0,sum_not_bad=0,sum_bad=0;
//Підраховуємо суму для 2-го курсу
char str11[]="21";char str12[]="22";char str13[]="23";
for(i=0;i<n;i++){
	group=strstr(x[i].group,str11);
	group1=strstr(x[i].group,str12);
	group2=strstr(x[i].group,str13);
	if(group>0||group1>0||group2>0)
	{
		sum_good=sum_good+x[i].good;
		sum_not_bad=sum_not_bad+x[i].not_bad;
		sum_bad=sum_bad+x[i].bad;
	}
}
cout<<setw(6)<<"2"<<" | "<<setw(0)<<setw(6)<<sum_good<<" | "<<setw(0)<<setw(10)<<sum_not_bad<<" | "<<setw(0)<<setw(10)<<sum_bad<<" | "<<setw(0)<<endl;
//Підраховуємо суму для 3-го курсу
sum_good=0,sum_not_bad=0,sum_bad=0;
char str21[]="31";char str22[]="32";char str23[]="33";
for(i=0;i<n;i++){
	group=strstr(x[i].group,str21);
	group1=strstr(x[i].group,str22);
	group2=strstr(x[i].group,str23);
	if(group>0||group1>0||group2>0)
	{
		sum_good=sum_good+x[i].good;
		sum_not_bad=sum_not_bad+x[i].not_bad;
		sum_bad=sum_bad+x[i].bad;
	}
}
cout<<setw(6)<<"3"<<" | "<<setw(0)<<setw(6)<<sum_good<<" | "<<setw(0)<<setw(10)<<sum_not_bad<<" | "<<setw(0)<<setw(10)<<sum_bad<<" | "<<setw(0)<<endl;
//Підраховуємо суму для 4-го курсу
sum_good=0,sum_not_bad=0,sum_bad=0;
char str31[]="41";char str32[]="42";char str33[]="43";
for(i=0;i<n;i++){
	group=strstr(x[i].group,str31);
	group1=strstr(x[i].group,str32);
	group2=strstr(x[i].group,str33);
	if(group>0||group1>0||group2>0)
	{
		sum_good=sum_good+x[i].good;
		sum_not_bad=sum_not_bad+x[i].not_bad;
		sum_bad=sum_bad+x[i].bad;
	}
}
cout<<setw(6)<<"4"<<" | "<<setw(0)<<setw(6)<<sum_good<<" | "<<setw(0)<<setw(10)<<sum_not_bad<<" | "<<setw(0)<<setw(10)<<sum_bad<<" | "<<setw(0)<<endl;
//Підраховуємо суму для 5-го курсу
sum_good=0,sum_not_bad=0,sum_bad=0;
char str41[]="51";char str42[]="52";char str43[]="53";
for(i=0;i<n;i++){
	group=strstr(x[i].group,str41);
	group1=strstr(x[i].group,str42);
	group2=strstr(x[i].group,str43);
	if(group>0||group1>0||group2>0)
	{
		sum_good=sum_good+x[i].good;
		sum_not_bad=sum_not_bad+x[i].not_bad;
		sum_bad=sum_bad+x[i].bad;
	}
}
cout<<setw(6)<<"5"<<" | "<<setw(0)<<setw(6)<<sum_good<<" | "<<setw(0)<<setw(10)<<sum_not_bad<<" | "<<setw(0)<<setw(10)<<sum_bad<<" | "<<setw(0)<<endl;
return 0;
}

