/* Master Sanatan is learning chess from his father, Mr. Surya Prasad. Father picks up each pawn
and explains to him what are right moves and what are not.
As a programmer, arrive at a programmatical solution to make Mr. Surya Prasad’s job easy.
K represents King, R represents Rook, etc. 1
st two digits represent 1
st position and the second
two digits represent the second position.
Input:
K
4 4
5 5
Output:
Valid move for King
Input:
R
4 4
5 5
Output:
Invalid move for Rook

Algorithm
---------
1.Take the first character of the chess piece as input, and also the two co-ordinates of the moved to be made i.e is 4 numbers.
2.For King, it can move only one step forward or backward in all diretions.
3.For Rook, it can move any number of steps in any direction except cross.
4.Write code according to the above mentioned conditions.
*/
#include<stdio.h>
int main()
{
    char ch;
    int a,b,c,d;
    scanf("%c",&ch);
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(ch=='K')
    {
        if(((a+b+c+d)%2==0 || (a+b+c+d)%2!=0) && ((a+b)-(c+d)==1 || (a+b)-(c+d)==-1) )
        printf("Valid move for King");
        else
        printf("Invalid move for King");
    }
    
    else if(ch=='R')
    {
        if((a+b+c+d)%2!=0)
        printf("Valid move for Rook");
        
        else
        printf("Invalid move for Rook");
        
    }
    return 0;
}
