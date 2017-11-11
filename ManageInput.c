//
//  ManageInput.c
//  sqlLite
//
//  Created by NOOB-LAB on 11/10/17.
//  Copyright © 2017 Luis Alcantar. All rights reserved.
//

#include "ManageInput.h"
#include "Structures.h"
#include <stddef.h>
#include <stdlib.h>



void print_prompt(void){ printf("db > "); }

void read_input(InputBuffer* input_buffer)
{
    ssize_t bytes_read = getline(&(input_buffer->buffer), &(input_buffer->buffer_length), stdin);
    
    if (bytes_read <= 0)
    {
        printf("Error reading input\n");
        exit(EXIT_FAILURE);
    }
    
    //Ignore trailing newline
    input_buffer->input_length =  bytes_read - 1;
    input_buffer->buffer[bytes_read - 1] = 0;
}

