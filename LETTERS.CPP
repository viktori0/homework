#include<iostream>
using namespace std;
#include<string.h>
int main()
{
char s[50]; int l;
cout<<"Enter a string between 30 and 50 symbols ";
cin>>s;
l=strlen(s);
cout<<"Numbers of symbols: "<<l<<endl;
cout<<"First symbol: "<<s[0]<<endl;
if(s%2==0)
{
cout<<"Middle symbol: "<<s[l/2]<<endl;
}
else
{
    s=(s-1)/2;
}
cout<<"Last symbol: "<<s[l-1]<<endl;


return 0;
}
