#include<stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;



typedef struct
{
    char name[20];
    Date dob;
    Date enroll;
    int n;
} Student;



int main()
{
    Student s;
    printf("Enter name: ");
    gets(s.name);
    fflush(stdin);
    
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);
    
    scanf("%d %d %d", &s.enroll.day, &s.enroll.month, &s.enroll.year);
    
    scanf("%d", &s.n);
    printf("Name: %s\n", s.name);
    printf("DOB: %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);
    printf("Enrollment Date: %d/%d/%d\n", s.enroll.day, s.enroll.month, s.enroll.year);
    printf("Number of subjects: %d\n", s.n);
    return 0;
}