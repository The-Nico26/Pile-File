#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

void main(){
 Pile *maPile = p_init();

 p_empiler(maPile, 4);
 p_empiler(maPile, 8);
 p_empiler(maPile, 15);
 p_empiler(maPile, 16);
 p_empiler(maPile, 23);
 p_empiler(maPile, 42);


 p_toString(maPile);

 printf("Je depile %d\n", p_depiler(maPile));
 printf("Je depile %d\n", p_depiler(maPile));

 p_toString(maPile);

}
