#ifndef ELFMAIN_H
#define ELFMAIN_Hi

/* Function Prototypes */
void check_elf(unsigned char *e_ident);
void display_magic(unsigned char *e_ident);
void display_class(unsigned char *e_ident);
void display_data(unsigned char *e_ident);
void display_version(unsigned char *e_ident);
void display_abi(unsigned char *e_ident);
void display_osabi(unsigned char *e_ident);
void display_type(unsigned int e_typee, unsigned char *e_ident);
void display_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif
