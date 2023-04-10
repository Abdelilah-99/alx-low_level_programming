 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>
 /**
  * main - hna had lprojet kaya7ssab lminimum d serf lii yreed
  * @argc: kif l3ada
  * @argv: htta hya
  * Return: 1 if there an error else 0
 */
 int main(int argc, char *argv[])
 {
    int cents, coins;
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
        cents = atoi(argv[1]);
        if (cents < 0)
        {
        printf("0\n");
        return (0);
        }
        coins = 0;
        coins += cents / 25;
        cents %= 25;
        coins += cents / 10; 
        cents %= 10;       
        coins += cents / 5;  
        cents %= 5;         
        coins += cents / 2;  
        cents %= 2;         
        coins += cents;     
            printf("%d\n", coins);
         return (0);
 }