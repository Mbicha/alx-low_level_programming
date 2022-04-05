#include "main.h"
#include <stdio.h>

/**
*main - a program that prints all arguments it receives
*@argc: argument count
*@argv: array containing argument values
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int count;

for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}

return (0);

}
