// master branch
#include <studio.h>
#include "myheader.h"

int main(void) {
	char name[17] = {0,};

	print("Name : ");
	scanf("%s", name);

	printHello();
	printBye();

	return 0;
}
