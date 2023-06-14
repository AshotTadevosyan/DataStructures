#include <iostream>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = 0;
int rear = -1;

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        std::cout << "Error: Queue is full\n";
    } else {
    	queue[rear++] = value;
	}
}

void dequeue() {
    if (front > rear) {
        std::cout << "Error: Queue is empty\n";
    } else {
    	front++;
	}
}

int frontValue() {
    if (front > rear) {
        std::cout << "Error: Queue is empty\n";
        return -1;
    }
    return queue[front];
}

bool isEmpty() {
    return front > rear;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    std::cout << "The front elements are ";
    while (!isEmpty()) {
        std::cout << frontValue() << " ";
        dequeue();
    }
    return 0;
}

