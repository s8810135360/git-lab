#include <stdio.h>
#include <string.h>

#define LEN 7

extern char *getStudentID(char *id);

int check1(char m)
{
	if (m >= '0' && m <= '9')
		return 0;

	return 1;
}

int check2(char *output)
{
	int length;

	length = strlen(output);

	if (length == LEN)
		return 0;
	else
		printf("Check 2 is fail! Student id length is incorrect!\n");

	return 1;
}

int check3(char *str1, char *str2)
{
	int ret;

	ret = (strcmp(str1, str2) != 0);

	if (ret)
		printf("Check 3 is fail! Do not modify the return statement of getStudentID function!\n");

	return ret;
}

int main()
{
	char id[10];
	char *output;
	int ret = 0;

	output = getStudentID(id);

	/* check */

	for (int i = 0; i < LEN; i++) {
		ret |= check1(output[i]);
	}

	if (ret)
		printf("Check 1 is fail! Please give 7 digit numbers!\n");

	ret |= check2(output);

	ret |= check3(output, id);

	return ret;
}
