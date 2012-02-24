#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<stdarg.h>
struct stackNode {/*���������, �� ���������� �� ����*/
int data;//��� �� ���������� � ����, *nextPtr �������� �� ��������� ������� ������

struct stackNode *nextPtr;
 };
typedef struct stackNode node;
typedef node *stack_ptr;//��������� �� ����������� �� �������� �� ������� �����
void push(stack_ptr *, int);
void push(stack_ptr *, char);
int pop(stack_ptr *);
int isEmpty(stack_ptr);
void ( *pointer )(void);
void printStack(stack_ptr,bool flag=0);
void instructions(void);
int f(int n,int a, ...);

using namespace std;
int main() {
	stack_ptr stackPtr = NULL; /*�������� �� �������*/
	int choice, value;
	char choice_push;
	char value1;
	cout<<"What do you want to enter integer or char (i/c)";
	cin>>choice_push;
	if(choice_push=='c'){
		pointer = &instructions; /* ����� ����� ������� */
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
		case 2: /*��������� �������� �� �����*/
			if (!isEmpty(stackPtr))
				printf("The popped value is %c \n", pop(&stackPtr)) ;
			printStack(stackPtr,1);
			break;
		default:
		cout<<"Invalid choice."<<endl<<endl; 
		pointer = &instructions; /* ����� ����� ������� */
pointer();
		break; }
		cout<<"?"; 
		cin>> choice; }
		cout<<"End of run."<<endl;
	}else{
	pointer = &instructions; /* ����� ����� ������� */
pointer();
	cout<<"? ";
	cin>>choice;
	while (choice !=4) {
		switch (choice) {
		case 1: /*��������� �������� � ����*/ 
			cin>> value;
			push (&stackPtr, value);
			//f(4,2,2,2,2);
		printStack (stackPtr );
			
			break;
		case 2: /*��������� �������� �� �����  */
			
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
		pointer = &instructions; /* ����� ����� ������� */
pointer();
		break; }
		cout<<"?"; 
		cin>> choice; }
		cout<<"End of run."<<endl;
	}
return 0;
}
	
/*���� ���������� �� �����*/
void instructions(void) {
	cout<<"Enter choice:\n"
		"1 to push a value on the stack\n"
		"2 to pop a value off the stack\n"
		"3 sum of elements\n"
		"4 to end program\n"
		; }
/*��������� ������ �������� � �������� �����*/
void push (stack_ptr *topPtr, int info)
{	
	stack_ptr newPtr;
	newPtr =new node;//��������� ���'�� ��� �����
	if (newPtr != NULL) {
		newPtr->data = info;// ���� �������� ������� �� ������� �����
		newPtr->nextPtr = *topPtr;//newPtr ������ �� �������� ��������
		*topPtr = newPtr;// ����� *topPtr ������ �� ���� ��������
	} else
			cout<<info<<" not inserted. No memory available."<<endl; 
}
void push (stack_ptr *topPtr, char info)
{	
	stack_ptr newPtr;
	newPtr =new node;//��������� ���'�� ��� �����
	if (newPtr != NULL) {
		newPtr->data = static_cast<int> (info);// ���� �������� ������� �� ������� �����
		newPtr->nextPtr = *topPtr;//newPtr ������ �� �������� ��������
		*topPtr = newPtr;// ����� *topPtr ������ �� ���� ��������
	} else
			cout<<info<<" not inserted. No memory available."<<endl; 
}
/*��������� ����� �� ������ �����*/
int pop(stack_ptr *topPtr)
{
	stack_ptr tempPtr;
	int popValue;
	tempPtr = *topPtr;//��� ��� ����� �� ����� ��������(��������, ������)
	popValue = (*topPtr)->data;// �������� �� ������� ��������
	*topPtr = (*topPtr)->nextPtr;// ������� ���������� � �������� ��������
	free(tempPtr); //��������� �������
	return popValue; 
}
/*���� �����*/
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
/*�������� �� ������ ����*/
int isEmpty(stack_ptr topPtr)
{	
	return topPtr == NULL;//���� ������� ������ �� 0 ������� ���� ������
}


	int f(int n, int a, ...){
	 va_list p; int sum=0;            //--���������� ���������
    va_start(p, n); int b;           //--������������� ���������
  while(n--)           
    {
		b=va_arg(p,int);
		sum=sum+b;
	}
	va_end(p);
	return sum;
	}

