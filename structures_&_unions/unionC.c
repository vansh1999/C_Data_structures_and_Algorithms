// UNION

// c union is like structure , i.e , collection of different data type which are grouped together.
// Each element in a union is called member.

// union allocates one common storage space for all its members. eg if we have flaot and int no diff memory will be stored rather memory of largest member here that is float will be assigned

// We can access only one member of union at a time. because, union allocates one common storage
// space for all its members.

// Many union variables can be created in a program and memory will be alloacted for each union variables
// seperately.


#include<stdio.h>
#include<string.h>

union student
{
    char name[20];
    char subjects[20];
    float percentage;
};


int main(){
    union student record1;
    union student record2;

    strcpy(record1.name , "abc");
    strcpy(record1.subjects , "maths");
    record1.percentage = 39.33;

    strcpy(record2.name , "xyz");
    strcpy(record2.subjects , "english");
    record2.percentage = 89.89;

    printf("\n %s \n" , record1.name);

    return 0;

}




