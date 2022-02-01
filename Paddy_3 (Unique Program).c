/*
Mr. Venu Mohan is a great and humble educationalist. 
He always encourages students to grow in all aspects. 
In his school he made it as a custom that one who 
gets top position in 9th final examinations hoists the 
flag on August 15th Independence Day and who receives 
second position hoists the flag on 26th Jan, Republic Day.
Following array indicates total marks obtained 
by ‘n’ number of students. 
For simplicity n is considered as 5 in this example. 
‘0’ is present at the end of the array 
indicating end of students total marks.
Example:
totalMarks = [98,91,89,43,90,0]
totalMarks[0] represents total marks obtained by student 0, 
totalMarks[1] represents total marks
obtained by student 1 and so on…
Write a solution to print student id who 
obtained 2nd highest position and hoisting the flag
on 26th Jan, The Republic Day.
*/

/*
Algorithm
---------
1. Read total marks of the students until 'zero' is encountered.
2. Find maximum of the total marks in the array.
3. Find maximum of the total marks in the array 
   excluding the previous maximum value (second maximum).
4. Display position of the second maximum value.
*/

#include<stdio.h>
int main()
{
    int tm[100],i,j,max=0,smax=0,k;
    for(i=0;;i++)
    {
        scanf("%d",&tm[i]);
        if(tm[i]==0)
        {
            break;
        }
        
    }
    for(i=0;;i++)
    {
        
        if(tm[i]==0)
        {
            break;
        }
        if(tm[i]>max)
        {
            max=tm[i];
        }
    }
    
     for(i=0;;i++)
    {
        
        if(tm[i]==0)
        {
            break;
        }
        if(tm[i]!=max&&tm[i]>smax)
        {
            smax=tm[i];
            k=i;
        }
    }
    
    printf("%d",k);
    
}
