
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
- Ready to use code. Simply include the source code & header file in your projects and call the APIs
- Builtin error handlers for heap memory allocators such as ```malloc()``` and ```calloc()```
- ```sdmalloc()```(```malloc()``` wrapper) itself returns cleared heap memory
- Avoiding ```dangling pointers``` by asigning NULL value after ```free()```
- Avoiding ```double free``` memory corruption (run-time error) by doing NULL check before ```free()```
- Own implementation of ```strdup()``` function in the name of ```sdstrdup()```

**TODO:**
- Need to implement wrapper for ```asprintf()``` and ```vasprintf()```

