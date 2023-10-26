/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

        for(int i = 0; i < strlen(input); i++){    // Iterate through the characters in the input
            if(isalpha(input[i])){       // Check if the character is a letter (A-Z or a-z)  
            //is alpha checks if its the character is part of the alphabet
                int index = toupper(input[i]) - 'A'; //gets index of letter
                letterCount[index]++;       // Increment the corresponding count in the array
        }
     }
 }

    // Display the letter counts
    for(int i = 0; i < 26; i++){ //run for loop 26 times (number of letters in alphabet)
        printf("%c: %d ", 'A' + i, letterCount[i]); //print the character followed by the value its been incremented by
    }

    return 0;

}