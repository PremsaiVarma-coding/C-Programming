/*
Mrs. Rama Lakshmi is Social teacher in Little Angel’s school. 
She is well known for planning innovative games for first 5 mins 
to make students energized and attentive before she starts her class.
One day she asked to students to do the following.
There are some blue chairs and some black chairs. 
Teacher says which colour chair to start with and in 
how many rows and how many columns they need to be seated.
Now student should quickly pick up a chair of 
the colour as stated by teacher and occupy 1st row 1st position,
now another student should pick up chair of opposite colour and 
occupy 1st row 2nd position and so on till all rows and columns 
filled as suggested by teacher.
Blue chair is represented by B and black chair is represented by L
Example:
Teacher says as follows:
B 4 3
Students are arranged as follows:
B L B
L B L
B L B
L B L
*/

/*
Algorithm
---------
1. Read the Chair color.
2. Read Rows and columns.
3. Create and array with the given rows and columns.
3. put the given color chair in alternate positions starting 
   from first position and do the same 
   with the second color starting from second position.
4. Display the final array.
   
*/

#include <stdio.h>

int main(){
	char mc[10][10],col[2];
	int  rows,cols,i,j,count=0;
	
	scanf("%c",&col[0]);
	scanf("%d%d",&rows,&cols);
	
	if (col[0]=='B')
	col[1]='L';
	else
	col[1]='B';
	
	for (i=0;i<rows;i++)
	for (j=0;j<cols;j++){
		if (count==0){
			mc[i][j]=col[0];
			count=1;
		}
		else{
			mc[i][j]=col[1];
			count=0;
		}
	}
	
	for (i=0;i<rows;i++){
		printf("\n");
		for (j=0;j<cols;j++)
		printf("%c ",mc[i][j]);
	}
	
	return 0;
}
