
# SD-Alloc: Secure Dynamic Memory Allocation

**Wrapper library for POSIX Heap memory handlers such as malloc(), calloc() and free()**

**Wrappers:**
- ```sdmalloc()``` --> ```malloc()```
- ```sdcalloc()``` --> calloc()```
- ```sdfree()```   --> ```free()```

- ```sdalloc()``` is alias of ```sdmalloc()```

**Other apis which returns heap memory:**
- ```sdstrdup()``` --> ```strdup()```

**Features:**
- In built error handling on heap memory allocations
- Avoiding ```dangling pointers``` by asigning NULL value after ```free()```
- Avoiding ```double free``` memory corruption error (run-time) by NULL check before ```free()```

**TODO:**
- Implement wrapper for ```asprintf()```

