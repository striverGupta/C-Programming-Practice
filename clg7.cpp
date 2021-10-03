// wap that accept 2 numbers,get the option{1,2,3,4}
//from the user and perform the following operation
//(addition,subtraction,multiplication,divide:

#include <stdio.h>
int main() {
    char op;
    float first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f%f", &first, &second);

    switch (op) {
    case '+':
        printf("%.1f + %.1f = %.1f", first, second, first + second);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f", first, second, first - second);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f", first, second, first * second);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
