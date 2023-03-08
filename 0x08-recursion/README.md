# 0x08-recursion

# Resources

- [0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230308%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230308T171636Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=93ad7d9371b7906c1e066f7daee6404675fd92180ce2a63e419f821cc3520129)
- [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
- [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs)

# Tasks

## 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

- Write a function that prints a string, followed by a new line.
- Prototype: void _puts_recursion(char *s);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.



## 1. Why is it so important to dream? Because, in my dreams we are together

- Write a function that prints a string in reverse.
- Prototype: void _print_rev_recursion(char *s);


## 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

- Write a function that returns the length of a string.
- Prototype: int _strlen_recursion(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.


## 3. You mustn't be afraid to dream a little bigger, darling

Write a function that returns the factorial of a given number.
- Prototype: int factorial(int n);
- If `n` is lower than `0`, the function should return `-1` to indicate an error
- Factorial of `0` is `1`


## 4. Once an idea has taken hold of the brain it's almost impossible to eradicate

Write a function that returns the value of `x` raised to the power of `y`.
- Prototype: int _pow_recursion(int x, int y);
- If `y` is lower than 0, the function should return `-1`

FYI: The standard library provides a different function: `pow`. Run `man pow` to learn more.


## 5. Your subconscious is looking for the dreamer

Write a function that returns the natural square root of a number.
- Prototype: int _sqrt_recursion(int n);
- If n does not have a natural square root, the function should return -1
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.



## 6. Inception. Is it possible?

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
- Prototype: int is_prime_number(int n);


## 
