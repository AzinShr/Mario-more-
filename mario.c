#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for height (between 1 and 8)
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Loop through each row
    for (int i = 1; i <= height; i++)
    {
        // Print leading spaces (single space instead of double)
        for (int j = 0; j < height - i; j++)
        {
            printf(" "); // Changed from "  " to " "
        }

        // Print left side of the pyramid
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Print the gap between the two sides
        printf("  ");

        // Print right side of the pyramid
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
