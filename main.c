#include <stdio.h>
#include <string.h>
//1
int main(int argc, char **argv)
{
	char name[255];

	printf("Enter your name: ");
	fgets(name, 255, stdin);
	printf("length = %d\n", strlen(name)); /* debug line */
	name[strlen(name)-1] = '\0'; /* remove the newline at the end */
//2
	printf("Hello %s!\n", name);
	return 0;
	//3
}