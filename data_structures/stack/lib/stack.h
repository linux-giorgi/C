#include <stdio.h>

#ifndef STACK_H
#define STACK_H
#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];  

    // Index of the top element
    int top;        
} Stack;

// Function to initialize the stack
void initialize(Stack *stack);

// Function to check 
bool isEmpty(Stack *stack);

// Function to check if the stack is full
bool isFull(Stack *stack);

// Function to push an element onto the stack
void push(Stack *stack, int value);

// Function to pop an element from the stack
int pop(Stack *stack);

// Function to peek the top element of the stack
int peek(Stack *stack);

#endif
