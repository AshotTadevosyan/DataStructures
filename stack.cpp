#include <iostream>
#define n 100

int stack[n];
int top = -1;

void push(int val) {
   if(top >= n - 1) {
   	std::cout << "Stack overflow";
   }
   else {
      top++;
      std::cout << "The value added is " << val << std::endl;
      stack[top]=val;
   }
}

void pop() {
   if(top < 0) {
   	std::cout << "Stack underflow";
   }
   else {
      std::cout << "The popped element is " << stack[top];
      top--;
   }
}

int peek() {
    if (top < 0) {
        std::cout << "Stack is empty" << std::endl;
        return 0;
    }
    return stack[top];
}

bool isEmpty() {
    if (top < 0) {
    	std::cout << "The stack is empty.";
	} else {
		std::cout << "The stack is not empty.";
	}
}

bool isFull() {
    if (top > n) {
    	std::cout << "The stack is full.";
	} else {
		std::cout << "The stack is not full.";
	}
}

void display() {
   if(top >= 0) {
      std::cout << "Stack elements are:";
      for(int i = top; i >= 0; i--) {
      	std::cout << stack[i] << " ";
	  }
   } else
   std::cout<<"Stack is empty";
}

int main() {
	push(1);
    push(2);
    push(8);
	display();
	
	return 0;
}
