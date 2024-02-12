#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void add_element(int data) {
   if (rear == MAX_SIZE - 1) {
       printf("Queue overflow\n");
       return;
   }
   if (front == -1) {
       front = 0;
   }
   rear++;
   queue[rear] = data;
   printf("%d added to the queue\n", data);
}

void remove_element(int position) {
   if (front == -1 || rear < position) {
       printf("Queue underflow\n");
       return;
   }

   int i;
   for (i = position; i < rear; i++) {
       queue[i] = queue[i + 1];
   }
   rear--;
   if (rear == -1) {
       front = -1;
   }
   printf("Element find at position %d removed\n", position);
}

int find_element(int data) {
   if (front == -1) {
       printf("Queue is empty\n");
       return -1;
   }

   int i;
   for (i = front; i <= rear; i++) {
       if (queue[i] == data) {
           return i;
       }
   }
   printf("%d not found in the queue\n", data);
   return -1;
}

void print_queue() {
   if (front == -1) {
       printf("Queue is empty\n");
       return;
   }

   printf("All Queue elements: ");
   for (int i = front; i <= rear; i++) {
       printf("%d ", queue[i]);
   }
   printf("\n");
}

int main() {
   // Add elements to the queue
   add_element(55);
   add_element(20);
   add_element(85);
   add_element(369);
   add_element(963);

   // Print the queue
   print_queue(); 

 
   remove_element(2);

   print_queue();  

   int pos = find_element(99);
   if (pos != -1) {
       remove_element(pos);
   }

   print_queue();  

   return 0;
}