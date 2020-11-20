// #include <stdio.h>

// int main()
// {
//     int age;
//     printf("Enter you age\n");

//     scanf("%d\n",&age);
//     printf("You have entered %d as your age\n",age);
//     return 0;
// }
#include <stdio.h>

// int main()
// {
//   //variable declaration
//   int i, laptop;
//   //story starts here
//   printf("Once upon a time a customer enters a computer shop and ask to shopkeeper some few questions:\n");
//   //for loop
//   for (i = 0; i < 10; i++)
//   {
//     // printf("%d\n(Type 1 to ask to shopkeeper that Dukandar ji i3 processor with other specification main ek laptop kitne main parega.\nType 2 to ask i5 processor with other specification main ek laptop kitne main parega.\nType 3 to ask i7 processor with dedicated 8 GB of graphics card and other specification main ek laptop kitne main parega.)\n", i);
//     scanf("%d", &laptop);
//     if (laptop == 1)
//     {
//       printf("\nYes sir i3 processor with other specification iski kimat lagbhag aapko 30k main parega.");
//       break;
//     }
//     else if (laptop == 2)
//       {
//         printf("\nYes sir i5 processor with other specification iski kimat lagbhag aapko 50k main parega.");
//         break;
//       }
//     else if (laptop == 3)
//     {
//       printf("\nYes sir this is an expensive machine, i7 processor with dedicated 8 GB graphics card and other specification iski kimat lagbhag aapko 1lakh main parega.");
//       break;
//     }
    
//   }

//   return 0;
// }



int main()
{
    int time;
    printf(" Hy vishal kese ho\n 1.Acha hu mom\n 2.Thik mom\n 3.Sad mom\n");
    scanf("%d", &time);
    if (time == 2)
    {
    printf("Tum se me meri bat nhi kh skti tum sojao beta\n");
    }
    if (time == 3)
    {
        printf ("Tumhari tabiyat thik nhi he beta kam me krlugi tum bs rest kro\nok na\nbeta..");
    }
    else if (3 > 12)
    {
        printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
    }
switch (time)
{
case 1:
    printf("ok\n");
    printf("kya smay ho rha hai Vishal: \n");
    scanf("%d",&time);
    switch (time)
    {
  

       case 1:
       printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
       break;
       case 2:
       printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
       break;
       case 3:
       printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
       break;
       case 5:
       printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
       break;
       case 7:
       printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
       break;
       case 9:
       printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
       break;
       case 10:
       printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
       break;
       case 11:
       printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
       break;
       case 12:
       printf ("tum tumhara kam kro beta\nmere kuch kam hoga to me tumhe boldugi\nok na beta\nab tum jao");
       break;


    case 4:
        printf("Enjoy video game vishal");
        break;
    case 6:
        printf("vishal market jake shaman leke aajana na beta\nsubji bnani hai teri pasand ka kuch bhi liyana beta");
        // break;

        case 8:
        printf("Beta vishal khana kha ke soja na hena");
        break;
    default:
        break;
    }
default:
    break;
}
    return 0;
}