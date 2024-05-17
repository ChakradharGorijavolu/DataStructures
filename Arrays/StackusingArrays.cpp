#include <iostream>
#include<stdlib.h>
using namespace std;
#define max 100



int arr[max],top=-1;


void push(int data){
    if(top==max-1){
        cout << "Stack is Full";
        return;
    }

    top=top+1;
    arr[top]=data;
}



int pop(){
    int value;
    if(top==-1){
        cout << "Stack is Empty";
        exit(1);
    }

    value=arr[top];
    top=top-1;
    return value;
}



int peek(){
    if(top == -1){
        cout <<"Stack is Empty";
        exit(1);
    }
    return arr[top];
}


void Display(){
    if(top==-1){
        cout << "Stack is Empty";
    }
    for(int i=top;i>=0;i--){
        cout << arr[i] <<" ";
    }
}



int main()
{
    int choice,data;
    while(1)
    {
        cout <<"\n";
        cout <<"1.Push\n";
        cout <<"2.Pop\n";
        cout <<"3.print top most element of the Stack\n";
        cout <<"4.Display elements in the Stack\n";
        cout <<"5.Quit\n";
        cout <<"Please enter your choice= ";
        cin >> choice;
        
        
        switch(choice)
        {
            case 1:
                 cout << "Enter elements to be pushed= ";
                 cin >> data;
                 push(data);
                 break;
                 
            case 2:
                 data=pop();
                 cout << "popped element is: "<<data;
                 break;
                 
                 
            case 3:
                 cout << peek();
                 break;
                 
                 
            case 4:
                 Display();
                 break;
                
            case 5:
                  exit(1);
        }
    }
    return 0;
}