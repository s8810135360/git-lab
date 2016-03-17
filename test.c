#include <stdio.h>

#define LEN 7

extern char *getStudentID(char *id);

int check1(char m)
{
	if (m >= '0' && m <= '9')
		return 0;

	printf("Check 1 is fail!\n");
	return 1;
}

int check2(char m)
{
	if (m == '\0')
		return 0;

	printf("Check 2 is fail!\n");
	return 1;
}

int main()
{
	char id[10];
	char *output;
	int ret;

	output = getStudentID(id);

	/* check */
	for (int i = 0; i <= LEN; i++) {
		ret |= check1(output[i]);
	}

	ret |= check2(output[LEN + 1]);

	return ret;
}
