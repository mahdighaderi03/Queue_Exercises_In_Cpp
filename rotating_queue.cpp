#include <iostream>
using namespace std;

class Queue{
    int *array;
    int front;
    int rear;
    int size;

    public:
        Queue(int s){
            array = new int[s];
            front = -1;
            rear = -1;
            size = s;
        }
        void enqueue(int value);
        int dequeue();
        void display();
};

void Queue::enqueue(int value){
    if ((front == 0 && rear == size - 1) || (rear == front - 1)){
        cout << "Queue is full! ";
        return;
    }
    else if (front == -1){
        front = rear = 0;
        array[rear] = value;
    }
    else if(rear == size - 1 && front != 0){
        rear = 0;
        array[rear] = value;
    }
    else{
        rear++;
        array[rear] = value;
    }
}

int Queue::dequeue(){
    if (front == -1){
        cout << "Queue is Empty! ";
        return -1;
    }
     int item = array[front];
     array[front] = -1;

     if (front == rear){
        front = rear = -1;
     }
     else if (front == size - 1){
        front = 0;
     }
     else
        front++;

    return item;
}

void Queue::display(){
    if (front == -1){
        cout << "Queue is Empty! ";
        return;
    }

    cout << "Elements: " << endl;
    if (front <= rear){
        for(int i = front; i <= rear; i++){
            cout << array[i] << " ";
        }
    }
    else{
        for(int i = front; i < size; i++){
            cout << array[i] << " ";
        }
        for(int i = 0; i <= rear; i++){
            cout << array[i] << " ";
        }
    }
}

int main(){
    Queue q(5);
    int value;
    int choice;

    do{
        cout << "1. enqueue " << endl;
        cout << "2. dequeue " << endl;
        cout << "3. display: " << endl;
        cout << "0. Exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                value = q.dequeue();
                if (value != -1)
                    cout << "Dequeued element: " << value << endl;
                break;
            case 3:
                q.display();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
