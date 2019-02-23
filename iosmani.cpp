#include<iostream>
using namespace std;
main()
{
cout.setf(ios::hex,ios::basefield);
cout<<100<<"\n";
cout.fill('?');
cout.width(10);
cout<<2343.0;
}

