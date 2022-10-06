/**
Author: Michael Gomes
Date: 11-09-21
Time: 11:15PM
License: Opensource
Langauge Used: ANSI-C
INPUT: Name of the User
OUTPUT: Character Art Letters Printouts
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	char str[100];
	char chr;
	int i, j;

	printf("Enter a word: ");
	gets(str);
	system("cls");
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	for (i = 0; i < str[i]; i++)
	{
		chr = str[i];
		if (chr != '\0')
		{
			if (chr == 'A')
				goto A;
			if (chr == 'B')
				goto B;
			if (chr == 'C')
				goto C;
			if (chr == 'D')
				goto D;
			if (chr == 'E')
				goto E;
			if (chr == 'F')
				goto F;
			if (chr == 'G')
				goto G;
			if (chr == 'H')
				goto H;
			if (chr == 'I')
				goto I;
			if (chr == 'J')
				goto J;
			if (chr == 'K')
				goto K;
			if (chr == 'L')
				goto L;
			if (chr == 'M')
				goto M;
			if (chr == 'N')
				goto N;
			if (chr == 'O')
				goto O;
			if (chr == 'P')
				goto P;
			if (chr == 'Q')
				goto Q;
			if (chr == 'R')
				goto R;
			if (chr == 'S')
				goto S;
			if (chr == 'T')
				goto T;
			if (chr == 'U')
				goto U;
			if (chr == 'V')
				goto V;
			if (chr == 'W')
				goto W;
			if (chr == 'X')
				goto X;
			if (chr == 'Y')
				goto Y;
			if (chr == 'Z')
				goto Z;
			if (chr == ' ')
				goto _O;
		}
	A:
		printf("  ___		\n");
		printf(" / _ \\		\n");
		printf("| |_| |		\n");
		printf("|  _  |		\n");
		printf("| | | |		\n");
		printf("|_| |_|		\n");
		sleep(1);
		system("cls");
		continue;

	B:
		printf(" ____		\n");
		printf("|  _ \\		\n");
		printf("| |_) |		\n");
		printf("|  _ <		\n");
		printf("| |_) |		\n");
		printf("|____/		\n");
		sleep(1);
		system("cls");
		continue;

	C:
		printf("  _____		\n");
		printf(" / ____|	\n");
		printf("| |			\n");
		printf("| |			\n");
		printf("| |____		\n");
		printf(" \\_____|    \n");
		sleep(1);
		system("cls");
		continue;

	D:
		printf(" _____      \n");
		printf("|  __ \\     \n");
		printf("| |  | |    \n");
		printf("| |  | |    \n");
		printf("| |__| |    \n");
		printf("|_____/     \n");
		sleep(1);
		system("cls");
		continue;

	E:
		printf(" ______     \n");
		printf("|  ____|    \n");
		printf("| |__       \n");
		printf("|  __|      \n");
		printf("| |____     \n");
		printf("|______|    \n");
		sleep(1);
		system("cls");
		continue;

	F:
		printf(" ______     \n");
		printf("|  ____|    \n");
		printf("| |__       \n");
		printf("|  __|      \n");
		printf("| |         \n");
		printf("|_|         \n");
		sleep(1);
		system("cls");
		continue;

	G:
		printf("  _____     \n");
		printf(" / ____|    \n");
		printf("| |  __     \n");
		printf("| | |_ |    \n");
		printf("| |__| |    \n");
		printf(" \\_____|    \n");
		sleep(1);
		system("cls");
		continue;

	H:
		printf(" _    _     \n");
		printf("| |  | |    \n");
		printf("| |__| |    \n");
		printf("|  __  |    \n");
		printf("| |  | |    \n");
		printf("|_|  |_|    \n");
		sleep(1);
		system("cls");
		continue;

	I:
		printf(" _____      \n");
		printf("|_   _|     \n");
		printf("  | |       \n");
		printf("  | |       \n");
		printf(" _| |_      \n");
		printf("|_____|     \n");
		sleep(1);
		system("cls");
		continue;

	J:
		printf("      _     \n");
		printf("     | |    \n");
		printf("     | |    \n");
		printf(" _   | |    \n");
		printf("| |__| |    \n");
		printf(" \\____/     \n");
		sleep(1);
		system("cls");
		continue;

	K:
		printf(" _  __      \n");
		printf("| |/ /      \n");
		printf("| ' /       \n");
		printf("|  <        \n");
		printf("| . \\       \n");
		printf("|_|\\_\\      \n");
		sleep(1);
		system("cls");
		continue;

	L:
		printf(" _          \n");
		printf("| |         \n");
		printf("| |         \n");
		printf("| |         \n");
		printf("| |____     \n");
		printf("|______|    \n");
		sleep(1);
		system("cls");
		continue;

	M:
		printf(" __  __     \n");
		printf("|  \\/  |    \n");
		printf("| \\  / |    \n");
		printf("| |\\/| |    \n");
		printf("| |  | |    \n");
		printf("|_|  |_|    \n");
		sleep(1);
		system("cls");
		continue;

	N:
		printf(" _   _      \n");
		printf("| \\ | |     \n");
		printf("|  \\| |     \n");
		printf("| . ` |     \n");
		printf("| |\\  |     \n");
		printf("|_| \\_|     \n");
		sleep(1);
		system("cls");
		continue;

	O:
		printf("  ____      \n");
		printf(" / __ \\     \n");
		printf("| |  | |    \n");
		printf("| |  | |    \n");
		printf("| |__| |    \n");
		printf(" \\____/     \n");
		sleep(1);
		system("cls");
		continue;

	P:
		printf(" _____      \n");
		printf("|  __ \\     \n");
		printf("| |__) |    \n");
		printf("|  ___/     \n");
		printf("| |         \n");
		printf("|_|         \n");
		sleep(1);
		system("cls");
		continue;

	Q:
		printf("  ____      \n");
		printf(" / __ \\     \n");
		printf("| |  | |    \n");
		printf("| |  | |    \n");
		printf("| |__| |    \n");
		printf(" \\___\\_\\    \n");
		sleep(1);
		system("cls");
		continue;

	R:
		printf(" _____      \n");
		printf("|  __ \\     \n");
		printf("| |__) |    \n");
		printf("|  _  /     \n");
		printf("| | \\ \\     \n");
		printf("|_|  \\_\\    \n");
		sleep(1);
		system("cls");
		continue;

	S:
		printf("  _____     \n");
		printf(" / ____|    \n");
		printf("| (___      \n");
		printf(" \\___ \\     \n");
		printf(" ____) |    \n");
		printf("|_____/     \n");
		sleep(1);
		system("cls");
		continue;

	T:
		printf(" _______    \n");
		printf("|__   __|   \n");
		printf("   | |      \n");
		printf("   | |      \n");
		printf("   | |      \n");
		printf("   |_|      \n");
		sleep(1);
		system("cls");
		continue;

	U:
		printf(" _    _     \n");
		printf("| |  | |    \n");
		printf("| |  | |    \n");
		printf("| |  | |    \n");
		printf("| |__| |    \n");
		printf(" \\____/     \n");
		sleep(1);
		system("cls");
		continue;

	V:
		printf("__      __  \n");
		printf("\\ \\    / /  \n");
		printf(" \\ \\  / /   \n");
		printf("  \\ \\/ /    \n");
		printf("   \\  /     \n");
		printf("    \\/      \n");
		sleep(1);
		system("cls");
		continue;

	W:
		printf("__          __  \n");
		printf("\\ \\        / /  \n");
		printf(" \\ \\  /\\  / /   \n");
		printf("  \\ \\/  \\/ /    \n");
		printf("   \\  /\\  /     \n");
		printf("    \\/  \\/      \n");
		sleep(1);
		system("cls");
		continue;

	X:
		printf("__   __     \n");
		printf("\\ \\ / /     \n");
		printf(" \\ V /      \n");
		printf("  > <       \n");
		printf(" / ^ \\      \n");
		printf("/_/ \\_\\     \n");
		sleep(1);
		system("cls");
		continue;

	Y:
		printf("__     __   \n");
		printf("\\ \\   / /   \n");
		printf(" \\ \\_/ /    \n");
		printf("  \\   /     \n");
		printf("   | |      \n");
		printf("   |_|      \n");
		sleep(1);
		system("cls");
		continue;

	Z:
		printf(" ______     \n");
		printf("|___  /     \n");
		printf("   / /      \n");
		printf("  / /       \n");
		printf(" / /__      \n");
		printf("/_____|     \n");
		sleep(1);
		system("cls");
		continue;

	_O:
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		sleep(1);
		system("cls");
		continue;
	}
	printf("\n\n\n\t\t");
	puts(str);
	getch();
	return 0;
}
