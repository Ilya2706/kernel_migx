Kernel writed on Assembly/C/C++/Rust. To start the kernel you must have a Qemu, OS Linux, GCC, ld.
First:
  gcc -m32 -c kernel.c -o kc.o
Second:
  nasm -f elf32 kernel.asm -o kasm.o 
Next: 
  ld -m elf_i386 -T link.ld -o out/kernel kasm.o kc.o
To start the our kernel we have to run command:
  qemu-system-i386 -m 2 -kernel ./kenel
