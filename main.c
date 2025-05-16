#include <stdio.h>
#include "functions.h"

int main() {
   printList();

   insertEnd(5);
   insertStart(23);
   searchListElement(0);
   removeElement(0);

   printList();

   return 0;
}