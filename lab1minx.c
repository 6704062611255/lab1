#include <stdio.h>
int main(){
 int x,y;
 scanf("%d %d",&x, &y);
 if (x>y){
	printf("x is greater than y \n");
	printf("diff x>y = %d \n",(x-y));
 } else {
	printf("y is greater than x \n");
	printf("diff y>x = %d \n",(y-x));	
 }
    return 0;
}
