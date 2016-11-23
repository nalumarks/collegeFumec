#endif

#ifndef new
	#define new {.length=length, .equals=equals, .equalsIgnoreCase=equalsIgnoreCase, .substring=substring, .toUpperCase=toUpperCase, .toLowerCase=toLowerCase, .replace=replace, .lastIndexOf=lastIndexOf, .firstIndexOf=firstIndexOf};
#endif

#include "myString.c"

int length(char *str);
int firstIndexOf(char *str, char str_at);
int lastIndexOf(char *str, char str_at);
int equals(char *str, char *str_cmp);
char *toUpperCase(char *str);
char *toLowerCase(char *str);
char *replace(char *str, char str_old, char str_new);
char *substring(char *str, int primeiro, int ultimo);
int equalsIgnoreCase(char *str, char *str_cmp) ;

#ifndef STRING
	#define STRING

	typedef struct {
		int   (*length)(char*);
		int   (*equals)(char*, char*);
		int   (*equalsIgnoreCase)(char*, char*);
		char* (*substring)(char*, int, int);
		char* (*toUpperCase)(char*);
		char* (*toLowerCase)(char*);
		char* (*replace)(char*, char, char);
		int   (*lastIndexOf)(char*, char);
		int   (*firstIndexOf)(char*, char);
	
	}String;
	
