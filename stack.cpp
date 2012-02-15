#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
struct stackNode {/*структура, що посилається на себе*/
int data;
struct stackNode *nextPtr;
 };
typedef struct stackNode STACKNODE;
typedef STACKNODE *STACKNODEPTR;
void push(STACKNODEPTR *, int);
int pop(STACKNODEPTR *);
int isEmpty(STACKNODEPTR);
void printStack(STACKNODEPTR);
void instructions(void);

using std::cout;
using std::endl;
int main() {
STACKNODEPTR stackPtr = NULL; /*Вказівник на вершину*/
int choice, value;
instructions();
printf ("? ");
scanf("%d", &choice) ;
while (choice !=3) {
switch (choice) {
case 1: /*Занесення значення в стек*/ 
printf("Enter an integer: ");
scanf("%d", &value);
push (&stackPtr, value);
printStack (stackPtr);
 break;
case 2: /*Видалення значення із стеку*/
if (!isEmpty(stackPtr))
printf("The popped value is %d.\n", pop(&stackPtr)) ;
printStack(stackPtr);
break;
default:
printf("Invalid choice.\n\n");
instructions();
break;
}
printf ("? ");
scanf("%d", &choice); }
printf("End of run.%n"); return 0;
 }
/*Вивід інструкції на екран*/
void instructions(void) {
printf("Enter choice:\n"
"1 to push a value on the stack\n"
"2 to pop a value off the stack\n"
"3 to end program\n"); }
/*Занесення нового значення у вершинку стеку*/
void push (STACKNODEPTR *topPtr, int info)
{	STACKNODEPTR newPtr;
newPtr =new STACKNODE;
if (newPtr != NULL) {
newPtr->data = info;
newPtr->nextPtr = *topPtr;
*topPtr = newPtr; } else
printf("%d not inserted. No memory available.\n", info); 
}
/*Видалення вузла на вершині стеку*/
int pop(STACKNODEPTR *topPtr)
{	STACKNODEPTR tempPtr;
int popValue;
tempPtr = *topPtr;
popValue = (*topPtr)->data;
*topPtr = (*topPtr)->nextPtr;
free(tempPtr); return popValue; 
}
/*Друк стеку*/
void printStack(STACKNODEPTR currentPtr)
{ 	if (currentPtr == NULL)
printf ("The stack is empty.\n\n");
else { printf("The stack is:\n");
while (currentPtr != NULL) {
cout<<currentPtr->data<<"-->";
currentPtr = currentPtr->nextPtr;}
printf("NULL\n\n"); } 
}
/*Перевірка чи пустий стек*/
int isEmpty(STACKNODEPTR topPtr)
{	return topPtr == NULL;}

