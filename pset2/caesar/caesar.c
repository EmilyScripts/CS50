#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

//argc needs to equal 2, ./caesar + a number
if (argc != 2) {

    printf("Need a key!\n");
    return 1;
}

//atoi to turn char number into an int
int key = atoi(argv[1]);


string text = get_string("plaintext: ");
printf("ciphertext: ");

if (text == NULL) {
    return 0;
}

//comma as declaring i and j at same time
for (int i = 0, j = strlen(text); i < j; i++) {

    if (isupper(text[i])) {

        //'A' allows you to treat A as an interger
        printf("%c", 'A' + (text[i] - 'A' + key) % 26);
    }

    else if (islower(text[i])) {

        printf("%c", 'a' + (text[i] - 'a' + key) % 26);
    }

    else {

        printf("%c", text[i]);
    }
    }

    printf("\n");
    return 0;
}
