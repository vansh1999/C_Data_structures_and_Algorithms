#include<stdio.h>

// taking inputs in c and printing them
// float a ; int b;
// int main(){
// scanf("%f%d" , &a , &b);
// printf("you entered %f and %d \n" , a,b);
// } 

// & tells system where to store the value of input.it provide address for variable.





// Decision control structure

// when we want to set instruction in one situatin and entirely different set 
// in another situatin - if,if-else,nested if-else,conditional

// if else

// int main(){
// int num;
// printf("enter a num ");
// scanf("%d" , &num);

// if(num%2 == 0){
//     printf("numis evn");
// }
// else if (num % 2 != 0)
// {
//     printf("num is odd");
// }

// else
// {
//   printf("enter valid input")  ;
// }

// return 0;

// }

// Conditional operator

// Ternery operator
// condition ? statement-1 (T): statement-2 (F)
// a<b ? printf("a is less") : printf("a is greater");


// find largest of three numbers

// int main(){
//     int a,b,c,large;
//     a=100,b=3,c=15;

//     large = ((a>b)&&(a>c) ? a: ((b>c) ? b:c));
//     printf("largest number is %d" , large);
//     return 0;
// }



// Loop control structure
// when want to repeat certain times
// in for we know how many time, but in while we don't know, so we pass in while condition, in do is first we do and then check while condition.
// for, while, do while


// int main(){
//     int i = 1;

//     do{
//         printf("value of i is %d \n" , i);
//         i++;
//     }while (i>=2 && i<=5 );
       
      
// }





// Case control structure

// switch,break,continue,goto


// Switch case control

// switch case control is substitude for nested if statement
// syntax
// 
// switch(statement)
// {
// case1 : statement ;
// break;
// 
// case2 : statement ;
// break;
// default : statement;
// break;
// }


// break -  break statement is used to terminate while loop.


// continue - just skips that statement and go to next automatically

// int main(){
//     int i;
//     for(i=0;i<10; i++){

//         if(i == 5 || i == 6){
             
//             //printf("skipping value of %d \n" , i);
//             continue;
//         }

//        printf("%d \n " , i);
//     }
    
// }

// output - 
// 0 
//  1 
//  2 
//  3 
//  4 
// // skipping value of 5 
// //skipping value of 6 
// 7 
//  8 
//  9 


// pass -  there is no pass in c 

// goto - is used to transfer the control of program to the specified label in program.

// syntax

// Label:
// statement;
// {
//     goto Label
// }


// int main(){
//     int i;
//     for (i =0 ; i < 10 ; i++){
//         if(i==3){
//                 printf(" goto statement when i =3 %d \n" , i);
//                 goto Label1;
//         }
//         printf("value is %d \n" , i );
//     }
//     Label1 : printf("goto value of i is %d \n" , i);
// }

