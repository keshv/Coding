#include<iostream>
using namespace std;
class Stack{
    private:
        int size;
        int top;
        char *s;
    public:
        void create();
        void push(char);
        char pop();
        void display();
        int isEmpty();
        int isFull();
        int isBalanced(string);
};

void Stack::create(){
    cout<<"Enter size:"<<endl;
    cin>>size;
    s=new char[size];
    top=-1;
}

void Stack::push(char a){
    if (isFull())
    {
        cout<<"Overflow of Data"<<endl;
    }
    else
    {
        s[++top]=a;
        cout<<"Elemnt Added:"<<s[top]<<endl;
    }
}

char Stack::pop(){
    if(isEmpty()){
        cout<<"Underflow of Data"<<endl;
        return 0;
    }
    else
    {
        return s[top--];
    }
    
}

void Stack::display(){
    cout<<"Display"<<endl;
    if(isEmpty())
        cout<<"Underflow of Data"<<endl;
    else{
        for (int i = 0; i <=top; i++)
        {
            cout<<s[i]<<endl;
        }
    }
    
        
}

int Stack::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}

int Stack::isFull(){
    if(top==size-1)
        return 1;
    else
        return 0;
}

int Stack::isBalanced(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            push(s[i]);
        else if(s[i]==')' || s[i]==']' || s[i]=='}'){
            if(isEmpty())
                return 0;
            char a=pop();
            cout<<"Popped element: "<<a<<endl;
            if((a=='(' && s[i]==')') || (a=='{' && s[i]=='}') ||(a=='[' && s[i]==']'))
                continue;
            else
                return 0;
        }
    }
    if(isEmpty())
        return 1;
    else
        return 0;
}

int main()
{
    cout<<endl<<"Program to implement Stack:"<<endl;
    Stack s;
    cout<<"---Create Stack---"<<endl;
    s.create();
    string ss="{(a+b)+(c-d)}";
    int r=s.isBalanced(ss);
    s.display();
    if(r)
        cout<<"Balanced"<<endl;
    else
    {
            cout<<"Not Balanced"<<endl;
    }

    return 0;
}
