#include<iostream>
using namespace std;
class point
{
int x,y;
public:
void read();
void display();
pointadd(point);
};
void point::read()
{
cin>>x;
cin>>y;
}
void point::display()
{
cout<<x;
cout<<y;
}
int main()
{
point p=pointadd(100);
}
