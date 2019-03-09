#include<iostream>
using namespace std;
const int SIZE=100;
class stack
{
int stck[SIZE];
int tos;
public:
stack()
{
tos=0;
}
void push(int i);
int pop(void);
operator int()
{
return tos;
}
};
void stack::push(int i)
{
if(tos==SIZE)
{
cout<<"stack is full\n";
return;
}
stck[tos]=i;
tos++;
}
int stack::pop()
{
if(tos==0)
{
cout<<"stack underflow\n";
return 0;
}
tos--;
return stck[tos];
}
main()
{
stack stck;
int i,j;
for(i=0;i<20;i++)
stck.push(i);
j=stck;
cout<<j<<"items on stack\n";
cout<<SIZE-stck<<"spaces open\n";
}

