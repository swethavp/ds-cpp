#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
struct status
{
char name[80];
double balance;
unsigned long account_num;
};
main()
{
struct status acc;
strcpy(acc.name,"Ralph Trantor");
acc.balance=1123.23;
acc.account_num=34235678;
ofstream outbal("balance",ios::out|ios::binary);
if(!outbal)
{
cout<<"cannot open file\n";
return 1;
}
outbal.write((char *)&acc,sizeof(struct status));
outbal.close();
ifstream inbal("balance",ios::in|ios::binary);
if(!inbal)
{
cout<<"cannot open file\n";
return 1;
}
inbal.read((char *)&acc,sizeof(struct status));
cout<<acc.name<<endl;
cout<<"Account#"<<acc.account_num;
cout.precision(2);
cout.setf(ios::fixed);
cout<<endl<<"Balance:$"<<acc.balance;
inbal.close();
}
