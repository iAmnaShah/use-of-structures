#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[15];
    float marks1, marks2, marks3;
};
int main()
{
    struct student data;
    float total, avg;
    printf("Enter name of Student:");
    scanf("%s",data.name);
    printf("Enter Roll no:");
    scanf("%d",&data.rollno);
    printf("Enter marks of English:");
    scanf("%f",&data.marks1);
    printf("Enter marks of Urdu:");
    scanf("%f",&data.marks2);
    printf("Enter marks of Maths:");
    scanf("%f",&data.marks3);
    total = data.marks1 + data.marks2 + data.marks3;
    avg = total / 3;
    printf("Total = %.1f\n", total);
    printf("Average = %.1f", avg);
    return 0;
}
