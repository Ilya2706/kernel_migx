#include "src/clean.h"
#include "src/print.h"

void kmain(void) {

	clean();
	
	const char *str = "my first kernel on c!";
	const char *str_1 = "Hello world!";
	
	print(str);

	print(str_1);

}

