#include <stdio.h>

int main()
{
    // int a;
    // float b;
    // a= 2;
    // b= 0.1;
    // printf("a + b = %f\n",a + b ) ;
    // printf("a - b = %f\n",a - b ) ;
    // printf("a * b = %f\n",a * b ) ;
    // printf("a / b = %f\n",a / b ) ;

    // return 0;

    // int a=3;
    // float b=54;
    // printf("The value of a is %f\n",b);

    // Typecasting syntax
    // (type) value
    // int a=3;
    // float b=54;
    // printf("The value of a is %d\n",(int) b);

    // int a = 3;
    // float b = 54 / 5;
    // printf("The value of a is %f\n", b);
    // result is 10.000000 instead of 10.something because 54 is an integer and 5 is also an integer
    // 2 integer k bich koi bhi arithmetic hota h to result bhi integer hi hota h
    // int X float = float
    // float X float = float
    // int X int = int

    int a = 3;
    float b = (float)54 / 5;
    printf("The value of a is %f\n", b); 
    // result is 10.800000

    return 0;
}
