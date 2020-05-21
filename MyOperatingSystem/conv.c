#include "./include/conv.h"

void memory_copy(char *source, char *dest, int nbytes) {
    int i;
    for (i = 0; i < nbytes; i++) {
        *(dest + i) = *(source + i);             
    }
}

void memory_set(uint8 *dest, uint8 val, uint32 len) {
    uint8 *temp = (uint8 *)dest;
    for ( ; len != 0; len--) *temp++ = val;
}


void int_to_ascii(int n, char str[]) {          
    int i, s;
    if ((s = n) < 0) n = -n;
    i = 0;
    do {
        str[i++] = n % 10 + '0';         
    } while ((n /= 10) > 0);

    if (s < 0) str[i++] = '-';
    str[i] = '\0';

   
    return s;
}
string int_to_string(int n)
{
	string ch = malloc(50);
	int_to_ascii(n,ch);
	int len = strlen(ch);
	int i = 0;
	int j = len - 1;
	while(i<(len/2 + len%2))
	{
		char t = ch[i];
		ch[i] = ch[j];
		ch[j] = t;
		i++;
		j--;
	}
	return ch;
}

int str_to_int(string ch)
{
	int n = 0;
	int m = 1;
	int strlenn = strlen(ch);
	int i;
	for (i = strlenn-1;i>=0;i--)
	{
		n += ((int)(ch[i] - '0')) * m;
		m *= 10;
	}
	return n;
}
void * malloc(int nbytes)
{
	char variable[nbytes];
	return &variable;
}
