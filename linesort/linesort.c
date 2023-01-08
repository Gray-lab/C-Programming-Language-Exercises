#include <linesort.h>

char *lineptr[MAXLINES]; /* array of pointers to text lines */

/* sort input lines by length */
int main(void) {
    int nlines;
    nlines = readlines(lineptr, MAXLINES); /* read in lines */
    if (nlines >= 0) {
        qsort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: number of input lines exceeds maximum of %d", MAXLINES);
        return 1;
    }
}
