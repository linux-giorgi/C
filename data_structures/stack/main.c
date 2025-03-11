#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];  

    // Index of the top element
    int top;        
} Stack;

// Function to initialize the stack
void initialize(Stack *stack) {
    stack->top = -1;  
}

// Function to check 
bool isEmpty(Stack *stack) {
    return stack->top == -1;  
}

// Function to check if the stack is full
bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;  
}

// Function to push an element onto the stack
void push(Stack *stack, int value) {
   

    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    
	// Increment top and add the value to the top of the stack
    stack->arr[++stack->top] = value;
    printf("Pushed %d\n", value);
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    
	if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
   
	 // Return the top element 
    int popped = stack->arr[stack->top];
   
    stack->top--;
    printf("Popped %d from the stack\n", popped);
   
    return popped;
}

// Function to peek the top element of the stack
int peek(Stack *stack) {
   
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    
	return stack->arr[stack->top];
}

int main() {
    Stack stack;
   
	 // Initialize the stack
    initialize(&stack);  

    // Push elements to the stack 
    push(&stack, 3);
    printf("Top element: %d\n", peek(&stack));

    push(&stack, 5);
    printf("Top element: %d\n", peek(&stack));

    push(&stack, 2);
    printf("Top element: %d\n", peek(&stack));

    push(&stack, 8);
    printf("Top element: %d\n", peek(&stack));

    // Pop elements from the stack and print the stack after each pop
    while (!isEmpty(&stack)) {
        printf("Top element: %d\nPopped element: %d\n", peek(&stack), pop(&stack));
    }

    return 0;
}

