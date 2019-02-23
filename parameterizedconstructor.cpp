#include<iostream>
using namespace std;
class sample
{
private:
int a;
int b;
public:
sample(int x,int y)
{
a=x;
b=y;
}
};
int main()
{
sample s1=sample(10,20);
sample s2(10,20);
}
