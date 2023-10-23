//Linked list: inserting a node at beginning
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head; //Global variable

void upinsert(int x)
{
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    head = temp;

}
/*void Print()
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        prinf
        temp = temp->next;
    }
}*/

int main()
{
    head = NULL; //empty list
    printf("How many nums?\n");
    int n, x, i = 0;

    scanf("%d",&n);
    while(i < n)
    {
        printf("Enter the num: \n");
        scanf("%d", &x);
        upinsert(x);
        //Print();
    }
}