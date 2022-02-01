/*
Mr. Dhanush is working in the Army. He has to send a message to his colleague Mr. Kashyap
confidentially. This message should not be known to anyone. So he encrypted the message in
the following way:
• ASCII value of each character positioned in Even places (0,2,4,6 etc) is decremented
by 10 and the resultant value is converted back to character.
• ASCII value of each character positioned in Odd places (1,3,5,7 etc) is incremented
by 10 and the resultant value is converted back to character.

Algorithm
---------
1. Read the message.
2. If position is even decremented character ASCII value by 10 
   else incremented character ASCII value by 10 and store in the array.
3. Display the final result.
*/

#include<stdio.h>
#include<string.h>
int main()

{
    char m[200];
    int x,i,j,a,b,c,d;
    
    scanf("%[^\n]s",m);
    x = strlen(m);
    
    for(i=0;i<x;i++)
    {
        if(i%2==0)
        {
          a = m[i];
          b = a-10;
          m[i] = b;
        }
        else
        {
          c = m[i];
          d = c+10;
          m[i] = d;
        }
        
    }
    printf("%s",m);
    
}

