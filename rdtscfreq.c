/*
 *	Returns CPU frequency
 *	Author: Nikolay Aleksandrov <razor@blackwall.org> 2007
 */
#include <stdio.h>

unsigned long long rdtsc()
{
	unsigned low_end, high_end;
	unsigned long long result;

	__asm__("rdtsc\r\n" : "=d" (high_end), "=a" (low_end));

	result = high_end;
	result = (result<<32) | low_end;

	return	result;
}

int main(int argc, char **argv)
{
	unsigned long long start,end;

	start = rdtsc();
	sleep(1);
	end = rdtsc();

	printf("CPU MHz: %u\n", (end-start)/1000000);

	return	0;
}
