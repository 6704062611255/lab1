#include <stdio.h>
int main(){
 int x;
 int y;
 scanf("%d ",&x);
 scanf("%d",&y);
 if (x>y){
	printf("x is greater than y \n");
	printf("diff x>y = %d \n",(x-y));
 } else {
	printf("y is greater than x \n");
	printf("diff y>x = %d \n",(y-x));	
 }
    return 0;
}
