#include "stack.h"
#include <stdlib.h>



void initialize(stack *s) {
  s->head = 0;  //Initialiser stack til "empty"
}

void push(int element, stack *s) {
    // Ny node
    node *new_node = (node *)malloc(sizeof(node));
    if (new_node == 0) {
        printf("Memory allocation fejlede\n");
        return; // Håndter memory allocation fejl
    }
    new_node->data = element;    // Set dataen
    new_node->next = s->head;    // Peg på tidligere top
    s->head = new_node;          // Updater node til ny head
}

int pop(stack *s) {
  if (empty(s)) {
    printf("Stack underflow: Du prøver på at poppe fra en empty stack\n");
  return -1;
}
  node *temp = s->head; //Nuværende top
  int popped_value = temp->data; // Få data til return
  s->head = s->head->next;     // Flyt head til næste node
  free(temp);                  // Frigør gamle top node
  return popped_value;          // Returnér poppet value
}

bool empty(stack *s) {
  return (s->head == NULL);
}

bool full(stack *s) {
 node *test_node = (node *)malloc(sizeof(node));
    if (test_node != NULL) {
        free(test_node); // Frigør test node hvis allocation var successfuld
        return false;    //Hvis vi kunne allocate, stack'en er ikk fuld
    }
    return true; // Hvis allocation fejled, stack'en er fuld
}

