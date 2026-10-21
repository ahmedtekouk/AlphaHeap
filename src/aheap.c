#include <stdio.h>
#include <stdlib.h>

int malloc_int(int **user_ptr , int user_reqs , char error_message[])
{
    *user_ptr = malloc(user_reqs);
    if (*user_ptr == NULL)
    {
        printf("%s\n", error_message);
        return 1;
    }
    return 0;
}

int make_array(int **user_ptr, int replay_time , int multitype_value)
{
    for (int i = 0; i < replay_time ; i++)
    {
    (*user_ptr)[i] = i * multitype_value;
    }
    return 0;
}

int print_array(int *user_ptr , int replay_time)
{
    for (int i = 0; i < replay_time; i++)
    {
        printf("ptr[%d] = %d\n", i , user_ptr[i]);
    }
    return 0;
}
