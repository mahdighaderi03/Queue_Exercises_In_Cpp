#include<iostream>
using namespace std;

class node{
    public:
        int data;
        int priority;
        node *next;

        node(int value, int p){
            data = value;
            priority = p;
            next = NULL;
        }
};

class PriorityQueue{
    public:
        node *front;

        PriorityQueue(){
            front = NULL;
        }

        ~PriorityQueue() {
            while (front != NULL) {
                node* temp = front;
                front = front->next;
                delete temp;
            }
        }

        bool isempty(){
            if(front == NULL)
                return true;
            else
                return false;
        }

        void enqueue(int value, int priority){
            node *newnode = new node(value, priority);

            if (isempty() || priority > front->priority){
                newnode->next = front;
                front = newnode;
            }
            else{
                node* current = front;
                 while (current->next != NULL && current->next->priority >= priority) {
                    current = current->next;
                }
                newnode->next = current->next;
                current->next = newnode;
            }

            cout << "Enqueued " << value << " with priority " << priority << " to the priority queue." << endl;
        }


        void dequeue() {
            if (isempty()) {
                cout << "Priority queue is empty. Cannot dequeue element." << endl;
                return;
            }

            node* temp = front;
            front = front->next;

            cout << "Dequeued " << temp->data << " with priority " << temp->priority << " from the priority queue." << endl;
            delete temp;
        }

        void display() {
            if (isempty()) {
                cout << "Priority queue is empty." << endl;
                return;
            }

            cout << "Elements in the priority queue: ";
            node* current = front;
            while (current != NULL) {
                cout << current->data << " (Priority: " << current->priority << ") ";
                current = current->next;
            }
            cout << endl;
        }
};


int main() {
    PriorityQueue myPriorityQueue;

    int choice;
    do {
        cout << "Priority Queue Menu: " << endl;
        cout << "1. Enqueue " << endl;
        cout << "2. Dequeue " << endl;
        cout << "3. Display" << endl;
        cout << "4. Quit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int value, priority;
                cout << "Enter the value to enqueue: ";
                cin >> value;
                cout << "Enter the priority: ";
                cin >> priority;
                myPriorityQueue.enqueue(value, priority);
                break;
            case 2:
                myPriorityQueue.dequeue();
                break;
            case 3:
                myPriorityQueue.display();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
