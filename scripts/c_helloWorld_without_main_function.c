/* compile with gcc -nostartfiles */

#include <stdio.h>

extern void _exit(register int);
int _start(){
printf("Hello World");
exit(0);
}
