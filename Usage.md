# AlphaHeap Library Tutorial

## Startup Steps
To use the library on your project :
1. Copy the files `aheap.h` and `aheap.c` to you project directory
from terminal :
```bash
cp -r AlphaHeap/src /path/to/your/project # <- Your Project Directory
```
2. In Your Project include the library like this : `#include "src/aheap.h"`

*Note*: You can just copy the files `aheap.h` and `aheap.c` without their directory `/src` and include the library it like this : `#include "aheap.h"`

## Library Functions

**`malloc_int()`**: Use that function to make a malloc() easier and safety.
- To use it you need to make an **integer pointer**, **integer number** for the value of malloc and **string text** to make error message.
- To use the function :
`malloc_int(&your_pointer , your_integer_number_varibale , your_error_message_varibale);`

**`make_array()`**: To make an heap array
- To use it you need the same **integer pointer** you make it before, **integer number** for loop replay time and another **integer number** for multitype value.
- To use the function :
`make_array(&the_pointer , repaly_time_varibale , multitype_value_varibale);`

**`print_array()`** : To print the heap array
- To use it you need to the same **integer pointer** you make an array on it and an **integer varibale** for loop replay time
- To use the function :
`print_array(&the_pointer , replay_time_varibale);`

**`auto_free`**: For the secret free the heap 
- To use it just you need the same **pointer**
- To use the function : 
`auto_free(&the_pointer);`

## Compile Steps
To compile use this command
```bash
gcc -o your_project your_project.c sys/aheap.c
```
You can use this compiling command in `Make` by `Makefile`

