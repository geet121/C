#include <stdio.h>
// do while - it will execute atleast once
int main()
{
    //     int num, i = 0;
    //     printf("Enter a number\n");
    //     scanf("%d", &num);

    //     do
    //     {
    //         printf("%d\n", i + 3);
    //         i = i + 1;
    //     } while (i < num);

    // int a, b = 0;
    // printf("Enter a number\n");
    // scanf("%d", &a);

    // do
    // {
    //     printf("%d\n", b+5);
    //     b = b + 1;
    // } while (b < a);

    //     return 0;

    
    
    //while loop
    
    // ye ho gya
    // int main () {

    // int i = 1;

    // while (i < 54)
    // {
    //     printf("%d\n", i);
    //     i = i + 3;
    // }

    // return 0;
// }

// int main()
// {
//     int i = 4;

//     while(i--)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }


// for loop

//   int j,i;
//   for (i = 0,j =0; i < 5; i++)
//   {
//       printf("%d_%d",i,j);
//   }
//   return 0;
// }
//   int i,j=0;
//   for (i=0;i<5; i++,j++)
//   {
//       printf("%d_%d\n",i,j);
      
//   }
//   return 0;
// }
// same output
//   int i,j=0;
//   for (i=0;i<5 ;)
//   {
//       printf("%d_%d\n",i,j);
//       i++,j++;
//   }
//   return 0;
//
 
//    printf("Hey ya!\n");
//   int i,age;
//   for(i=0;i<10;i++){
     
//     printf("%d\nEnter your age: ",i);
//     // printf("Enter your age: \n",age);
//     scanf("%d",&age);
//     if(age>10){
//       break;
//     }
//   }
//   return 0;
//  }
int i,num;
  for (i = 0; i < 10; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 2; j++)
        {
          printf("enter the number.enter 0 to exit: \n");
          scanf("%d",&num);
          if(num==0){
            goto end  ;
          }
        }
        
      }
      end:

      return 0;
}
