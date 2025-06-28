#include <stdio.h>
#include <stdbool.h>

#include "lib/stack.h"


int main() {
	
		// initial stacks
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
