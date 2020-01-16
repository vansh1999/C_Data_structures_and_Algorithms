
#include <stdio.h>



int main()
{
   char strng[10];
   int length =0;
   
   printf("Enter String : ");
   gets(strng);
   printf("Length of string is : %d" , string_len(strng , length));
   
   return 0;
   
}


int string_len(char strng[] , int length){
    if(strng[length] == '\0')
        return length;
    length++;
    return string_len(strng , length);
    
}
    



