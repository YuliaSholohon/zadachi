//модифікувати програму використавши там вказівник на функцію, перегрузку функцій,
//функції зі змінною кількістю параметрів,функції зі значеннями default
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<stdarg.h>
struct stackNode {/*структура, що посилається на себе*/
int data;//дані що заносяться у стек, *nextPtr вказівник на наступний елемент списку

struct stackNode *nextPtr;
 };
typedef struct stackNode node;
typedef node *stack_ptr;//структура що вказуватиме на вказівник на вершину стеку
//перевантаження функцій , реалізовано вибір вводити символи чи цифри
void push(stack_ptr *, int);
void push(stack_ptr *, char);
int pop(stack_ptr *);
int isEmpty(stack_ptr);
void ( *pointer )(void);
//якщо прапорець функції дорівнює 0 означає вводились символи
void printStack(stack_ptr,bool flag=0);
void instructions(void);
//функція рахує суму елементів які потім передадуться в стек 
int f(int n,int a, ...);

using namespace std;
int main() {
	stack_ptr stackPtr = NULL; /*Вказівник на вершину*/
	int choice, value;
	char choice_push;
	char value1;
	cout<<"What do you want to enter integer or char (i/c)";
	cin>>choice_push;
	if(choice_push=='c'){
		pointer = &instructions; /* берем адрес функции */
pointer();

	cout<<"? ";
	cin>>choice;
	while (choice !=3) {
		switch (choice) {
		case 1:
			cin>> value1;
			push (&stackPtr, value1);
			printStack (stackPtr,1 );
			break;
		case 2: /*Видалення значення із стеку*/
			if (!isEmpty(stackPtr))
				printf("The popped value is %c \n", pop(&stackPtr)) ;
			printStack(stackPtr,1);
			break;
		default:
		cout<<"Invalid choice."<<endl<<endl; 
		pointer = &instructions; /* берем адрес функции */
pointer();
		break; }
		cout<<"?"; 
		cin>> choice; }
		cout<<"End of run."<<endl;
	}else{
	pointer = &instructions; /* берем адрес функции */
pointer();
	cout<<"? ";
	cin>>choice;
	while (choice !=4) {
		switch (choice) {
		case 1: /*Занесення значення в стек*/ 
			cin>> value;
			push (&stackPtr, value);
			//f(4,2,2,2,2);
		printStack (stackPtr );
			
			break;
		case 2: /*Видалення значення із стеку  */
			
			if (!isEmpty(stackPtr))
				printf("The popped value is %d \n", pop(&stackPtr)) ;
			printStack(stackPtr);
			break;
		case 3:cout<<"Counting sum of 5 elements :8,3,4,5,6"<<endl;
			value=f(5,8,3,4,5,6);
			push (&stackPtr, value);
			printStack (stackPtr );
			break;

		default:
		cout<<"Invalid choice."<<endl<<endl; 
		pointer = &instructions; /* берем адрес функции */
pointer();
		break; }
		cout<<"?"; 
		cin>> choice; }
		cout<<"End of run."<<endl;
	}
return 0;
}
	
/*Вивід інструкції на екран*/
void instructions(void) {
	cout<<"Enter choice:\n"
		"1 to push a value on the stack\n"
		"2 to pop a value off the stack\n"
		"3 sum of elements\n"
		"4 to end program\n"
		; }
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
void push (stack_ptr *topPtr, char info)
{	
	stack_ptr newPtr;
	newPtr =new node;//виведення пам'яті для вузла
	if (newPtr != NULL) {
		newPtr->data = static_cast<int> (info);// нове значення поступає на вершину стеку
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
void printStack(stack_ptr currentPtr, bool flag)
{ 	
	if (currentPtr == NULL)
	cout<<"The stack is empty."<<endl<<endl;
	else {
		cout<<"The stack is:"<<endl;
		while (currentPtr != NULL)
		{
			if(flag==true){
			printf("%c -->",currentPtr->data);}
			else{
				cout<<currentPtr->data<<"-->";}
			currentPtr = currentPtr->nextPtr;}
		cout<<"NULL"<<endl<<endl; 
	} 
}
/*Перевірка чи пустий стек*/
int isEmpty(stack_ptr topPtr)
{	
	return topPtr == NULL;//якщо вершина показує на 0 значить стек пустий
}


	int f(int n, int a, ...){
	 va_list p; int sum=0;            //оголошення вказівника
    va_start(p, n); int b;           //ініціалізація вказівника
  while(n--)           
    {
		b=va_arg(p,int);
		sum=sum+b;
	}
	va_end(p);
	return sum;
	}

