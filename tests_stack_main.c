#include <stdio.h>
#include <assert.h>
#include "stack.h"

void test_stack() {
    stack s;
    
    initialize(&s);
    assert(empty(&s) == true); 

    int x = 42;
    push(x, &s);
    assert(empty(&s) == false); 
    int y = pop(&s);
    assert(y == x); 
    assert(empty(&s) == true); 

    int x0 = 10, x1 = 20;
    push(x0, &s);
    push(x1, &s);
    
    assert(empty(&s) == false); 

    int y0 = pop(&s);
    int y1 = pop(&s);

    assert(y0 == x1); 
    assert(y1 == x0); 
    assert(empty(&s) == true); 

    printf("All tests passed!\n");
}

int main() {
    test_stack();
    return 0;
}

/*
Output: All tests passed!
*/