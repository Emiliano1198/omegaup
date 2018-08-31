#include <stdio.h>
int main(int argc, char *argv[]) {
	int a,b,c=0,d=0,i,r;
	scanf("%d",&b);
	for(i=0;i<b;i++){
		do{
			scanf("%i",&a);
		} while(a<1||a>10000);
		if (a!=0) {
			r= a%2;
			if (r==0) {
				c+=a;
			} else {
				d+=a;
			}
		}
	}
	if(c==d){
		printf("EMPATE!");
	}else{
		if(c>d){
			printf("APARICIO");
		}else{
			printf("NONILA");
		}
	}
	return 0;
}
