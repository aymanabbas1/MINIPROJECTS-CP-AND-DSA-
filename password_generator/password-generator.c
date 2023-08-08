#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int l,n,s,i;
    char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numbers[] = "0123456789";
    char symbols[] = "!@#$%^&*()_+{}[]|:;<>,.?/";
    printf("Welcome to the password generator\n");
    printf("How many letters do you want in your password?\n ");
    scanf("%d",&l);
    printf("How many numbers do you want in your password?\n ");
    scanf("%d",&n);
    printf("How many symbols do you want in your password?\n ");
    scanf("%d",&s);

    srand(time(NULL));

    printf("This is your password as per your requirements\n");
    for ( i = 0; i < l; i++) 
    {
        printf("%c",letters[rand()%(sizeof(letters)-1)]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%c",numbers[rand()%(sizeof(numbers)-1)]);
    }
    for ( i = 0; i < s; i++) 
    {
        printf("%c",symbols[rand()%(sizeof(symbols)-1)]);
    }
    printf("\n");
    


    return 0;
}
