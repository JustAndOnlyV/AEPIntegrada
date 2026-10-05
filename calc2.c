#include <stdio.h>

int value1, value2, value3, operation;

int main(int argc, int **argv){
    printf("Insert first value ");
    scanf("%d", &value1);

    printf("Insert second value ");
    scanf("%d", &value2);

    printf("Select operation \n1 - Add\n2 - Subtract\nType the number of the operation: ");
    scanf("%d", &operation);

    if (operation > 2 || operation < 1) {
        printf("Invalid Option");
        return 1;
    }

    if (!value1 && !value2) {
        printf("Invalid Option");
        return 2;
    }

    switch (operation) {
    case 1:
        value3 = value1 + value2;
        break;
    case 2:
        value3 = value1 - value2;
        break;
    default:
        value3 = 0;
        break;
    }

    printf("Operation result: %d", value3);
    return 0;
}
