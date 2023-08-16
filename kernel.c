#include "src/clean.h"
#include "src/print.h"


char *vidptr = (char*)0xb8000;
unsigned int i = 0, j = 0;

void kmain(void) {

	clean();
	
	const char *str = "my first kernel on c!";
	const char *str_1 = "Hello world!";
	
	print(str);


}

