#include <stdio.h>

void solve_towers(char from, char to, char temp, int n);

int main(int argc, char **argv)
{
	
	return 0;
}

void solve_towers(char from, char to, char temp, int n)
{
	if(n == 1)
	{
		printf("Disk 1 from %c to %c \n", from, to);
	}
	else
	{
		solve_towers(from, temp, to, n-1);
		printf("Disk %d from %c to %c \n", n, from, to);
		solve_towers(temp, to, from, n-1);
	}
}
