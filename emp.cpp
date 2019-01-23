#include<iostream>
using namespace std;
class emp
{
int age,sal;
char name[10];
public:
void read();
void display();

};
void emp::read()
{
cout<<"enter the name:";
cin>>name;
cout<<"enter the age:";
cin>>age;
cout<<"enter the salary:";
cin>>sal;
}
void emp::display()
{
cout<<"name is:\t"<<name;
cout<<"\nage is:\t"<<age;
cout<<"\nsalary is:\t"<<sal;
}
int main()
{
emp a;
a.read();
a.display();
}

