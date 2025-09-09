#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	while(1){
		void *p = malloc(1024*1024);
		printf("Leaked 1 MB at %p\n",p);
		sleep(1);
	}
	return 0;
}

