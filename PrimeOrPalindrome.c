#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit, rev = 0, i, prime = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        rev = rev * 10 + digit; 
        temp /= 10;
    }

    if (sum % 2 == 0) {
      
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d is Prime (sum of digits even).\n", num);
        else
            printf("%d is Not Prime (sum of digits even).\n", num);
    } else {
        
        if (num == rev)
            printf("%d is Palindrome (sum of digits odd).\n", num);
        else
            printf("%d is Not Palindrome (sum of digits odd).\n", num);
    }

    return 0;
}
