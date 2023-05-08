#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void check_e(unsigned char *elf_array);
void print_magic(unsigned char *elf_array);
void print_class(unsigned char *elf_array);
void print_data(unsigned char *elf_array);
void print_version(unsigned char *elf_array);
void print_abi(unsigned char *elf_array);
void print_osabi(unsigned char *elf_array);
void print_type(unsigned int elf_type, unsigned char *elf_array);
void print_entry(unsigned long int elf_entry, unsigned char *elf_array);
void close_elf(int elf);

#endif
