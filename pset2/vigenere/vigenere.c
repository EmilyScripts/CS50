#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

//check two arguments are given

if (argc != 2) {

    printf("Need a key!\n");
    return 1;
}

//store key as string and get length of key

string key = argv[1];
int keylength = strlen(key);

//check key is all alphabetical letters

for (int i = 0; i < keylength; i++) {

    if (!isalpha (key[i])) {

        printf("Must be alphabetical letters only!\n");
        return 1;
    }
}

//get text to encode and print ciphertext

string text = get_string("plaintext: ");
printf("ciphertext: ");

//reject if no text is given

if (text == NULL) {
    return 1;
}

//loop through text to change to ciphertext

for (int i = 0, j = 0; i < strlen(text); i++) {

//get letter of key needed, used to loop through key as many times as needed to cipher text

    int n = tolower(key[j % keylength]) - 'a';

//maintain correct case of letter

    if (isupper(text[i])) {

//add key to letter of text and increment key letter index if used

        printf("%c", 'A' + (text[i] - 'A' + n) % 26);
        j++;
    }

    else if (islower(text[i])) {

        printf("%c", 'a' +(text[i] - 'a' + n) % 26);
        j++;
    }

    else {

        printf("%c", text[i]);
    }
    }

    printf("\n");
    return 0;
}
