#include<stdio.h>
#include<math.h>


int main() {

    double num1;
    char op;
    double num2;
    double result = 0;
    printf("Enter First number:");
    scanf("%lf", &num1);
    printf("Enter operator:");
    scanf(" %c", &op);
    printf("Enter Second number:");
    scanf("%lf", &num2);

    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '/') {
        result = num1 / num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else {
        printf("ERROR");
    }
    printf("result: %lf", result);
    return result;
}