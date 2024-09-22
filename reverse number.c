#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    printf("Reverse of the number: %d\n", reversedNum);

    return 0;
}
