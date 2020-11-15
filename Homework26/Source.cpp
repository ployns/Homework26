#include<stdio.h>
#include<conio.h>

void Multiply(double* num1, double* num2)
{
    double answer;
    answer = *num1 * *num2;
    printf("\n%.2lf", answer);
}

void Average(double* num1, double* num2)
{
    double answer;
    answer = (*num1 + *num2)/2;
    printf("\n%.2lf", answer);
}

int main()
{
    double num[2];
    int choose;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter number : ");
        scanf_s("%lf", &num[i]);
    }
    printf("\n1.Multiply\n2.Average\n");

    printf("Select : ");
    scanf_s("%d", &choose);

    if (&num[0] != NULL || &num[1] != NULL)
    {
        if (choose == 1)
            Multiply(&num[0], &num[1]);
        else if (choose == 2)
            Average(&num[0], &num[1]);
        else {
            printf("Error");
        }
    }
    else
    {
        printf("Error");
    }

    return 0;
}