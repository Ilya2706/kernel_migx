construct: * src/*
	nasm -f elf32 kernel.asm -o kasm.o
	gcc -m32 -c src/*.c
	gcc -m32 -c kernel.c
	ld -m elf_i386 -T link.ld -o kernel *.o

delete: *
	rm kernel *.o

run: kernel
	qemu-system-i386 -kernel kernel
