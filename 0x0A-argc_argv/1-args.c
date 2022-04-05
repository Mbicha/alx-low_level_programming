#include "main.h"
#include <stdio.h>

/**
*main - a program that prints number of arguments passed to it
*followed by new line
*@argc: argument count
*@argv: array containing argument values
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
if (argv[0])
{
printf("%d\n", argc - 1);
}

return (0);

}
