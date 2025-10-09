// AS 6th financial calculator

#include <stdio.h>

int main(void) {
    float income, rent, utilities, groceries, transportation;
    float rent_percent, utilities_percent, groceries_percent, transportation_percent;
    float savings, savings_percent, spending_money;

    printf("tell me your monthly income: ");
    scanf("%f", &income);
    printf("tell me your rent: ");
    scanf("%f" &rent)
    printf("tell me your monthly groceries: ");
    scanf("%f" &groceries)
    printf("tell me your monthly utilities: ");
    scanf("%f" &utilities)
    printf("tell me your monthly transportation: ");
    scanf("%f" &transportation)

    rent_percent = (rent / income) * 100;
    utilities_percent = (utilities / income) * 100;
    groceries_percent = (groceries / income) * 100;
    transportation_percent = (transportation / income) * 100;
    savings_percent = 10.0;
    savings = (savings_percent / 100) * income;
    spending_money = income - (rent + utilities + groceries + transportation + savings);

    printf("your rent is $%.2f and that is %.0f%% of your income.\n", rent, rent_percent);
    printf("your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, utilities_percent);
    printf("your groceries is $%.2f and that is %.0f%% of your income.\n", groceries, groceries_percent);
    printf("your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, transportation_percent);
    printf("you should save $%.2f a month, that is %.0f%% of your income.\n", savings, savings_percent);
    printf("you have $%.2f of spending money each month.\n", spending_money);

    return 0
}