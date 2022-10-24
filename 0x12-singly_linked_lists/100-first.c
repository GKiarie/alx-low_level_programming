#include "main.h"

void myStartupFun(void) __attribute__ ((constructor));

/**
  * myStartupFun - function that prints b4 main
  * is executed
  * Return: nothing
  */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
