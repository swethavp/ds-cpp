#include<iostream>
#include<fstream>
using namespace std;
main(int argc,char *argv[])
{
char ch;
if(argc!=2)
{
cout<<"usage:PR <filename>\n";
return 1;
}
ifstream in (argv[1],ios::in|ios::binary);
if(!in)
{
cout<<"cannot open file";
return 1;
}
while(in)
{
in.get(ch);
if(in)
cout<<ch;
}
}
