#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void * a, const void * b) {
return * (char * ) a - * (char * ) b ;
}

int main() {
int n, i = 0 ;
char c[30] ;
FILE * in = fopen ( "input.txt", "r" ) ;
FILE * out = fopen ( "output.txt", "w" ) ;
/*while ( !feof(in) ) {
fscanf( in, "%c", &c[i] ) ;
i++ ;
}*/
fgets(c , 30 , in);
n = strlen(c);
// printf ( "%d jhghj" , n) ;
qsort(c, n, sizeof(char), compare ) ;
for( i = 0 ; i < n ; i++) {
fprintf ( out , "%d" , c[i] - 48) ;
printf ( "%d " , c[i] - 48) ;
}
fclose( in ) ;
fclose( out ) ;
return 0 ;
}
