#ifndef _KERNEL_H_
#define _KERNEL_H_
 
extern char *vidptr;
extern unsigned int current_loc;


extern unsigned char keyboard_map[128];
extern void keyboard_handler(void);
extern char read_port(unsigned short port);
extern void write_port(unsigned short port, unsigned char data);
extern void load_idt(unsigned long *idt_ptr);


#define LINES 
#define COLUMNS_IN_LINE 
#define BYTES_FOR_EACH_ELEMENT 
#define SCREENSIZE BYTES_FOR_EACH_ELEMENT * COLUMNS_IN_LINE * LINES

#define KEYBOARD_DATA_PORT 
#define KEYBOARD_STATUS_PORT 
#define IDT_SIZE 
#define INTERRUPT_GATE 
#define KERNEL_CODE_SEGMENT_OFFSET 

#define ENTER_KEY_CODE 


#endif