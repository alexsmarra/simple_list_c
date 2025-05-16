#include <stdio.h>
#include "functions.h"

int list[LIST_SIZE] = {1, 2, 3}; // initial elements
int size = 3;

void printList() {
   printf("\nCurrent list:\n\n");
   if(size == 0) {
      printf("The list is empty.\n\n");
   } else {
      for(int i = 0; i < size; i++) {
         printf("%d | ", list[i]);
      }
      printf("\n\n");
   }
}

void emptyList() {
   size = 0;
   printf("The list was emptied.\n\n");
}

void insertEnd(int value) {
   if(size < LIST_SIZE) {
      list[size] = value;
      size++;
      printf("The value %d was inserted at the end of the list.\n\n", value);
   } else {
      printf("The list is full.\n\n");
   }
} 

void insertStart(int value) {
   if(size < LIST_SIZE) {
      for(int i = size; i > 0; i--) {
         list[i] = list[i -1];
      }
      list[0] = value;
      size++;
      printf("The value %d was inserted at the beginning of the list.\n\n", value);
   } else {
      printf("The list is full.\n\n");
   }
}

int searchListElement(int value) {
   for(int i = 0; i < size; i++) {
      if(list[i] == value) {
         printf("The first ocurrence is at list[%d]: %d\n\n", i, list[i]);
         return i;
      }
   }
   printf("Value not found in the list.\n\n");
   return -1;
}

void removeElement(int pos) {
   if(pos >= 0 && pos < size) {
      for(int i = pos; i < size -1; i++) {
         list[i] = list[i + 1];
      }
      size--;
      printf("The value at position %d was removed successfully!\n\n", pos);
   } else {
      printf("Invalid position.\n\n");
   }
}










