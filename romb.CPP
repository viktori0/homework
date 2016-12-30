#include<iostream>
using namespace std;
#include<string.h>
int main()
{
char letter;
cout<<"Enter a big letter ";
cin>>letter;
int br=1;
cout<<'A'<<endl;
for(char x='B';x<=letter;x++)
{
cout<<x;
for(int y=1;y<=br;y++)cout<<'*';
cout<<x;
cout<<endl;
br+=2;
}
br-=4;
for(char x=letter-1;x>='B';x--)
{
cout<<x;
for(int y=1;y<=br;y++)cout<<'*';
cout<<x;
cout<<endl;
br-=2;
}
cout<<'A'<<endl;
return 0;
}
