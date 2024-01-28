# Queue_Exercises_In_Cpp
Here, I wrote the queue implementation code, and in the following, exercises such as priority queue and rotating queue have been done.

## queue:
This C++ program demonstrates the implementation of a circular queue using an array.

### Class: Queue
- **Private Members:**
  - `int* arr`: Dynamic array to store queue elements.
  - `int front`: Front index of the queue.
  - `int rear`: Rear index of the queue.
  - `int size`: Maximum size of the queue.

- **Public Methods:**
  - **Constructor (`Queue(int maxSize)`):** Initializes the circular queue with a specified maximum size.
  - **Destructor (`~Queue()`):** Releases the dynamically allocated memory.
  - **`bool isEmpty()`:** Returns true if the queue is empty; otherwise, returns false.
  - **`bool isFull()`:** Returns true if the queue is full; otherwise, returns false.
  - **`void enqueue(int value)`:** Adds an element to the rear of the queue.
  - **`void dequeue()`:** Removes the element from the front of the queue.
  - **`void display()`:** Displays the elements in the queue.

### Main Function:
The `main()` function allows the user to interact with the circular queue through a simple menu-driven interface.

#### Menu Options:
1. **Enqueue:** Add an element to the rear of the queue.
2. **Dequeue:** Remove an element from the front of the queue.
3. **Display:** Display the elements in the queue.
4. **Quit:** Terminate the program.

### Example:

```
Enter the size of the queue: 5

Queue Menu:
1. Enqueue
2. Dequeue
3. Display
4. Quit
Enter your choice: 1
Enter the value to enqueue: 10
Enqueued 10 to the queue.

Queue Menu:
1. Enqueue
2. Dequeue
3. Display
4. Quit
Enter your choice: 3
Elements in the queue: 10 

Queue Menu:
1. Enqueue
2. Dequeue
3. Display
4. Quit
Enter your choice: 2
Dequeued 10 from the queue.

Queue Menu:
1. Enqueue
2. Dequeue
3. Display
4. Quit
Enter your choice: 4
Exiting program.
```


## rotating_queue:
This C++ program demonstrates the implementation of a circular queue using an array.

### Class: Queue
- **Private Members:**
  - `int* array`: Dynamic array to store queue elements.
  - `int front`: Front index of the circular queue.
  - `int rear`: Rear index of the circular queue.
  - `int size`: Maximum size of the circular queue.

- **Public Methods:**
  - **Constructor (`Queue(int s)`):** Initializes the circular queue with a specified maximum size.
  - **`void enqueue(int value)`:** Adds an element to the rear of the circular queue.
  - **`int dequeue()`:** Removes the element from the front of the circular queue and returns it.
  - **`void display()`:** Displays the elements in the circular queue.

### Main Function:
The `main()` function allows the user to interact with the circular queue through a simple menu-driven interface.

#### Menu Options:
1. **Enqueue:** Add an element to the rear of the circular queue.
2. **Dequeue:** Remove an element from the front of the circular queue.
3. **Display:** Display the elements in the circular queue.
4. **Exit:** Terminate the program.

### Example:
```
1. enqueue 
2. dequeue 
3. display: 
0. Exit 
Enter your choice: 1
Enter value to enqueue: 10
Enqueued 10 to the queue. 

1. enqueue 
2. dequeue 
3. display: 
0. Exit 
Enter your choice: 3
Elements: 
10 

1. enqueue 
2. dequeue 
3. display: 
0. Exit 
Enter your choice: 2
Dequeued element: 10 

1. enqueue 
2. dequeue 
3. display: 
0. Exit 
Enter your choice: 0
Exiting...
```


## priority_queue:
This C++ program demonstrates the implementation of a priority queue using a linked list.

### Class: node
- **Public Members:**
  - `int data`: Value of the node.
  - `int priority`: Priority of the node.
  - `node* next`: Pointer to the next node.

- **Constructor (`node(int value, int p) ):** Initializes a node with the given value and priority.

### Class: PriorityQueue
- **Public Members:**
  - `node* front`: Pointer to the front of the priority queue.

- **Public Methods:**
  - **Constructor (`PriorityQueue()`):** Initializes an empty priority queue.
  - **Destructor (`~PriorityQueue()`):** Releases memory occupied by nodes in the priority queue.
  - **`bool isempty()`:** Returns true if the priority queue is empty; otherwise, returns false.
  - **`void enqueue(int value, int priority)`:** Adds an element with a specified value and priority to the priority queue.
  - **`void dequeue()`:** Removes and displays the element with the highest priority from the priority queue.
  - **`void display()`:** Displays the elements in the priority queue.

### Main Function:
The `main()` function allows the user to interact with the priority queue through a simple menu-driven interface.

#### Menu Options:
1. **Enqueue:** Add an element to the priority queue with a specified value and priority.
2. **Dequeue:** Remove and display the element with the highest priority from the priority queue.
3. **Display:** Display the elements in the priority queue.
4. **Quit:** Terminate the program.

### Example:
```
Priority Queue Menu:
1. Enqueue
2. Dequeue
3. Display
4. Quit
Enter your choice: 1
Enter the value to enqueue: 10
Enter the priority: 2
Enqueued 10 with priority 2 to the priority queue.

Priority Queue Menu:
1. Enqueue
2. Dequeue
3. Display
4. Quit
Enter your choice: 3
Elements in the priority queue: 10 (Priority: 2) 

Priority Queue Menu:
1. Enqueue
2. Dequeue
3. Display
4. Quit
Enter your choice: 2
Dequeued 10 with priority 2 from the priority queue.

Priority Queue Menu:
1. Enqueue
2. Dequeue
3. Display
4. Quit
Enter your choice: 4
Exiting program.
```
