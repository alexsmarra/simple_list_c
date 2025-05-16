#include <stdio.h>
#include "functions.h"

int main() {
   printList();

   insertEnd(5);
   insertStart(23);
   searchListElement(2);
   removeElement(1);

   emptyList();

   return 0;
}