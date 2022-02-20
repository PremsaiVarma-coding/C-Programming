#include <stdio.h>
#include <string.h>

int main(){
	int n1,i,flag=0;
	char names[100][50],na[100];
	
	scanf("%d\n",&n1);
	
	for (i=0;i<n1;i++)
	fgets(names[i],sizeof(names),stdin);
	
	scanf("%s",na);
	
	for (i=0;i<n1;i++){
		printf("val=%s\n",names[i]);
		if(strcpy(names[i],na)==0){
			flag=1;
			break;
		}
	}
	
	if (flag==1)
	printf("Common Name\n");
	else
	printf("Unique Name\n");
  
  return 0;
	
	
}
