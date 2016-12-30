#include<iostream>
using namespace std;
#include<string.h>
int main()
{
char s[50]; int l, pos; char symbol;
cout<<"Enter a string of letters ";
cin>>s;
cout<<"Enter a symbol ";
cin>>symbol;
l=strlen(s);	
int flag=0;
for(int x=0;x<l;x++)
if(s[x]==symbol)
 {
  	flag=1;
 	pos=x+1;
}

if(flag==0) cout<<"The is no your symbol in the string."<<endl; 
if(flag==1) 
{
cout<<"The symbol '"<<symbol<<"' is at position "<<pos;
cout<<" The next symbols are ";
for(int x=pos-1;x<l;x++) cout<<s[x];
}

return 0;
}
