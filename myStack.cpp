#include <iostream>
using namespace std;

struct node
{
    string val;
    node *prev;

    node()
    {
        val="";
        prev=NULL;
    }
    node(string x)
    {
        val=x;
        prev=NULL;
    }
};

struct myStack
{
    node *top;
    myStack(){
        top = NULL;
    }
    void push(string);
    string pop();
    string Top();
    void printStack();
    bool empty();
};

void myStack::push(string x)
{
    node *cur = new node(x);
    if(top!=NULL)
        cur->prev = top;
    top = cur;
}
string myStack::pop()
{
    node *cur = top;
    if(top==NULL){
        cout << "Underflow!" << endl;
        return "";
    }
    top = top->prev;
    string ret = cur->val;
    delete cur;
    return ret;
}
string myStack::Top()
{
    if(top==NULL){
        cout << "Stack is empty!" << endl;
        return "";
    }
    return top->val;
}
bool myStack::empty()
{
    return top==NULL;
}
void myStack::printStack()
{
    if(top==NULL){
        cout << "Stack is empty!" << endl;
        return;
    }
    node *cur=top;
    while(cur!=NULL)
    {
        cout << cur->val << endl;
        cur = cur->prev;
    }
    return;
}

int main()
{
    myStack *stak = new myStack();
    stak->push("5");
    stak->push("+");
    stak->push("3");
    stak->push("*");
    stak->push("2");
    stak->printStack();


    return 0;
}
