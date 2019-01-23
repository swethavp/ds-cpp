#include<iostream>
using namespace std;
class distnc
{
public:
int feet,inch;
distnc()
{
feet=10;
inch=5;
}
distnc(int a,int b)
{
feet=a;
inch=b;
}
void disp()
{
cout<<"distance="<<feet<<"."<<inch<<"\n";
}
};
main()
{
distnc d1,d2(20,30),d3;
d1.disp();
d2.disp();
d3.feet=d1.feet+d2.feet;
d3.inch=d1.inch+d2.inch;
d3.disp();
}
