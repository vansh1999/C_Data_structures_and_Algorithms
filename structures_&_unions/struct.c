// structures vs array
// struct - user-defined data type in C
/* 
The difference between struct and array is that array is used to store collection of similar data type
while structure can store collection of any data type.

*/

// its best practice to initalize a structure to null while declaring,if we don't assign any values to structure members.

/*

struct struct_name{
    data type var_name1;
    data type var_name2;
    data type var_name3;
};

*/

// example

/*
struct  student{
    int marks;
    char name[10];
    float average;
}

struct student report;  <----- structure variable for students
*/




/*

struct student report,*rep;
  report = {100 , 'avi' , 99.5};
  rep = &report;

Accessing using normal variable

  report.mark
  report.name
  report.average

Accessing using pointer variables

  rep-> marks
  rep-> name
  rep-> average

*/




// build a struct,make var and print values;

#include<stdio.h>
#include<string.h>

// struct student
// {
//     int id;
//     char name[20];
//     float percentage;
// };


// int main(){
//   struct student record[2];

//   record[0].id = 1;
//   strcpy(record[0].name , "abc");
//   record[0].percentage = 20.10;

//   record[1].id = 2;
//   strcpy(record[1].name , "xyz");
//   record[1].percentage = 90.10;

//   printf("\n %d  " , record[0].id);
//   printf("%s \n" , record[0].name);

//   printf("\n %d  " , record[1].id);
//   printf("%s \n" , record[1].name);

//   return 0;
// }






// passing structure structure

/*
struct student
{
    int id;
    char name[20];
    float percentage;
};

void func(struct student record);

int main(){
    struct student record;
    record.id = 1;
    strcpy(record.name,"abc");
    record.percentage = 20.7;
    func(record);
}

void func(struct student record){
    printf("%d \n" , record.id);
    printf("%s \n" , record.name);
    printf("%f \n" , record.percentage);
}

*/


// typedef  

// typedef is a keyword used to assign alternative name to existing type. It is used 
// with user defined types,when names of data type get slightly complicated.

// type def is also used to give alias name to pointer.



typedef struct employee{
     char name[50];
     int salary;
}emp;   // emp - > struct employee


void main(){
  emp e1;  // alias,emp is used for stucture employee
  printf("\n Enter employee record \n");

  printf("\n Enter employee name \t");
  scanf("%s" , &e1.name);

  printf("\n Enter employee salary \t");
  scanf("%d" , &e1.salary);

  printf("\n student name is %s " , e1.name);
  printf("\n salary is %d" , e1.salary);

}
