#include <stdio.h>

int main(void)
{
	unsigned int i=0,j=0;
	unsigned int p[50][50];
	for (i = 0; i < 50; i++) {
		for (j = 0; j<= i; j++) {
			if (j == i || j == 0) {
				p[i][j] = 1;
				printf("%u ",p[i][j]);
			}
			else {
				p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
				printf("%u ", p[i][j]);
			}
		}
                printf("     %u raw", i+1);
		printf("\n");
	
	}
	getchar();
	getchar();
    return 0;
}