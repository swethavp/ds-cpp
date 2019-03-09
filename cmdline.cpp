#include<iostream>
#include<fstream>
using namespace std;
main(int argc,char *argv[])
{
if(argc!=2)
{
cout<<"usage:output<filename>\n";
return 1;
}
ofstream out(argv[1]);
if(!out)
{
cout<<"cannot open output file\n";
return 1;
}
char str[80];
cout<<"write string to disk enter ! to stop\n";
do
{
cout<<":";
cin>>str;
cout<<str<<endl;
}
while(*str!='!');
out.close();
}

