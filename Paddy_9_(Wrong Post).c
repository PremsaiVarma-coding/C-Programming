/*
1st year students recently completed their summative assessment II. 
Their marks are displayed on Dash Board. 
It is observed that ith student’s marks are posted to 
jth student and viceversa.
Below example shows marks of ‘n’ students for ‘m’ subjects. 
Rows indicate subjects, columns indicate students.
studentMarks[5][5] =
32 		24 		65 		42 		23
18 		92 		89 		96 		90
34 		35 		36 		37 		38
40 		32 		90.5 		91.5 		83
83.5 		78.3 		90.5 		98.5 		72.5
studentMarks[0][0] represents marks of subject#0 for the studentt#0. 
studentMarks[4][3]represents marks of subject#4 for student#3
In the above example 2nd student marks are 
wrongly posted to 4th student and viveversa.
Input
4 6
11 12 13 14 15 16
21 22 23 24 25 26
31 32 33 34 35 36
41 42 43 44 45 46
0 5
Output:
16 12 13 14 15 11
26 22 23 24 25 21
36 32 33 34 35 31
46 42 43 44 45 41
*/

/*
Algorithm
---------
1. Read the number of rows and columns.
2. Read marks of the students.
3. Read the student IDs whose marks are displayed wrong.
4. Swap the marks of the above student IDs.
5. Display the marks after the correction.
*/
#include<stdio.h>

int main()
{   float matrix[10][10],temp;
    int i,j,rows,col,x,y;
    scanf("%d %d",&rows,&col);
    for(i=0;i<rows;i++)
    for(j=0;j<col;j++)
    scanf("%f",&matrix[i][j]);
    
    for(i=0;i<rows;i++)
    {
      for(j=0;j<col;j++)
      {
      printf("%.0f ",matrix[i][j]); 
    
      } 
      printf("\n");
      
    }
    
   
    scanf("%d %d",&x,&y);
    
    for(i=0;i<rows;i++)
    {
       temp=matrix[i][x];
       matrix[i][x]=matrix[i][y];
       matrix[i][y]=temp;
    }
    
    
    
    for(i=0;i<rows;i++)
    {
    for(j=0;j<col;j++)
    {
    printf("%.0f ",matrix[i][j]);
    }
    printf("\n");
        
    }
    
    return 0;
    
    
}
