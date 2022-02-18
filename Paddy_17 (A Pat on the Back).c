/*
Mrs. Nitya Kulkarni is a faculty teaching C Programming Language. She is tracking the
international rank of every student as given in the competitive coding platforms weekly. In order to
encourage students’ participation, she displays details like Name, Section, CGPA, and
international rank of the student who gets rank less than 2000 in common website.
Assist Nitya Kulkarni in performing this commendable task.
Take the number of students and their details as input. Display all the details of students who
received less than 2000 rank.
Input:
3
Name: Student1
Section: A
CGPA: 7.5
International Rank: 2500
Name: Student2
Section: O
CGPA: 8.0
International Rank: 1900
Name: Student3
Section: D
CGPA: 6.5
International Rank: 1800
Output:
Name: Student2
Section: O
CGPA: 8.0
International Rank: 1900
Name: Student3
Section: D
CGPA: 6.5
International Rank: 1800

Algorithm
---------
1.Construct a structure based on the given data.
2.Take the input on how many students you are taking data.
3.Store the data of each student in an array of the above declared datatype by using for loop.
4.Check the cgpa of each student by using if loop, if the cgpa is less than 2000 print the data of the corresponding student.
*/
#include<stdio.h>
struct student
{
    char n[20];
    char sec;
    float cgpa;
    int ir;
};

int main()
{
    struct student info[50];
    int x,i;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("Name: ");
        scanf("%s",info[i].n);
        printf("Section: ");
        getchar();
        scanf("%c",&info[i].sec);
        printf("CGPA: ");
        scanf("%f",&info[i].cgpa);
        printf("International Rank: ");
        scanf("%d",&info[i].ir);
        
    }
    for(i=0;i<x;i++)
    {
        if(info[i].ir < 2000)
        {
        printf("\nName: %s \n",info[i].n);
        printf("Section: %c \n",info[i].sec);
        printf("CGPA: %.1f \n",info[i].cgpa);
        printf("International Rank: %d \n",info[i].ir);
        }
    }
    return 0;
}
