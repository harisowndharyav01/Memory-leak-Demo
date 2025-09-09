#include <stdio.h>
#include <config.h>

int main(void){
	printf("Package Name: %s\n",PACKAGE_NAME);
	printf("Package Version: %s\n",PACKAGE_VERSION);
	printf("Version Number: %s\n",VERSION);
	printf("Bug Report: %s\n",PACKAGE_BUGREPORT);
	return 0;
}

