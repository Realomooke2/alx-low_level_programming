# 0x0B. C - malloc, free

## Concepts

### - [Automatic and dynamic allocation, malloc and free](https://intranet.alxswe.com/concepts/62)

# Resources

- [0x0a - malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230314%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230314T160409Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=676f6c7a3546bcbb45fd7dd0e26b0e596e1a8ed9f030bb00011ac64dfd8d46c9)

- [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64) *(stop at 6:50)*

# Tasks

## 0. Float like a butterfly, sting like a bee

Write a function that creates an array of chars, and initializes it with a specific char.
- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if size = `0`
- Returns a pointer to the array, or `NULL` if it fails

## 1. The woman who has no imagination has no wings

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- Prototype: `char *_strdup(char *str);`
- The `_strdup()` function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with `malloc,` and can be freed with `free.
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

## 2. He who is not courageous enough to take risks will accomplish nothing in life

Write a function that concatenates two strings.
- Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1,` followed by the contents of `s2,` and null terminated
- if `NULL` is passed, treat it as an empty string
- The function should return `NULL` on failure


## 3. If you even dream of beating me you'd better wake up and apologize

Write a function that returns a pointer to a 2 dimensional array of integers.
- Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to 0
- The function should return `NULL` on failure
- If `width` or `height` is `0` or negative, return `NULL`


## 4. It's not bragging if you can back it up
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
- Prototype: `void free_grid(int **grid, int height);`
- Note that we will compile with your alloc_grid.c file. Make sure it compiles.

