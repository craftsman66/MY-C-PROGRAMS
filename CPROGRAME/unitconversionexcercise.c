#include <stdio.h>
int main()
{
    int a;
    float b, c, d, e, f, g, h, i, j, k;
    printf("1) Kilometer to Miles \n");
    printf("2) Centimeter to Inches \n");
    printf("3) Inches to Feet \n");
    printf("4) Pounds to Kilogrmss \n");
    printf("5) Inches to Meters \n");
    printf("***Choose the number according to your required conversion*** \n");
    printf("Enter the required number:  \n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Enter the value that you want to convert: \n ");
        scanf("%f", &b);
        c = b * 0.62137;
        printf("The %f Kilometer is %f in Miles \n", b, c);
        break;

    case 2:
        printf("Enter the value that you want to convert: \n ");
        scanf("%f", &d);
        e = d * 0.393701;
        printf("The %f Centimeter is %f in Inches \n", d, e);
        break;

    case 3:
        printf("Enter the value that you want to convert: \n ");
        scanf("%f", &f);
        g = f * 0.0833333333;
        printf("The %f Inches is %f in Feet \n", f, g);
        break;

    case 4:
        printf("Enter the value that you want to convert: \n ");
        scanf("%f", &h);
        i = h * 0.454;
        printf("The %f Pounds is %f in Kilograms \n", h, i);
        break;

    case 5:
        printf("Enter the value that you want to convert: \n ");
        scanf("%f", &j);
        k = j * 0.0254;
        printf("The %f Inches is %f in Meters \n", j, k);
        break;
    }

    return 0;
}