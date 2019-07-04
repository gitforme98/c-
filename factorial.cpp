
#include<iostream>
#include"stack.h"

using namespace std;

int factorial(int n)
{
int a,b,ans,i;
stack s;
for(i=0;n>=1;n--)
{
s.push(n);
}


while(1)
{
cout<<"yes"<<endl;

a=s.pop();

if(s.is_empty())
break;

b=s.pop();
a=a*b;

s.push(a);
}


return a;
}





int main()
{
int res=factorial(5);
cout<<res<<endl;
return 0;
}
