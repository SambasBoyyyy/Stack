#ifndef STACK_HEAD_H_INCLUDED
#define STACK_HEAD_H_INCLUDED
const int max_items = 30;


class emptystack
{

};
class fullstack
{

};

template<class T>

class Stack
{
private:
    T data[max_items];
    int top=-1;
public:
    Stack(/* args */);
    void Push(T);
    void Pop();
    bool isFull();
    bool isEmpty();
    T Top();

};


#endif // STACK_HEAD_H_INCLUDED
