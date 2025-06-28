#include <stdio.h>

#include "stack.h"

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
