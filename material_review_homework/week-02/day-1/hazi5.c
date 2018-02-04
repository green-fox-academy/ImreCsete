#include <stdio.h>
#include <stdlib.h>

int calculateBonus(int yearsWorked);

int main()
{

    printf("Bucky gets $%d \n", calculateBonus(14));
    printf("Emma gets $%d \n", calculateBonus(3));

    return 0;
}

int calculateBonus(int yearsWorked){
    int bonus = yearsWorked * 250;

    if(yearsWorked > 10){
        bonus +=1000;
    }

    return bonus;
}
