#include<iostream>
using namespace std;
main()
{
cout.setf(ios::uppercase|ios::scientific);
cout<<100.12;
cout.unsetf(ios::uppercase);
cout<<"\n"<<100.12;
}

