/*
Calcutor
For PAYE
by  Robert Kiptoo Kimaiyo
Last updated on 15th feb, 2022
C89 compiler
MIT license
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bs, gs, da, hra;

    printf("Enter basic salary\n");
    scanf("%f", &bs);

    if( bs < 10000)
    {
        hra = bs * 15 / 100;
        da = bs * 85 / 100;
    }
    else
    {
        hra = 700;
        da = bs * 97 / 100;
    }
    gs = bs + da + hra;

    printf("Gross Salary is Rs %f\n", gs);
    return 0;
}
