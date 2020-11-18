
#define _GNU_SOURCE

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

#include "sdalloc.h"

char *sdstrdup(const char *s)
{
	size_t len = 0;
	void *new = NULL;

	do {
		if (s == NULL) {
			fprintf(stderr, "sdstrdup: NULL input !!!\n");
			abort();
			break;
		}

		len = strlen(s) + 1;
		new = sdcalloc(len, 1);
		if (new == NULL) {
			fprintf(stderr, "sdstrdup: calloc failed due to %s\n", strerror(errno));
			abort();
			break;
		}

		memcpy(new, s, len);
	} while(0);

	return (char *)new;
}


#if 0 /* TODO: Yet to implement */
int sdasprintf(char **strp, const char *fmt, ...)
{
	int ret = -1;

	ret = asprintf(strp, fmt);
	if (ret < 0) {
		fprintf(stderr, "asprintf: failed due to %s\n", strerror(errno));
		abort();
	}

	return ret;
}
#endif


void *sdmalloc(size_t size)
{
	void *ptr = NULL;

	ptr = malloc(size);
	if (ptr == NULL) {
		fprintf(stderr, "sdmalloc: failed due to %s\n", strerror(errno));
		abort();
	}

	memset(ptr, 0x00, size);

	return ptr;
}


void *sdcalloc(size_t nmemb, size_t size)
{
	void *ptr = NULL;

	ptr = calloc(nmemb, size);
	if (ptr == NULL) {
		fprintf(stderr, "sdcalloc: failed due to %s\n", strerror(errno));
		abort();
	}

	return ptr;
}


void *sdrealloc(void *ptr, size_t size)
{
	void *new = NULL;

	do {
		new = realloc(ptr, size);
		if (new == NULL) {
			fprintf(stderr, "sdrealloc: failed due to %s\n", strerror(errno));
			abort();
			break;
		}
	} while(0);

	return new;
}


#if 0
/*
  Commented since we are using sdfree() as macro. Initializing NULL in line no 116 is no effective to the caller.
  Because, ptr is a local variable (argument). NULLing the ptr is useless to the caller and might cause double free.
  We can achive this by modifying the function as sdfree(void **ptr), but the style differs from standard free() api.
*/
void sdfree(void *ptr)
{
	printf("%s: ptr: %p\n", __func__, ptr);
	if (ptr != NULL) {
		free(ptr);
		ptr = NULL;
	}

	return;
}
#endif

//EOF
