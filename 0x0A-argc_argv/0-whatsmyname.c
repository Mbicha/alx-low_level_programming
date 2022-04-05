#include "main.h"
#include <stdio.h>

/**
*main - a program that prints its name followed by new line
*@argc: argument count
*@argv: array containing argument value
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}

return (0);

}
