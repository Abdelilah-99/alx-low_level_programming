#include "function_pointers.h"
/**
 * print_name - had function 3andha 2 d arg wa7da type char
 * w lakhra function pointer that hold the adresse nta3
 * ay function 3ndha arg type chare and return nothing
 * b tabi3att l7aal  depenf l print_name w lwmwn kat3yatt
 * f had l7ala kat3yatt l 2 d function w7da ghadi nfawtuu fiha string name
 * by function pointer w tkharraj liina name normal w function
 * a tprantii name in appercase
 * @name: hada ghady yduuz 3aan tarii9 l f 7iit f hazza ladresse
 * illaa darna call l function 3ndha arg type char w return void
 * ghady dawaz string lii m pointii name 3liih
 * @f: hadi hya function pointer
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}
