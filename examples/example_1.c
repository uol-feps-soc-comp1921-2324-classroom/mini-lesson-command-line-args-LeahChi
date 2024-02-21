#include <stdio.h>

/**
 * Prints out a simple greeting to the 2 names entered
 */
int main(int argc, char *argv[])
// argv collects all input from the cmd line
{
    if (argc != 3)
    {
        printf("Usage: %s <name1> <name2>\n", argv[0]);
        // gives an example of how to input
        // argv[0] shows the user the file name
        return 0;
    }

    printf("Hello, %s and %s!\n", argv[1], argv[2]);

    return 0;
}
