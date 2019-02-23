#include<iostream>
using namespace std;
class person
{
public:
char name[20];
void setname()
{
cout<<"\nEnter the name:";
cin>>name;
}
void printname()
{
cout<<"\nName="<<name;
}
virtual char isoutstand()=0;
};
class student:public person
{
public:
float percentage;
char readp()
{
cout<<"\nEnter the percentage of student:";
cin>>percentage;
}
char isoutstand()
{
if(percentage>=90)
return 'T';
else
return 'F';
}
};
class professor:public person
{
public:
int nop;
void readnop()
{
cout<<"\nEnter the no of publications:";
cin>>nop;
}
char isoutstand()
{
if(nop>=50)
return 'T';
else
return 'F';
}
};
main()
{
student s;
s.setname();
s.readp();
s.printname();
cout<<"\n"<<s.isoutstand();
professor p;
p.setname();
p.readnop();
p.printname();
cout<<"\n"<<p.isoutstand();
}
