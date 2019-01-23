#include<iostream>
using namespace std;
class add
{
int a,b,c;
public:
void read()
{
cout<<"enter Two Number ";
cin>>a>>b;
}
void display()
{
cout<<" A  = "<<a;
cout<<" B  = "<<b;
cout<<"Sum = "<<c;
}
void sum()
{
c= a+b;
}
};
int main()
{
add x;
x.read();
x.sum();
x.display();
}



