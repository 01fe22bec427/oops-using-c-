#include<iostream>
using namespace std;
int main()
{
int n,r,sum=0,temp;
cout<<"enter a number";
cin>>n;
temp=n;
while(temp!=0)
{
r=temp%10;
sum=sum+(r*r*r);
temp=temp/10;
}
if(sum==n)
{
cout<<n<<"armstrong number:";
}
else
{
cout<<n<<"not a armstrong number:";
}
}
