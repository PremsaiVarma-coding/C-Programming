/*
There is an announcement in the college regarding Essay Writing Competition. 
Essay should contain minimum of ‘m’ words and maximum of ‘n’ words. 
If number of words are less than ‘m’ or greater than ‘n’, 
Essay is not going to be considered for competition.
Write a programmatical solution which takes an Essay, 
minimum and maximum words as input and displays 
number of words present in the Essay and whether it 
is accepted for competition or not. 
Display 0 for no acceptance, 1 for acceptance.
[Each word can have multiple spaces as or comma as separator. 
Sentence can be preceded or succeeded with spaces]
*/

/*
Algorethem
----------
1. Read essay in a stright line.
2. Read word limit.
3. Search for an alphabet followed by a space.
   (i) Search for an alphabet following a space.
   (ii) count number of times it is repeted and goto step 3.
4. Add 1 to the previous count and display it.
5. Check if the essay is valid by seeing if it falls under the world limit.
*/


#include <stdio.h>
#include <string.h>

int main(){
	char arr[500];
	int i,j,count=0,len,n,m;
	
	scanf("%[^\n]s",arr);
	scanf("%d",&m);
	scanf("%d",&n);
	len=strlen(arr);
	for(i=0;i<len;i++)
	if ((arr[i]>=65 && arr[i]<91) || (arr[i]>=97 && arr[i]<123))
	if (arr[i+1]==' ' || arr[i+1]==',')
	for (j=i+1;j<len;j++)
	if ((arr[j]>=65 && arr[j]<91) || (arr[j]>=97 && arr[j]<123))
	if (arr[j-1]==' ' || arr[j-1]==',')
	{
		count++;
		i=j-1;
		break;
	}
	count++;
	
	printf("%d\n",count);
	if (count<=m || count>=n)
	printf("%d",0);
	else
	printf("%d\n",1);
}
