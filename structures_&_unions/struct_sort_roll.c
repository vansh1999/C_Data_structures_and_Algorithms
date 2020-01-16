// Make a structure(of students containg name and roll number) .
// arrange the list in higest roll number on top to bottom

#include<stdio.h>

struct student{
    char name[10];
    int roll;
}s[3] , t;


int main(){
    
    int max = 3;
    // int t;
    for(int i = 0 ; i < max; i++){
        printf("enter name ");
        scanf("%s" , &s[i].name);
        printf("enter roll ");
        scanf("%d" , &s[i].roll);
    }
    
    
    for(int i  = 0 ; i < max; i++ ){
        for(int j = 0 ; j < max-1 ; j++){
            if(s[j].roll < s[j+1].roll){
                t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }
        
    }
    
    
    for(int i =0 ; i < max ; i++){
        printf("%s | %d" , s[i].name , s[i].roll);
        printf("\n");
    }
}

