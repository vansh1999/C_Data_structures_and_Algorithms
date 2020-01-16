// String

// The string in c lan is 1D array of characters which is terminated by NULL character '\0'

// to hold nulll char at end,size of char array is one more than char in word

// char string_variable_name [array_size];
//  char string_name[string_length] = "string"; 




// find string is palindrome or not

#include<stdio.h>
#include<string.h>   // header file for string

// int main(){
//     char str[6] = "vanav";   // has to store string in char

//     int start = 0;
//     int len = strlen(str);
//     int end = len - 1;
//     int result = 0;
//     while (start <= end)
//     {
//         if(str[start] != str[end]){
//             result = 1;
//             break;
//         }
//         start++;
//         end--;
//     }
    
//     (result == 0) ? printf("is palindrome") : printf("Not palindrome");
// }



// Rotate a string

int main(){
    char str[12] = "vansh";  // string to be rotated
    char str1[12];
    int length = strlen(str);
    int p;   // new positions of ele after rotating
    int n = 3; // number of times string needs to be rotated


    for(int i = 0 ; i < length ; i++){
             p = ( i + n ) % length;
             str1[p] = str[i];
    }

    str1[length] = '\0';
    
    printf("string after rotating is %s" , str1);

}