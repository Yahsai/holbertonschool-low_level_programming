# C-Hash tables

## Description

This project implements a simple hash table in the C programming language. The hash table utilizes the djb2 hashing algorithm and handles collisions through chaining. The project enforces coding standards using the Betty style, limiting the number of functions per file, and incorporating other best practices.


## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the project folder, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called hash_tables.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Data Structures

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

## Functions

0. hash_table_create

Write a function that creates a hash table.

    Prototype: hash_table_t *hash_table_create(unsigned long int size);
    Where size is the size of the array.
    Returns a pointer to the newly created hash table.
    If something went wrong, your function should return NULL.

1. hash_djb2

Write a hash function implementing the djb2 algorithm.

    Prototype: unsigned long int hash_djb2(const unsigned char *str);
    You are allowed to copy and paste the function from this page.

2. key_index

Write a function that gives you the index of a key.

    Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
    Where key is the key and size is the size of the array of the hash table.
    This function should use the hash_djb2 function that you wrote earlier.
    Returns the index at which the key/value pair should be stored in the array of the hash table.

3. hash_table_set

Write a function that adds an element to the hash table.

    Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
    Where ht is the hash table you want to add or update the key/value to.
    Key cannot be an empty string, and value must be duplicated. Value can be an empty string.
    Returns: 1 if it succeeded, 0 otherwise.
    In case of collision, add the new node at the beginning of the list.

4. hash_table_get

Write a function that retrieves a value associated with a key.

    Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
    Where ht is the hash table you want to look into and key is the key you are looking for.
    Returns the value associated with the element or NULL if key couldn’t be found.

5. hash_table_print

Write a function that prints a hash table.

    Prototype: void hash_table_print(const hash_table_t *ht);
    Where ht is the hash table.
    You should print the key/value in the order that they appear in the array of hash table.
    Order: array, list.
    Format: see example.
    If ht is NULL, don’t print anything.

6. hash_table_delete

Write a function that deletes a hash table.

    Prototype: void hash_table_delete(hash_table_t *ht);
    Where ht is the hash table.
