#include <stdio.h>
int main(void)
{
int i;
long int i2;
long long int i3;
char c;
float f;

ptintf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(i2));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(i3));
printf("Size of float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}

