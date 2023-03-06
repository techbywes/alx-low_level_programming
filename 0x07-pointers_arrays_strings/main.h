#include"main.h"
#include<unistd.h>
/**
*_putchar-writesthecharacterctostdout
*@c:Thecharactertoprint
*
*Return:Onsuccess1.
*Onerror,-1isreturned,anderrnoissetappropriately.
*/
int_putchar(charc)
{
return(write(1,&c,1));
}


============================================

MAIN.Hcode


#ifndefMAIN_H
#defineMAIN_H

char*_memset(char*s,charb,unsignedintn);
int_putchar(charc);
char*_memcpy(char*dest,char*src,unsignedintn);
char*_strchr(char*s,charc);
unsignedint_strspn(char*s,char*accept);
char*_strpbrk(char*s,char*accept);
char*_strstr(char*haystack,char*needle);
voidprint_chessboard(char(*a)[8]);
voidprint_diagsums(int*a,intsize);
voidset_string(char**s,char*to);
#endif
