
#ifndef __SDALLOC_H__
#define __SDALLOC_H__

#define sdalloc(size) sdmalloc(size)

#define sdfree(ptr)  do {                                              \
                        if (ptr != NULL) {                             \
                            free(ptr); ptr = NULL;                     \
                        }                                              \
                    } while(0);


void *sdmalloc(size_t size);
void *sdrealloc(void *ptr, size_t size);
void *sdcalloc(size_t nmemb, size_t size);

char *sdstrdup (const char *s);
int   sdasprintf(char **strp, const char *fmt, ...);

#endif
