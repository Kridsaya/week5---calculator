#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

float Sum(float n, float m)
{
    float t;
    t = n + m;
    printf("\nTotal [%.2f + %.2f] = %.2f", n, m, t);
    return n + m;
}

float Sub(float n, float m)
{
    float t;
    t = n - m;
    printf("\nTotal [%.2f - %.2f] = %.2f", n, m, t);
    return n - m;
}

float Mul(float n, float m)
{
    float t;
    t = n * m;
    printf("\nTotal [%.2f * %.2f] = %.2f", n, m, t);
    return n * m;
}

float Div(float n, float m)
{
    float t;
    t = n / m;
    printf("\nTotal [%.2f / %.2f] = %.2f", n, m, t);
    return n / m;
}

int main()
{
    float num1, num2;
    int key;
    printf("Enter number 1: ");
    scanf_s("%f", &num1);
    printf("Enter number 2: ");
    scanf_s("%f", &num2);
    printf("\n 01. Sum");
    printf("\n 02. Sub");
    printf("\n 03. Mul");
    printf("\n 04. Div \n");
    printf("Select : ");
    scanf_s("%d", &key);

    if (key == 1 || key == 01)

        Sum(num1, num2);

    if (key == 2 || key == 02)

        Sub(num1, num2);

    if (key == 3 || key == 03)

        Mul(num1, num2);

    if (key == 4 || key == 04)

        Div(num1, num2);

    return 0;
}