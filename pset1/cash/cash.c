#include <stdio.h>
#include <cs50.h>
#include <float.h>
#include <math.h>

int main(void)
{
float change;

//prompt user for their amount of change
do
{
    change = get_float("How much change is owed?\n");
}
while (change <= 0.00);

//mulitply change by 100 before round to not lose decimal places
int cents = 0;
cents =((int)round(change * 100));

int counter = 0;

//-= is a subtraction assignment for cents
while (cents >= 25) {
    counter++;
    cents -= 25;
}
while (cents >= 10) {
    counter++;
    cents -= 10;
}
while (cents >= 5) {
    counter++;
    cents -= 5;
}
while (cents >= 1) {
    counter++;
    cents -= 1;
}
//%i used as placeholder for counters tally
printf("Coins returned is %i\n", counter);
}
