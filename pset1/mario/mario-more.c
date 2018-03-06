#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    //prompt user for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    //executes the code 'height' times
    for (int i = 0; i < height; i++)
    {

    //calculate number of hashes and spaces

        //print spaces
        for (int numberOfSpaces = height - i; numberOfSpaces > 1; numberOfSpaces--) {
            printf(" ");
        }

        // print hashes, count from index of zero
        for (int numberOfHashes = 0; numberOfHashes < i + 1; numberOfHashes++) {
            printf("#");
        }

        printf("  ");

        for (int numberOfHashes = 0; numberOfHashes < i + 1; numberOfHashes++) {
            printf("#");
        }
        printf("\n");
    }
}
