#include<stdio.h>

void main()
{
    int seat_no,koobe,koobe_start,diff;

    printf("Seat no:");
    scanf("%d",&seat_no);
    
    koobe = seat_no/8;
    
    koobe_start = (8*koobe) + 1;
    
    koobe++;
    
    diff = seat_no - koobe_start;
    
    if (diff == 0 || diff == 3 || diff == 6)
    {
        printf("lower");
        
        if (diff == 6)
            printf("*");
    }
    else if (diff == 1 || diff == 4)
        printf("middle");
    else if (diff == 2 || diff == 5 || diff == 7 || diff == -1)
    {
        printf("upper");
        
        if (diff == 7 || diff == -1)
            printf("*");
    }
    
    printf("\n");
}