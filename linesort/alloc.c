#define ALLOCSIZE 10000 /* total available space */

static char allocbuf[ALLOCSIZE];  /* storage for alloc */
static char *allocptr = allocbuf; /* next free position */

/* return pointer to n characters */
char *alloc(int n) {
    if (allocbuf - allocptr + ALLOCSIZE >= n) {                        /* check if there is enough space */
        allocptr += n;       /* move to next free position */
        return allocptr - n; /* return old position */
    } else { /* not enough room */
        return 0;
    }
}

/* free storage pointed to by p - must be freed in same sequence as was allocated (FIFO)*/
char afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
        allocptr = p;
    }
}