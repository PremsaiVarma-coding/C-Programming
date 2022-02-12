/*
The academic committee has decided to organize the 
remedial classes for those below the class average.
Being a C Programmer, assist the academic committee in generating 
the list of students who need to attend the remedial classes.
(Consider two sections, two students each section 
and three subjects each student is having)
Section 1:
20 32 45
78 12 25
Student 1 average 32.3
Student 2 average 38.3
Section 1 class average = 35.3
Section 2:
42 65 89
90 89 90
Student 1 average 65.3
Student 2 average 89.6
Section 2 class average = 77.45
Students who need to attend Remedial classes:
Section 1 Student 1
Section 2 student 1
*/

/*
Algorithm
---------
1. Read number of sections, students and subjects.
2. Read student marks per subject.
3. Find student and class averages.
4. If student average is less than class average, 
   display section and student ID.
*/

#include <stdio.h>

int main(){
	int arr[10][10][10],i,j,k,m,n,o;
	float stsum[10][10],clsum[50];
	
	printf("Enter number of sections, students, and subjects :\n");
	scanf("%d%d%d",&m,&n,&o);
	
	printf("Enter marks:\n");
	for (i=0;i<m;i++)
	for (j=0;j<n;j++)
	for (k=0;k<o;k++)
	scanf("%d",&arr[i][j][k]);
	
	for (i=0;i<m;i++){
		clsum[i]=0;
		for (j=0;j<n;j++){
			stsum[i][j]=0;
			for (k=0;k<o;k++)
			stsum[i][j]+=arr[i][j][k];
			clsum[i]+=stsum[i][j];
		}
	}
	
	printf("List of students who require remedial classes:\n");
	
	for (i=0;i<m;i++)
	for (j=0;j<n;j++)
	if (clsum[i]/(n*o)>stsum[i][j]/o)
	printf("Section %d  Student %d\n",i+1,j+1);
	
	return 0;
}
