#include "../kernel.h"

#define COLOUR 0x03

void print(const char * str){
	j = 0;
	while(vidptr[i] = '\0') {
		i = i + 2;
	}

	i = i + 2;

	while(str[j] != '\0') {
		vidptr[i] = str[j];
		vidptr[i+1] = COLOUR;
		++j;
		i = i+2;
	} 
}
