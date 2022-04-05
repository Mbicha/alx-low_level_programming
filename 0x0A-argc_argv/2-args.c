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

while (argc--)
{
printf("%s\n", *argv++);
}

return (0);

}
