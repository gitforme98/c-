#ifndef stack_h
#define stack_h

#define MAX 20

class stack
{
private: 
int a[MAX];
int top=-1;
public:
//void stack();
int pop();
void push(int);
bool is_empty();
bool is_full();
void display();
};


#endif
