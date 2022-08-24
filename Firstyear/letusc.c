// // enter temperature in farenheit and output in degree celsius
// #include<stdio.h>

// int main()
// {
//     //int f;
//     float c,f;
//     printf("Enter the temperature in fareinheit:");
//     scanf("%f",&f);
//     //f=c*9/5 + 32
//     c=(f-32)*5/9;
//     printf("The entered temp in degree celsius is: %f ",c);
//    // return 0;
// }


// // accept length,breadth print area of rectangle ,accept radius print area and circumference

// #include<stdio.h>
// //#include<conio.h>
// #include<stdlib.h>
// #include<math.h>

// int main()
// {
//     int s1,s2;
//     float l,b,r,ar,ac,cc,cr;
//     input:
//     printf("\nPlease specify the shape:\n 1.Rectangle \n 2.Circle \n 3.Exit \n");
//     scanf("%d",&s1);

//     switch(s1)
//     {
//         case 1:
//             printf("\nEnter the length:");
//             scanf("%f",&l);
//             printf("\nEnter the breadth:");
//             scanf("%f",&b);
//             ar=l*b;
//             cr=2*(l+b);
//             printf("\nAREA OF RECTANGLE = %f \nCIRCUMFERENCE OF RECTANGLE= %f \n ",ar,cr);
//             goto input;
//         break;    

//         case 2:
//             printf("Enter the radius:");
//             scanf("%f",&r);
//             cc=r*2*3.14;
//             ac=r*r*3.14;
//             printf("THE AREA OF CIRCLE IS= %f \nCircumference is =%f \n ",ac,cc);
//             goto input;
//         break;
//         // goto input; <- not correct!

//         case 3:
//             exit(0);
//         break;
//     }


    
// }


