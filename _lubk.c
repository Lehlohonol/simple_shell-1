#include <stdio.h>
#include <stdlib.h>

/*
 * creating a function that explains the
 * names of participant and their scores
 */

int main(void)
{
	int num1
	float score1;
	double score2;

	printf("Position: ");
	scanf("%d", &num1);
	printf("Engeneering score: ");
	scanf("%f", &score1);
	printf("Medical score: ");
	scanf("%lf", &score2);

	printf("num1 = %d; score1 = %f; score2 = %lf\n", num1, score1, score2);

	return (0);
}
