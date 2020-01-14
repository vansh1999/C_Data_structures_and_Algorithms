// passing array to a function

// 1. pass by value

// int arr[] = {3,23,43,323,8}

// main(){
//     func(arr[4]);    // pass a single value to function
// }

// int func(int number){
//     ......
// }


// 2. pass by reference

// int arr[5] = {1,3,4,4,5}

// main(){
//     funct(arr);   // pass whole arr to function
// }

// int funct(int a[]){
//     for (i = 0 ;;){
//         ......
//     }
// }


// Example of pass by value and pass by reference


#include<stdio.h>

void func1(int val);  // pass by value  -- means you are making a copy in memory of the actual parameter's value that is passed in
void func2(int *ref , int size);  // pass by reference  -- a copy of the address of the actual parameter is stored.      

int main(){
    int arr[5] = {9,8,7,6,5};
    func1(arr[3]);
    func2(arr , 4);
}


void func1(int val){
     printf("Recieved value of fun 1 is %d \n" , val);
}

void func2(int *ref , int size){
    int i = 0;
    for (i = 0 ; i<= size ; i++){
        printf("func 2 is %d \n" , *(ref + i));  // pointers
    }
}





