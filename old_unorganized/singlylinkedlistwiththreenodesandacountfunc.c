#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head)
{
    int count = 0;
    
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr -> link;
    }
    printf("There are %d nodes in this singly linked list", count);
}

int main(void)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;
    printf("%d\n", head -> data);
    
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current -> data = 98;
    current -> link = NULL;
    head -> link = current;
    printf("%d\n", current -> data);
    
    current = (struct node *)malloc(sizeof(struct node));
    current -> data = 3;
    current -> link = NULL;
    head -> link -> link = current;
    printf("%d\n", current -> data);
    
    current = (struct node *)malloc(sizeof(struct node));
    current -> data = 105;
    current -> link = NULL;
    head -> link -> link -> link = current;
    printf("%d\n", current -> data);
    
    count_of_nodes(head);
    
    return (0);
}