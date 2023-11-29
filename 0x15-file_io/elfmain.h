#ifndef ELFMAIN_H
#define ELFMAIN_H

/*Function Prototypes */
void check_elf(unsigned char *ident);
void display_magic(unsigned char *ident);
void display_class(unsigned char *ident);
void display_data(unsigned char *ident);
void display_version(unsigned char *ident);
void display_abi(unsigned char *ident);
void display_osabi(unsigned char *ident);
void display_type(unsigned int e_type, unsigned char *ident);
void display_entry(unsigned long int e_entry, unsigned char *ident);
void close_elf(int elf);

#endif

