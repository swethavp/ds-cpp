#include<iostream>
using namespace std;
class check
{
private:
int i;
public:
check()
{
i=0;
}
void operator ++()
{
++i;
}
void display()
{
cout<<"i"<<i<<endl;
}
};
main()
{
check obj;
obj.display();
++obj;
obj.display();
}

