#include <stdio.h>
#include <stdlib.h>

int top = -1;

void push(int *arr)
{
    int item;

    printf("Enter element : ");
    scanf("%d", &item);
    top++;
    arr[top] = item;
    printf("%d is the top element\n", arr[top]);
}

void pop(int *arr)
{
    int size;
    free(arr + size);
    top--;
    printf("deleted element is : %d", arr[top]);
}

void display(int *arr)
{
    int i;
    for (i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int *arr, size = 0, choice;
    char option;
    do
    {
        printf("1. Push element in the stack\n2. Pop element form the stack\n3. Display the elements\n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                arr = (int *)realloc(arr,size * sizeof(int));
                size++;
                push(arr);
                break;
            case 2:
                pop(arr);
                size--;
                break;
            case 3:
                display(arr);
                break;
            default:
                printf("You choose error option\n");
                break;
        }
        fflush(stdin);
        printf("Enter if you want to add more data or operations [y/n] :");
        scanf("%c", &option);
        fflush(stdin);
    } while (option == 'y' || option == 'Y');

    return 0;
}