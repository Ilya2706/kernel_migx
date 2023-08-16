#define COLOUR 0x03
char *vidptr = (char*)0xb8000;
unsigned int i = 0, j = 0;

void clean(){
	j = 0;
	i = 0;
	while(j < 80 * 25 * 2) {
		vidptr[j] = ' ' ;
		vidptr[j+1] = COLOUR;
		j = j + 2;
	}
}

void print_video(const char * str){
	j = 0;
	// i = 0;
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

void kmain(void) {

	clean();
	
	const char *str = "my first kernel on c!";
	const char *str_1 = "Hello world!";
	
	print_video(str);

	print_video(str_1);

}

