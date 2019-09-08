#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int k  = atoi(argv[1]);
    if (k < 0)
    {
        printf("Key must be a positive number\n");
    }

    
    string plaintext = get_string("Plaintext: ");
    printf("ciphertext: ");
    for (int i =0, len = strlen(plaintext); i <len; i++)
    {
        if (islower (plaintext[i]))
            printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a' );
        else if (isupper(plaintext[i]))
             printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A' );
        else
            printf("%c", plaintext[i]);
    }
    printf("\n");
}
