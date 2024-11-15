#include <iostream>
using namespace std;

class Deque{
    private:
        int capacity;
        int front;
        int rear;
        int *ptr;
    public:
        Deque(int);
        bool isFull();
        bool isEmpty();
        void INSERT_FROM_REAR_END(int);
        void INSERT_FROM_FRONT_END(int);
        void DELETE_FROM_FRONT_END();
        void DELETE_FROM_REAR_END();
        void Display();
};

Deque::Deque(int cap){
    capacity = cap;
    rear = -1;
    front = -1;
    ptr = new int[cap];
}

bool Deque::isFull()
{
    return (front == 0 && rear == capacity-1) || (front = rear+1);
}

bool Deque::isEmpty(){
    return (front == -1 || rear == -1);
}

void Deque::INSERT_FROM_REAR_END(int data){

    if(isFull()){
        cout << "OVERFLOW";
        return;
    }

    if(isEmpty()){
        rear = 0;
        front = 0;
        ptr[rear] = data;
    }

    else if(rear == capacity-1){
        rear = 0;
        ptr[rear] = data;
    }
    else{
        rear++;
        ptr[rear] = data;
    }
        
}

void Deque::INSERT_FROM_FRONT_END(int data){

    if(isFull()){
        cout << "OVERFLOW";
        return;
    }

    if(isEmpty()){
        front = 0;
        rear = 0;
        ptr[front] = data;
    }

    else if(front == 0){
        front = capacity - 1;
        ptr[front] = data;
    }
    else{
        front--;
        ptr[front] = data;
    }
}

void Deque::DELETE_FROM_REAR_END(){
    
    if(isEmpty()){
        cout << "UNDERFLOW";
        return;
    }

    if(front == rear){
        front == -1;
        rear = -1;
    }
    else if(rear == 0){
        rear = capacity - 1;
    }
    else{
        rear--;
    }
}

void Deque::Display(){
    int temp = front;

    while(temp!=rear){
        cout << ptr[temp] << " ";
        temp = (temp+1)/capacity;
    }
    cout << ptr[rear];
}


int main()
{
    int capacity, choice, value;

    cout << "Enter the capacity of the queue: ";
    cin >> capacity;

    Deque q(capacity);

    do
    {
        cout << "\nDeque Operations:\n";
        cout << "1.INSERT_FROM_FRONT_END \n";
        cout << "2.INSERT_FROM_REAR_END\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to enqueue: ";
            cin >> value;
            q.INSERT_FROM_FRONT_END(value);
            break;

        case 2:
            cout << "Enter the value to enqueue: ";
            cin >> value;
            q.INSERT_FROM_REAR_END(value);
            break;

        case 3:
            q.Display();
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
