#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int data)
    {
        arr = new int(size);
        this->size = size;
        top1 = -1;
        top2 = -1;
    }

    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "chutiya ho jo ki stack full h fir bhi element fill karna chatay ho ok goodbye!" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Chutiya ho jo empty stack m sa element delete karna chata ho " << endl;
        }
        else
        {
            top1--;
        }
    }

    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "chutiya ho ab sach m tum " << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void pop2()
    {
        if (top2 == -1)
        {
            cout << "Chutiya ho jo empty stack m sa element delete karna chata ho " << endl;
        }
        else
        {
            top2--;
        }
    }

};

int main()
{

    Stack s(10);

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);

    s.push2(100);
    s.push2(200);
    s.push2(300);
    s.push2(400);

  s.pop1();
  s.pop2();
   
   


}