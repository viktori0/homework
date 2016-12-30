#include<iostream>
using namespace std;
#include<string.h>
int main()
{
char s[50]; int l;
cout<<"Enter a string of letters ";
cin>>s;
l=strlen(s);	
int flag=0;
for(int x=0;x<l;x++)
if(s[x]=='T')
 {
 	cout<<"position "<<x+1<<endl;
 	flag=1;
}

if(flag==0) cout<<"The is no letter T in the string."<<endl; 


return 0;
}
