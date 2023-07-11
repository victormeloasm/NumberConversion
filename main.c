#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function to convert a character to its integer value
int charToInt(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    else if (c >= 'A' && c <= 'Z')
        return c - 'A' + 10;
    else if (c >= 'a' && c <= 'z')
        return c - 'a' + 10;
    else
        return -1; // Invalid character
}

// Function to convert an integer to its character representation
char intToChar(int num) {
    if (num >= 0 && num <= 9)
        return num + '0';
    else if (num >= 10 && num <= 35)
        return num + 'A' - 10;
    else
        return '?'; // Invalid number
}

// Function to convert a number from one base to another
void convertBase(char* number, int sourceBase, int targetBase) {
    int decimalValue = 0;
    int power = 0;
    int length = strlen(number);

    // Convert the number to decimal
    for (int i = length - 1; i >= 0; i--) {
        int digit = charToInt(number[i]);
        if (digit == -1 || digit >= sourceBase) {
            printf("Invalid number or base.\n");
            return;
        }
        decimalValue += digit * pow(sourceBase, power);
        power++;
    }

    // Convert decimal to target base
    char result[32];
    int index = 0;
    while (decimalValue > 0) {
        int remainder = decimalValue % targetBase;
        result[index++] = intToChar(remainder);
        decimalValue /= targetBase;
    }

    // Print the result in reverse order
    printf("Converted number: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");
}

int main() {
    char number[32];
    int sourceBase, targetBase;

    // Read the number and bases from the user
    printf("Enter the number: ");
    scanf("%s", number);
    printf("Enter the source base: ");
    scanf("%d", &sourceBase);
    printf("Enter the target base: ");
    scanf("%d", &targetBase);

    // Convert the number and print the result
    convertBase(number, sourceBase, targetBase);

    return 0;
}
