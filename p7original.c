#include <stdio.h>

typedef struct Complex
{
    float real;
    float Imaginary;
}Complex;

Complex input()
{
    Complex c;
    printf("enter the Real part: ");
    scanf("%f", &c.real);
    printf("enter the Imaginary part: ");
    scanf("%f", &c.Imaginary);
    return c;
}

Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.Imaginary = a.Imaginary + b.Imaginary;
    return sum;
}

void output(Complex a,Complex b,Complex sum)
{
 printf("The sum of %0.1f + %0.1fi and %0.1f + %0.1fi is %0.1f + %0.1fi\n",a.real,a.Imaginary,b.real,b.Imaginary,sum.real,sum.Imaginary);
}

int main()
{
    Complex c1, c2, sum;
    c1= input();
    c2= input();
    sum = add(c1,c2);
    output(c1,c2,sum);
    return 0;
}