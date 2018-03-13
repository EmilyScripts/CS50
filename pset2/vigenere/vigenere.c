#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

if (argc != 2) {

    printf("Need a key!\n");
    return 1;
}

string key = argv[1];
int keylength = strlen(key);

for (int i = 0; i < keylength; i++) {

    if (!isalpha (key[i])) {

        printf("Must be alphabetical letters only!\n");
        return 1;
    }

}

string text = get_string("plaintext: ");
printf("ciphertext: ");

if (text == NULL) {
    return 0;
}


for (int i = 0, j = 0; i < strlen(text); i++) {

    int n = key[(j % keylength)];


    if (isupper(text[i])) {

        printf("%c", ((text[i] - 'A' + (n - 'A')) % 26) + 'A');
        j++;
    }

    else if (islower(text[i])) {

        printf("%c", ((text[i] - 'a' + (n - 'a')) % 26) + 'a');
        j++;
    }

    else {

        printf("%c", text[i]);
    }
    }

    printf("\n");
    return 0;
}
