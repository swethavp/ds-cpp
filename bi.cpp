#include<iostream>
#include<fstream>
using namespace std;
int main()
{
double fnum[4]={99.75,-34.4,1776.0,200.0};
int i;
ofstream out("numbers",ios::out|ios::binary);
if(!out);
{
cout<<"cannot open file";
return 1;
}
out.write((char *)&fnum,sizeof fnum);
out.close();
for(i=0;i<4;i++)
fnum[i]=0.0;
ifstream in("numbers",ios::in|ios::binary);
in.read((char *)&fnum,sizeof fnum);
cout<<in.gcount()<<"bytes read\n";
for(i=0;i<4;i++)
cout<<fnum[i]<<"";
in.close();
return 0;
}

