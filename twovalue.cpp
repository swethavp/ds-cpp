#include<iostream>
using namespace std;
class TwoValues
{
int a,b;
public:
TwoValues(int i,int j)
{
a=i;
b=j;
}
friend class Min;
};
class Min
{
public:
int min(TwoValues x);
};
int Min :: min(TwoValues x)
{
return x.a<x.b?x.a:x.b;
}
main()
{
TwoValues ob(20,40);
Min m;
cout<<m.min(ob);
}

