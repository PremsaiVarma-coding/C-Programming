#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,x;
  
    scanf("%s",str);
    
  
    
    for(i=0;;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
        printf("%c",str[i]);
    }
    
}
