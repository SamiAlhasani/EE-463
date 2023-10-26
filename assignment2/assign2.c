 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numDigits(int input);
int isArmstrong(int input);

int main() {
    int num = 0;
    int count = 0;

    while (count < 20) {
        if (isArmstrong(num)) {
            printf("%d is an Armstrong number.\n", num);
            count++;
        }
        num++;
    }

    return 0;
}

int numDigits(int input) {
    int count = 0;
    while (input > 0) {
        count++;
        input = input / 10;
    }
    return count;
}

int isArmstrong(int input) {
    int n = numDigits(input);
    int temp = input;
    int sum = 0;

    while (input != 0) {
        int remainder = input % 10;
        int power = 1;
        int count = n;

        while (count > 0) {
            power *= remainder;
            count--;
        }

        sum += power;
        input = input / 10;
    }

    return (sum == temp);
}
