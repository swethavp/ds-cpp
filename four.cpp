#include<iostream>
#include<string.h>
using namespace std;
int n;
char name[20];
struct reln
{
char child[20];
char father[20];
}r[10];

int count=0;
void countChild(char name[])
    {
    int j;
    for(j=0;j<n;j++)
        {
        if(strcmp(name,r[j].father)==0)
            {
            count++;
            countChild(r[j].child);
            }
        }
    }

main()
{
int i;
cout<<"\nEnter the number of inputs:";
cin>>n;
for(i=0;i<n;i++)
    {
    cin>>r[i].child;
    cin>>r[i].father;
    }
cout<<"\nEnter name of the one whose no. of grandchildren is needed:";
cin>>name;
for(i=0;i<n;i++)
    {
    if(strcmp(r[i].father,name)==0)
        countChild(r[i].child);
    }
cout<<"\nNo of grandchildren of"<<name<<"is"<<count;
}



