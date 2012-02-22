#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
struct stackNode {/*структура, що посилається на себе*/
int data;//дані що заносяться у стек, *nextPtr вказівник на наступний елемент списку
struct stackNode *nextPtr;
 };
typedef struct stackNode node;
typedef node *stack_ptr;//структура що вказуватиме на вказівник на вершину стеку
void push(stack_ptr *, int);
int pop(stack_ptr *);
int isEmpty(stack_ptr);
void printStack(stack_ptr);
void instructions(void);

using namespace std;
int main() {
 stack_ptr stackPtr = NULL; /*Вказівник на вершину*/
	int choice, value;
	instructions();
	cout<<"? ";
	cin>>choice;
	while (choice !=3) {
		switch (choice) {
		case 1: /*Занесення значення в стек*/ 
			cout<<"Enter an integer: ";
			cin>> value;
			push (&stackPtr, value);
			printStack (stackPtr);
			break;
		case 2: /*Видалення значення із стеку*/
			if (!isEmpty(stackPtr))
				cout<<"The popped value is "<< pop(&stackPtr)<<endl; ;
			printStack(stackPtr);
			break;
		default:
		cout<<"Invalid choice."<<endl<<endl; instructions(); break; }
		cout<<"?"; 
		cin>> choice; }
		cout<<"End of run."<<endl;
return 0;
}
	
/*Вивід інструкції на екран*/
void instructions(void) {
	cout<<"Enter choice:\n"
		"1 to push a value on the stack\n"
		"2 to pop a value off the stack\n"
		"3 to end program\n"; }
/*Занесення нового значення у вершинку стеку*/
void push (stack_ptr *topPtr, int info)
{	
	stack_ptr newPtr;
	newPtr =new node;//виведення пам'яті для вузла
	if (newPtr != NULL) {
		newPtr->data = info;// нове значення поступає на вершину стеку
		newPtr->nextPtr = *topPtr;//newPtr показує на попереднє значення
		*topPtr = newPtr;// тепер *topPtr показує на нове значення
	} else
			cout<<info<<" not inserted. No memory available."<<endl; 
}
/*Видалення вузла на вершині стеку*/
int pop(stack_ptr *topPtr)
{
	stack_ptr tempPtr;
	int popValue;
	tempPtr = *topPtr;//дані про зміннц що треба видалити(значення, адреса)
	popValue = (*topPtr)->data;// значення що потрібно видалити
	*topPtr = (*topPtr)->nextPtr;// вершина переходить у наступне значення
	free(tempPtr); //видалення вершини
	return popValue; 
}
/*Друк стеку*/
void printStack(stack_ptr currentPtr)
{ 	
	if (currentPtr == NULL)
	cout<<"The stack is empty."<<endl<<endl;
	else {
		cout<<"The stack is:"<<endl;
		while (currentPtr != NULL)
		{
			cout<<currentPtr->data<<"-->";
			currentPtr = currentPtr->nextPtr;}
		cout<<"NULL"<<endl<<endl; 
	} 
}
/*Перевірка чи пустий стек*/
int isEmpty(stack_ptr topPtr)
{	
	return topPtr == NULL;//якщо вершина показує на 0 значить стек пустий
}

