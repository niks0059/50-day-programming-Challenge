//program to demonstrate functioni pointer convcept.s

#include<stdio.h>
void display()
{
	printf("hello world\n\n");
}
void (*func)(void)=display;
int main()
{
	func=display;
	(*func)();				//calling display function using function pointer.
	
}
