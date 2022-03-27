#include<iostream>
#include "stack_head.h"

using namespace std;

template <class T>
 Stack<T>::Stack()
{

}

template<class T>
bool Stack<T>::isFull()
{
    return top==max_items-1;

}

template<class T>
bool Stack<T>::isEmpty()
{
     return top == -1;

}

template<class T>
void Stack<T>::Push(T item)
{
    try
    {

         top++;

        data[top]=item;

        if(isFull()){
            throw fullstack();
        }

    }
    catch(fullstack x)
    {
       cout<<"the Stack is Already Full"<<endl;
    }

}

template<class T>
void Stack<T>::Pop()
{
    try
    {
        if(isEmpty()){

            throw emptystack();
        }
        top--;

    }
    catch(emptystack x)
    {
       cout<<"the Stack is Empty"<<endl;
    }

}

template <class T>
T Stack<T>::Top()
{
    return data[top];
}

