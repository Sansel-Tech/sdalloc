
# SD-Alloc: Secure Dynamic Memory Allocation

**Wrapper library for POSIX Heap memory handlers such as malloc(), calloc() and free().**

**Wrappers:**
- ```sdmalloc()``` --> ```malloc()```
- ```sdcalloc()``` --> ```calloc()```
- ```sdfree()```   --> ```free()```

- ```sdalloc()``` is alias of ```sdmalloc()```


**Other apis which returns heap memory:**
- ```sdstrdup()``` --> ```strdup()```


**Features:**
- Builtin error handlers for heap memory allocators such as ```malloc()``` and ```calloc()```
- Avoiding ```dangling pointers``` by asigning NULL value after ```free()```
- Avoiding ```double free``` memory corruption (run-time error) by doing NULL check before ```free()```
- Own implementation of ```strdup()``` function in the name of ```sdstrdup()```


**TODO:**
- Need to implement wrapper for ```asprintf()```

