#ifndef _MAIN_H_
#define _MAIN_H_


int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int string_len(char *str);
char *infinite_add(char *str1, char *str2);
char *shift_left(char *dest);
int check_0_9(char *str);
void _strrev(char *str);
char *_strcpy(char *dest, char *src);


#endif
