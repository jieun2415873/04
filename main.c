#include <stdio.h>

int main (void)
{
    int total_sec;

    printf("input the second : ");
    scanf("%d", &total_sec);

    printf("the time is %d : %d\n", total_sec/60, total_sec%60);

    return 0;
    
}