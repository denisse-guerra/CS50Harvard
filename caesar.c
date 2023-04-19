#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
     //check the line command is no more than 2
    if (argc != 2)
    {
        printf("Usage ./caesar key\n");
        return 1;
    }
    printf("Nice!\n");

    //set the key
    string key = argv[1];

    //make sure the input is a digit
    for (int i = 0; strlen(argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage ./caesar key\n");
            return 1;
        }
    }
    printf("Nice\n%s\n", key);

    //ask the user for the plaintext
    string plaintext = get_string("plaintext: ");

    //convert the key to integer
    int k = atoi(key);
    printf("ciphertext: ");

    //Ciphertext
    for (int i = 0; i <strlen(plaintext); i++)
    {
        if(isupper(plaintext[1]))
        {
            printf("%c", (((plaintext[1] - 65) + k) % 26) + 65);
        }

        else if(islower(plaintext[1]))
        {
            printf("%c", (((plaintext[1] - 97) + k) % 26) + 97);
        }

        else
        {
            printf("%c", plaintext[1]);
        }
    }
    printf("/n");
}
