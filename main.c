#include <stdio.h>

int main (int argc, char *argv[])
{   
    int sec;

    printf("input the second : ");
    scanf("%d", &sec);

    printf("The time for %d second is %d : %d : %d\n", sec, sec/3600, (sec%3600)/60, sec%60);
    
    return 0;
    
}