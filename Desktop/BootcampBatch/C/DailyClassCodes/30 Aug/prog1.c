/* a c e
*  g i k
*  m o q
*/

#include<stdio.h>
int main(){
	
	char ch='a';
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++){
			printf("%c",ch);
			ch+=2;
		}
		printf("\n");
	}
}
