#ifndef MAIN_H
  2 #define MAIN_H
  3 
  4 int _putchar(char c);
  5 unsigned int binary_to_uint(const char *b);
  6 void print_binary(unsigned long int n);
  7 int get_bit(unsigned long int n, unsigned int index);
  8 int set_bit(unsigned long int *n, unsigned int index);
  9 int clear_bit(unsigned long int *n, unsigned int index);
 10 unsigned int flip_bits(unsigned long int n, unsigned long int m);
 11 int get_endianness(void);
 12 
 13 #endif /* MAIN_H*/
 14 
