/*
   James Edward Bell
   Prof. David Nassimi
   CS 241: Foundations of Comp. Sci
   Programming Assign 1: Towers of Hanoi
   */

#include <stdio.h>
#define INPUT_MSG "Please enter number of disks\n> "
#define ERROR_MSG1 "Error: No Disks Entered\n"
#define ERROR_MSG2 "Error: Number of disks too large must be less than 10\n"

void solve_towers(char begin, char end, char temp, int total);

int main(int argc, char **argv)
{
	int input;
	printf(INPUT_MSG);
	scanf("%d", &input);

	if (input == 0)
		printf(ERROR_MSG1);
	else if (input > 10)
		printf(ERROR_MSG2);
	else
		solve_towers('A','B', 'C', input);

	return 0;
}

void solve_towers(char begin, char end, char temp, int total)
{
	if(total == 1)
	{
		printf("Disk 1 from %c to %c \n", begin, end);
	}
	else
	{
		solve_towers(begin, temp, end, (total - 1));
		printf("Disk %d from %c to %c \n", total, begin, end);
		solve_towers(temp, end, begin, (total - 1));
	}
}
