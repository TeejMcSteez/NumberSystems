#include <stdio.h>

int main() {

    int num;
    int i = 0;
    int remArr[50], finArr[50];

    printf("Please enter a integer to convert to binary: ");
    scanf("%i", &num);

    int total = num;

    while (total != 0) {
        remArr[i] = total % 2;
        total = total / 2;
        i++;
    }

printf("%s %i\n\n", "Integer: ", i);

    for  (int z = i-1; z >= 0; z--) {
        printf("%i", remArr[z]);
    }
    
    
    return 0;
}