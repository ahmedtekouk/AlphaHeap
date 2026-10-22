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

#ifndef AHEAP_H
#define AHEAP_H

// The Functions of library :

// Function : malloc_int()
int malloc_int(int **user_ptr, int user_reqs, char error_message[]);

// Function : make_array()
int make_array(int **user_ptr, int replay_time , int multitype_value);

// Function : print_array()
int print_array(int *user_ptr , int replay_time);

// Function auto_free()
int auto_free(int **user_ptr);

#endif