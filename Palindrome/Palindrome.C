#include <stdio.h>

int main() {
    int num, original_num, reverse = 0, last_digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (num > 0) {
        last_digit = num % 10;
        reverse = reverse * 10 + last_digit;
        num = num / 10;
    }

    if (original_num == reverse) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}