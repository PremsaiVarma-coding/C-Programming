/*
1st Year Computer Science students of GITAM University 
participated in a Coding Hackathon.
Rating between 1 to 10 gets allocated to students based 
on the originality of the code, correctness, and efficiency.
Generate a section-wise report which shows 
how many students in each section got a rating more
excellent than or equal to 8.
Section A students data:
S1 8
S2 9
S3 10
S4 6
Section B students data:
S1 10
S2 5
S3 9
S4 7
From the above data, we can say that three students 
from section A and two from Sec B have a
rating greater than or equal to 8.
Input:
2 4 1
8
9
10
6
10
5
9
7
Output:
0 3
1 2
*/

/*
Algorithm
---------
1. Read number of sections, students and rating.
2. Read student ratings.
3. Display the number of students having 
   rating greater than or equal to 8 section wise.
*/
#include<stdio.h>
int main()
{
    int report[10][10][10],x,y,z,i,j,k,count1=0;
    scanf("%d%d%d",&x,&y,&z);
    for(i=0;i<x;i++)
    {
    for(j=0;j<y;j++)
    {
    for(k=0;k<z;k++)
    {
        scanf("%d",&report[i][j][k]);
    }
    }
    }
    
    for(i=0;i<x;i++)
    {
    for(j=0;j<y;j++)
    {
    for(k=0;k<z;k++)
    {
        if(report[i][j][k]>=8)
        count1++;
        
    }
   
    }
    printf("%d %d",i,count1);
    count1=0;
    
    printf("\n");
    }
    return 0;
    
}
