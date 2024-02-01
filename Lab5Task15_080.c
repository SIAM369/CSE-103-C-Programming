#include <stdio.h>

int isArmstrong(int num) {
    int orig_num = num, rem, sum = 0, num_digits = 0;
    while (orig_num != 0) {
        num_digits++;
        orig_num /= 10;
    }
    orig_num = num;
    while (orig_num != 0) {
        rem = orig_num % 10;
        sum += pow(rem, num_digits);
        orig_num /= 10;
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}
