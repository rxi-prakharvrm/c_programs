#include <stdio.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node *head = NULL, *new_node, *temp;
    int count = 5;
    while(count) {
        new_node = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        new_node->next = 0;
        if(head == 0)
            head = temp = new_node;
        else{
            temp->next = new_node;
            temp = new_node;
        }
        count--;
    }
    temp = head;
    while(temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
