#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tom, Mark and Jerry went to the supermarket
//help them decide what can they buy out of their money

int tom_money = 2000;
int mark_money = 3500;
int jerry_money = 1200;
/*int all_money = tom_money + mark_money + jerry_money;*/

int can_they_buy_a_new_tv()
{
    int tv_price = 6950;
    int all_money = tom_money + mark_money + jerry_money;

    //if they can, the program should write out that how much
    //money they have after they bought the tv
    //if they can't tell, how much money they need to buy it

    int remainder_tv = all_money - tv_price;

    return remainder_tv;


}

int can_they_make_a_cake()
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;
    int cake_cost = milk + chocolate + flour + egg + sugar + salt + oven_shape + cream;
    int all_money = tom_money + mark_money + jerry_money;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally

    int remainder_cake = all_money - cake_cost;

    return remainder_cake;
}

int can_they_make_ham_and_eggs()
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;
    int ham_and_egg_cost = milk + egg + salt + ham + onion + spice;
    int all_money = tom_money + mark_money + jerry_money;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally

    int remainder_ham_and_eggs = all_money - ham_and_egg_cost;

    return remainder_ham_and_eggs;
}

//is there any local or global variables we did not use well?
//are we using functions correctly?

int main()
{
    int all_money = tom_money + mark_money + jerry_money;

    if (can_they_buy_a_new_tv() >= 0){
        printf("Yes, they can buy a new TV and they will have %d money left.\n", can_they_buy_a_new_tv());
    } else {
        printf("No, they can't buy a new TV, they need %d more money.\n", can_they_buy_a_new_tv() * -1);
    }

    if (can_they_make_a_cake() >= 0){
        printf("Yes, they can make a cake and they should each pay %d for it.\n", can_they_make_a_cake() / 3);
    } else {
        printf("No, they can't make a cake, they need %d more money.\n", can_they_buy_a_new_tv() * -1);
    }

    if (can_they_make_ham_and_eggs() >= 0){
        printf("Yes, they can make ham and eggs and they should each pay %d for it.\n", can_they_make_ham_and_eggs() / 3);
    } else {
        printf("No, they can't make ham and eggs, they need %d more money.\n", can_they_make_ham_and_eggs() * -1);
    }

	return 0;

}
