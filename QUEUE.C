#include <stdio.h>
int enqueue(int queue[], int rear, int n) {
    if (rear >= n - 1) {
        printf("Queue overflow\n");
    } else {
        int item;
        rear++;
        printf("Enter the item to be inserted: ");
        scanf("%d", &item);
        queue[rear] = item;
    }
    return rear;
}

int dequeue(int queue[], int front, int rear) {
    if (front > rear) {
        printf("Queue underflow\n");
    } else {
        int item = queue[front];
        printf("Deleted element is %d\n", item);
        front++;
    }
    return front;
}

void display(int queue[], int front, int rear) {
    printf("\nThe elements in the queue are: ");
    if (front > rear) {
        printf("Queue is empty\n");
    } else {
        for (int i = front; i <= rear; i++) {
            printf(" %d", queue[i]);
        }
        printf("\n");
    }
}

