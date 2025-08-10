#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr)
{
    while(ptr != NULL) {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

// Case1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i=0; i < index-1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Case3: Deleting the last element
struct Node * deleteAtEnd(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// Case4: Deleting the element with a given value from the linked list
struct Node * deleteAtValue(struct Node * head, int value) {
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data != value && q->next != NULL){
        p = p->next;
        q = q->next;
    }

    if(q->data == value) {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link second and second nodes
    second->data = 11;
    second->next = third;

    // link third and second nodes
    third->data = 66;
    third->next = fourth;

    // link fourth and second nodes
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);
    
    // head = deleteFirst(head);
    // head = deleteAtIndex(head, 2);
    // head = deleteAtEnd(head);
    head = deleteAtValue(head, 12);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);



    return 0;
}