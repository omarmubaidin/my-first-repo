// compute the sum of a list of example scores
#include<stdio.h>
#define SENTINEL 1

int main()
{
    int sum = 0;  // output - sum of scores input so far
    int score;    // input - current score

    // accumulate sum of all scores
    printf("enter first score (or %d to quit > ", SENTINEL);
    scanf("%d", &score); // get first score

    while(score != SENTINEL)
    {
        sum += score;
        printf("enter next score (or %d to quit > ", SENTINEL);
        scanf("%d", &score); // get next score
    }

    printf("sum of exam scores is: %d\n", sum);

    return 0;
}
