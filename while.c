 #include <stdio.h>

// int main () {

//    int i = 0;

//    while( i < 54 );;;;;;;;;;; {
//       printf("%d\n", i);
//       i = i + 1;
//    }
 
//    return 0;
// }
// int main()
// {
//     int i = 4;

//     while(i--);  
//     // here with ;  the output is -1 & without ; the output is 3 2 1 0
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }
int main(){
    float cel,fara;
    printf("Enter temperature in celsius:");
    scanf("%f",&cel);
    fara=(cel*9/5)+32;
    printf("%.2f celsius = %.2f fahrenheit\n ",cel,fara);
    return 0;
    }