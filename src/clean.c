#include "../kernel.h"

void clean(){
	unsigned int j = 0, i = 0;
	while(j < 80 * 25 * 2) {
		vidptr[j] = ' ' ;
		vidptr[j+1] = COLOR;
		j = j + 2;
	}
}