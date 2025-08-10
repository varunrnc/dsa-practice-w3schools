#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isFull(struct stack* ptr) {
    if(ptr->top == ptr->size - 1) {
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct stack* ptr) {
    if(ptr->top == -1) {
        return 1;
    }else{
        return 0;
    }
}

int push(struct stack* ptr, int val) {
    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack* sp, int i) {
    int arryInd = sp->top -i + 1;
    if(arryInd < 0 ) {
        printf("Not a valid position for the stack\n");
        return -1;
    }else{
        return sp->arr[arryInd];
    }
}

int main()
{
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 4;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("%d\n", isFull(sp));
    printf("%d\n", isEmpty(sp));
    push(sp, 56);
    push(sp, 6);
    push(sp, 5);
    push(sp, 4);
    push(sp, 56);
    printf("%d\n", isFull(sp));
    printf("%d\n", isEmpty(sp));
    
    // printf("Popped %d from the stack\n", pop(sp));

    for(int j = 1; j < sp->top + 1; j++) {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }

    return 0;
}