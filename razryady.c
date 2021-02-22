/*
    M3O-121b-20 Rodin Fedor
*/

#include <stdio.h>

int input_num;

int main() {

    scanf("%i", &input_num);

    printf("%i = ", input_num);

    _Bool isNegative = 0; // Sorry, ya na linux'e. Inache gcc ne daet skompilit'.

    if(input_num < 0) {
        isNegative = 1;
        input_num -= input_num + input_num; // delaem iz otricatel'nogo polojitel'noe takim kostyl'em.
    }

    if(input_num == 0)
        printf("0 \n");

    else {

        int ostatok = 0, n_of_digits = 0;

        while (input_num > 0)
        {
            ostatok = ostatok * 10;

            ostatok += input_num % 10;

            input_num = input_num / 10;  

            n_of_digits++;
        }

        input_num = ostatok;
        int digit;

        if(isNegative == 1)
            printf(" -(");

        while (input_num > 0)
        {
            digit = input_num % 10;

            input_num = input_num / 10;  

            printf("%i * (10^%i)", digit, n_of_digits);

            if (n_of_digits > 1)
                printf(" + ");

            n_of_digits--;
        }

        if(isNegative == 1)
                printf(")");
        
        printf("\n");

    }

    return 0;
}