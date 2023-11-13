#include <bits/stdc++.h>
using namespace std;

class Queue {
    int *arr;
    int front; 
    int rear;
    int size;
public:
    Queue(int n)
    {
        size = n; //size
        arr = new int[size]; //array
        front = 0; //front and rear
        rear = 0;
    }
    void enqueue(int data)
    {
        if(rear == size) //rear at n
        {
            cout << "queue is full"; 
        }
        else
        {
            arr[rear]=data; //data at rear 
            rear++; //moving rear
        }
    }
    int dequeue()
    {
        if(front == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front]; //storing front in ans
            arr[front] = -1; //setting it as -1
            front++; //moving front
            if(front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
    void disp()
    {
        cout << "Front: " << arr[front] << endl;
        for (int i = front; i <= rear; i++)
        cout << arr[i] << "  ";
      cout << endl
         << "Rear index-> " << arr[rear] << endl;
    }
};

int main(int argc, char const *argv[])
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(50);
    q.enqueue(30);
    q.enqueue(80);
    q.dequeue();
    cout << "Value in queue are : ";
    q.disp();
    return 0;
}
