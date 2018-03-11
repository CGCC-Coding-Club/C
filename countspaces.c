#include <stdio.h>

#define LEN 100


int count_spaces(char str[], int len);

int main() {

	char str[LEN];

	printf("Enter a string: ");
	fgets(str, LEN, stdin);		/* Get a string from input(stdin), and store it in variable str */

	printf("Your string is: %s", str);
	printf("Your string has %d spaces\n", count_spaces(str, LEN));

	return 0;
}

% This function will count the whitespace in-between your entered string. It will not go past the last character of your string, but only count what is in-between. 
int count_spaces(char str[], int len) {
	int ii;
	int count = 0;

	while ((ii < len) && (str[ii] != '\0')) {
		if (str[ii] == ' ') {
			count ++;
		}
	ii++;
	}

return count;
}
