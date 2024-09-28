//Made by Tommy Hall to practice binary and hexadecimal conversions for class
#include <stdio.h>

const int MAX_INT_SIZE = 2147483647;

#define ARR_SIZE 75

void toBinary(int num) {
    int total = num, i = 0;
    int remArr[ARR_SIZE];

    if (total >= MAX_INT_SIZE) {
        int total2 = total / 2;
        total = total / 2;
        printf("!\n!!\n!!!Max for Hexadecimal Value/Binary Incorrect Output!!!\n!!\n!\n");
        //TODO: Fix this, It doesnt work as it still overflows into memory. Maybe different input options? or some universal way? Research it . . .
        while (total != 0) {
            remArr[i] = total % 2;
            total = total / 2;
            i++;
        }
        while (total != 0) {
            remArr[i] = total2 % 2;
            total2 = total2 / 2;
            i++;
        }

    } else {
        while (total != 0) {
            remArr[i] = total % 2;
            total = total / 2;
            i++;
        }
    }

    printf("Integer in Binary:\n0b");
    for  (int z = i-1; z >= 0; z--) {
        printf("%i", remArr[z]);
    }
}

void toHex(int num) {
    int total = num, i = 0;

    int remArr[ARR_SIZE];
    char finArr[ARR_SIZE];

    if (total >= MAX_INT_SIZE) {
        printf("!\n!!\n!!!Max for Hexadecimal Value/Binary Incorrect Output!!!\n!!\n!\n");

    }
    
    while (total != 0) {
        remArr[i] = total % 16;
        total = total / 16;
        i++;
    }

    printf("Integer in Hexadecimal:\n0x");
    for  (int z = i-1; z >= 0; z--) {
        if (remArr[z] > 9 && remArr[z] < 16) {
            switch (remArr[z]) {
                case 10:
                    printf("A");
                    break;
                case 11:
                    printf("B");
                    break;
                case 12:
                    printf("C");
                    break;
                case 13: 
                    printf("D");
                    break;
                case 14: 
                    printf("E");
                    break;
                case 15:
                    printf("F");
                    break;
                
                default:
                    printf("%i", remArr[z]);
                    break;
            }
            
        } else {
            printf("%i", remArr[z]);
        }
    }

}

int main() {
    int num, choice;

    while (choice != -1) {
        printf("\n**************************************\nWelcome to the Integer Converter!\n**************************************\n");

        printf("Please enter the integer you would like to convert (or any number to exit): ");
        scanf("%i", &num);

        printf("Enter 1 to binary, Enter 2 to hexadecimal, or -1 to Exit: ");
        scanf("%i", &choice);

        if (choice == -1) {
            printf("Goodbye!");
            break;
        } else if (choice == 1) {
            toBinary(num);
        } else if ( choice == 2) {
            toHex(num);
        } else {
            printf("Error Invalid Input, Press re-enter\n");
        }
    }
    
    return 0;
}