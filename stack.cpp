#include <iostream>
#include"stack.h"
using namespace std;




void stack :: push(int data)
{

if(is_full())
{
cout<<"stack is full can't add"<<endl;
}
else
{
top++;
a[top]=data;
}
}


int stack::pop()
{
if(is_empty())
{
cout<<"stack is empty can't pop"<<endl;
}
else
{
return a[top--];
}
}


bool stack::is_empty()
{

if(top==-1)
return true;
else
return false;

}


bool stack::is_full()
{

if(top==MAX)
return true;
else
return false;

}



void stack::display()
{
int i;
for(i=0;i<top+1;i++)
cout<<a[i]<<endl;
}



