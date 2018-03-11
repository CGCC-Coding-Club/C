#include <stdio.h>
#include <string.h>

#define BUFFLEN 85


int main() {

	char buffer[BUFFLEN];
	char name[BUFFLEN];
	char address[BUFFLEN];
	char output[BUFFLEN*2];


	/* Prompt user for name, read user input, and then copy input into name string */
	printf("What is your name: ");
	fgets(buffer, BUFFLEN, stdin);
	strncpy(name, buffer, BUFFLEN);
	fflush(stdout);

	/* Prompt user for address, read user input, and copy to address string */
	printf("What is your address: ");
	fgets(buffer, BUFFLEN, stdin);
	strncpy(address, buffer, BUFFLEN); 


	sprintf(output, "Name: %sAddress: %s", name, address);
	printf("\n");
	fputs(output,stdout);

	return 0;
}
