// Array - type of data structure
// array can store fixed size sequential collection of elements of same type.
// <datatype> <var name> <size of array>

// question - write a program to input 10 elements in an array and print in reverse order.
#include<stdio.h>
// int main(){
// // int arr[5] =  {1,2,3,4,5}; // declare array in c
//    int arr[5];
//    int length;
//    length = sizeof(arr);

// for(int i = 1; i <=5; i++){
//        printf("Enter element ");
//        scanf("%d" , &arr[i]);
//    }
      
// for(int i = 5 ; i >= 1 ; i --){
//        printf("elements are -- >%d \n" , arr[i]);
// }

// return 0;

// }


// Multi-dimensional array
// array of arrays
// (row , col)


// printing 2D array

// int main(){

// int arr1[3][3]; 

//   for( int i = 0 ; i < 3; i++){
//       for(int j =0 ; j < 3; j++){
//           printf("Enter elements of array ");
//           scanf("%d" , &arr1[i][j]);
//       }
//   }

//   for( int i = 0 ; i < 3; i++){
//       printf("\n");
//       for(int j =0 ; j < 3; j++){
//           printf("%d" , arr1[i][j]);
          
//       }
//   }

//   return 0;
// }



// Matrix addition


// int main(){

// int a[3][3];
// int b[3][3];
// int res[3][3];
//     // matrix a
// for(int i = 0; i<3; i ++){
//     for(int j=0; j<3 ; j++){
//         printf("elements of a : ");
//         scanf("%d" , &a[i][j]);
//     }
// }

// // matrix b
// for(int i = 0; i<3; i ++){
//     for(int j=0; j<3 ; j++){
//         printf("elements of b : ");
//         scanf("%d" , &b[i][j]);
//     }
// }

// for(int i = 0; i<3; i ++){
//     for(int j=0; j<3 ; j++){
//         res[i][j] = a[i][j] + b[i][j]; 
//         printf("%d \t" , res[i][j]);       
//     }
//     printf("\n");
// }

// 1
// return 0;

// }



// Matrix multiplication 

// #include<stdio.h>    
// #include<stdlib.h>  
// int main(){  
// int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
// system("cls");  
// printf("enter the number of row=");    
// scanf("%d",&r);    
// printf("enter the number of column=");    
// scanf("%d",&c);    
// printf("enter the first matrix element=\n");    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// scanf("%d",&a[i][j]);    
// }    
// }    
// printf("enter the second matrix element=\n");    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// scanf("%d",&b[i][j]);    
// }    
// }    
    
// printf("multiply of the matrix=\n");    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// mul[i][j]=0;    
// for(k=0;k<c;k++)    
// {    
// mul[i][j]+=a[i][k]*b[k][j];    
// }    
// }    
// }    
// //for printing result    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// printf("%d\t",mul[i][j]);    
// }    
// printf("\n");    
// }    
// return 0;  
// }  


// reverse an array


// int main(){
 
//  int a[5] =  {1,2,3,4,5};
//  int b[5];
//  int n = 5;
//  int c,d;


// for(c = n-1 , d = 0 ; c >= 0 ; c-- , d++)
//    b[d] = a[c];


// for(int i = 0 ; i<n; i++)
//    printf("\n %d \n" , b[i]);
// return 0;
// }


