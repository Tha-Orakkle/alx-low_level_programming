#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords for
 * the program 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int i = 0, char_type, sum = 0;
	char password[2772];
	char *digits = "0123456789";
	int dig_len = strlen(digits);

	char *lowers = "abcdefghijklmnopqrstuvwxyz";
	int low_len = strlen(lowers);

	char *uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int up_len = strlen(uppers);

	char *symbols = "!\"@#$%^&'*()+-/:;?><=[]\\_";
	int sym_len = strlen(symbols);

	srand(time(NULL) * getpid());

	while (i < 2772)
	{
		char_type = rand() % 4;

		if (char_type ==  0)
		{
			password[i] = digits[rand() % dig_len];
			sum += password[i];
		}
		else if (char_type == 1)
		{
			password[i] = lowers[rand() % low_len];
			sum += password[i];
		}
		else if (char_type == 2)
		{
			password[i] = uppers[rand() % up_len];
			sum += password[i];
		}
		else
		{
			password[i] = symbols[rand() % sym_len];
			sum += password[i];
		}
		if (sum > 2772)
			break;
		i++;
	}
	printf("%s\n", password);

	return (0);
}


