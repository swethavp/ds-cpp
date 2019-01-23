#include<iostream>
using namespace std;
class sample
{
private:
int a,b;
public:
sample()
{
a=10;
b=20;
}
void read()
{
cin>>a>>b;
}
void print()
{
cout<<"a="<<a;
cout<<"b="<<b;
}
};
main()
{
sample s1,s2;
cout<<"enter two values\n";
s2.read();
cout<<"s1=";
s1.print();
cout<<"s2=";
s2.print();
}

