#include <iostream>
using namespace std;

class Queue
{
private:
    int data;
    int capacity;
    int front, reare;
    int *ptr;

public:
    Queue(int);
    ~Queue();
    void Enqueue(int);
    bool isFull();
    bool isEmpty();
    void Dequeue();
    void display();
    void getReare();
    void getFront();
};

Queue::Queue(int cap)
{
    capacity = cap;
    front = -1;
    reare = -1;
    ptr = new int[cap];
}
bool Queue::isFull()
{
    if (capacity - 1 == reare && front == 0 || reare + 1 == front)
        return true;
    return false;
}
bool Queue::isEmpty()
{
    return (front == -1 || reare == -1);
}
void Queue::Enqueue(int data)
{
    if (isFull())
    {
        cout << "Queue overflow!" << endl;
        return;
    }
    if (isEmpty())
    {
        reare = 0;
        front = 0;
        ptr[reare] = data;
    }
    else if (reare == capacity - 1)
    {
        reare = 0;
        ptr[reare] = data;
    }
    else
    {
        reare++;
        ptr[reare] = data;
    }
}

void Queue::Dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is UNDERFLOW";
        return;
    }
    if (front == reare)
    {
        front = reare = -1;
    }
    else if (front == capacity - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void Queue::display()
{

    if (isEmpty())
    {
        cout << "There are no element in the queue";
        return;
    }
    int temp = front;
    int i = 0;

    /*
    if (front < reare)
    {
        while (temp <= reare)
        {
            cout << ptr[temp] << " ";
            temp++;
        }
    }
    else
    {
        while (temp < capacity)
        {
            cout << ptr[temp] << " ";
            temp++;
        }
        temp = 0;
        while (temp <= reare)
        {
            cout << ptr[temp] << " ";
            temp++;
        }
    }
    */

    while(temp!=reare){
        cout << ptr[temp] << " " ;
        temp = (temp+1)%capacity;
    }
    cout << ptr[reare];
}

void Queue::getReare()
{
    if (isEmpty())
    {
        cout << "UNDERFLOW";
        return;
    }

    cout << ptr[reare];
}

void Queue::getFront()
{
    if (isEmpty())
    {
        cout << "UNDERFLOW";
        return;
    }
    cout << ptr[front];
}
Queue::~Queue()
{
    delete[] ptr;
}
int main()
{
    int capacity, choice, value;

    cout << "Enter the capacity of the queue: ";
    cin >> capacity;

    Queue q(capacity);

    do
    {
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to enqueue: ";
            cin >> value;
            q.Enqueue(value);
            break;

        case 2:
            q.Dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice! Please select again." << endl;
        }
    } while (choice != 4);

    return 0;
}
