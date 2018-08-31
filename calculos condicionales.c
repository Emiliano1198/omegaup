#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int n;
	int m=0;
	scanf("%d",&n);
	if(n%2==0){
		n=n/2;
		m=m+1;
		if(n<10){
			printf("%d",n);
			printf(" %d",m);
		}else{
			if(n>100){
				n=n/100;
				m=m+1;
				if(n%3==0){
					n=n-1;
					m=m+1;
					printf("%d",n);
					printf(" %d",m);;
				}else{
					printf("%d",n);
					printf(" %d",m);
				}
			}else{
				n=n/10;
				m=m+1;
				if(n%3==0){
					n=n-1;
					m=m+1;
					printf("%d",n);
					printf(" %d",m);
				}
				else{
					printf("%d",n);
					printf(" %d",m);
				}
				
			}
		}
		
	}else{
		n=n+1;
		m=m+1;
		if(n<10){
			printf("%d",n);
			printf(" %d",m);
		}else{
			if(n>100){
				n=n/100;
				m=m+1;
				if(n%3==0){
					n=n-1;
					m=m+1;
					printf("%d",n);
					printf(" %d",m);
				}
				else{
					printf("%d",n);
					printf(" %d",m);
				}
			}else{
				n=n/10;
				m=m+1;
				if(n%3==0){
					n=n-1;
					m=m+1;
					printf("%d",n);
					printf(" %d",m);
				}
				else{
					printf("%d",n);
					printf(" %d",m);
				}
			}
		}
	}
	return 0;
}
