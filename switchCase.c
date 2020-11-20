#include <stdio.h>

// int main()
// {
//     int a = 8 ;
//     float b = 7.333;
//     printf("Hii Geets\n");
//     printf("The value of a is %d\nand The value of b is %f\n", a, b );
//     return 0;
// }
// #include <stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age: ");
    scanf("%d", &age);
    // printf("Enter your marks: ");
    // scanf("%d", &marks);
    switch (age)
    {
    case 12:
        printf("Your age is 12\n");
        printf("Enter your marks: ");
        scanf("%d", &marks);
        switch (marks)
        {
        case 45:
            printf("Your marks is 45\n");
            break;

        default:
            printf("Marks not 45\n");
        }
        break;
    case 25:
        printf("Your age is 25\n");
        break;
    default:
        printf("your age is neither 12 nor 25\n");
    }
    return 0;
}
// #include <stdio.h>

// int main()
// {

//     int calc;
//     printf("it is a calculator\n\n");
//     printf("enter the number n1: \n");
//     printf("enter the number n2: \n");

//     float n1,n2,r;

//     scanf("%d %f",&n1,&n2);
//     printf("enter '1' for sum '+'\nenter '2' for subtration '-'\nenter '3' for product '*'\nenter '4' for divition '/'\n\n");

//     scanf("%d",&calc);

// switch (calc)
// {
//     case 1:
//     r=n1+n2;
//         printf("\n%.2f + %.2f = %.2f\n",n1, n2,r);
//     break;

//     case 2:
//     r=n1-n2;
//         printf("\n%.2f - %.2f = %.2f\n",n1, n2,r);
//     break;

//     case 3:
//    r=n1*n2;
//         printf("\n%.2f * %.2f = %.2f\n",n1, n2,r);
//     break;

//     case 4:
//     r=n1/n2;
//         printf("\n%.2f / %.2f = %.2f\n",n1, n2,r);
//     break;

//     default:
//         printf("your selection is wrong\n");
// }

 //         printf("You have entered your age as 25\n");
//         break;
//     case 56:
//         printf("You have entered your age as 56\n");
//         break;
//     default:
//         printf("You have not entered your age as 12,25,56\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int days;
//     printf("enter the numbers of the day in a week\n");
//     scanf("%d", &days);
//     switch (days)
//     {
//     case 1:
//         printf("Sunday\n");
//         break;
//     case 2:
//         printf("Monday\n");
//         break;
//     case 3:
//         printf("Tuesday\n");
//         break;
//     case 4:
//         printf("Wednesday\n");
//         break;
//     case 5:
//         printf("Thursday\n");
//         break;
//     case 6:
//         printf("Friday\n");
//         break;
//     case 7:
//         printf("Saturday\n");
//         break;
//     default:
//         printf("There are only 7 days in a week\n");
//     }
//     return 0;
// }