// Copyright (C) 2026 ahmedtek.dev

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
    
// ----------------------------------------------------------------

// Include System Libraries
#include <stdio.h>
#include <stdlib.h>

// Function Main Code : malloc_int()
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

// Function Main Code : make_array()
int make_array(int **user_ptr, int replay_time , int multitype_value)
{
    for (int i = 0; i < replay_time ; i++)
    {
        (*user_ptr)[i] = i * multitype_value;
    }
    return 0;
}

// Function Main Code : print_array()
int print_array(int *user_ptr , int replay_time)
{
    for (int i = 0; i < replay_time; i++)
    {
        printf("ptr[%d] = %d\n", i , user_ptr[i]);
    }
    return 0;
}

// Function Main Code : auto_free
int auto_free(int **user_ptr) 
{
    if (user_ptr && *user_ptr) 
    {
        free(*user_ptr);
        *user_ptr = NULL;
    }
    return 0;
}

