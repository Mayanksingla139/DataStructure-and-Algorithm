#include <iostream>
using namespace std;
class stack
{
    int *arr;
    int top;
    int size;

public:
    stack(int St_Size)
    {
        arr = new int[St_Size];
        size = St_Size;
        top = 0;
    }
    void push(int value)
    {
        if (size == top)
        {
            cout << "stack is full" << endl;
        }
        else
        {
            arr[top] = value;
            top++;
        }
    }
    int pop()
    {
        if (top == 0)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            top--;
            return arr[top];
        }
        return 0;
    }
    int display()
    {
        if (top == 0)
        {
            cout << "stack is empty";
        }
        for (int i = top - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
    bool isEmpty()
    {
        return top == 0;
    }
    int stsize()
    {
        return top;
    }
    int sttop()
    {
        if (top == 0)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            return arr[top - 1];
        }
        return 0;
    }
};
int main()
{
    stack s(4);
    int ch, val;
    cout << "1) press 1 for push" << endl;
    cout << "2) press 2 for pop" << endl;
    cout << "3) press 3 for see the current size of stack " << endl;
    cout << "4) press 4 for see the top most element" << endl;
    cout << "5) press 5 for check stack is empty or not" << endl;
    cout << "6) press 6 for display the stack" << endl;
    cout << "7) press 7 for Exit" << endl;
    do
    {
        cout << "enter the choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "enter the value for push:";
            cin >> val;
            s.push(val);
            break;
        }
        case 2:
        {
            cout << "you select pop:" << endl;
            cout << "pop element is:" << s.pop() << endl;
            break;
        }
        case 3:
        {
            cout << "you wanna check current size:" << endl;
            cout << "current size is:" << s.stsize() << endl;
            break;
        }
        case 4:
        {
            cout << "you wanna see top most element:" << endl;
            cout << "top element is:" << s.sttop() << endl;
            break;
        }
        case 5:
        {
            cout << "check stack status is empty or not" << endl;
            cout << s.isEmpty() << endl;
            break;
        }
        case 6:
        {
            cout << "display stack" << endl;
            s.display();
            cout << endl;
            break;
        }
        case 7:
        {
            cout << "exit" << endl;
            break;
        }
        default:
        {
            cout << "you enter wrong choice";
            break;
        }
        }
    } while (ch != 7);
}