/* CONVERT RADIAN TO DEGREE
      ___      .__   __.   _______      ___       _______  
     /   \     |  \ |  |  /  _____|    /   \     |       \ 
    /  ^  \    |   \|  | |  |  __     /  ^  \    |  .--.  |
   /  /_\  \   |  . `  | |  | |_ |   /  /_\  \   |  |  |  |
  /  _____  \  |  |\   | |  |__| |  /  _____  \  |  '--'  |
 /__/     \__\ |__| \__|  \______| /__/     \__\ |_______/                                                         */

#include <stdio.h>
#include <math.h>
void printline();

int main()
{
    float radian;
    float degree;

    printf("Enter your degree --> ");
    scanf("%f", &degree);

    radian = degree * (M_PI / 180.0);
    printf("\nMade by Angad:) \n\n");
    printline();
    printf("\nYour radian is %.5f\n", radian);
    printline();
    return 0;
}
void printline()
{
    int i;
    for (i = 1; i <= 22; i++)
    {
        printf("*");
    }
}