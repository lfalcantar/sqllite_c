//
//  main.c
//  sqlLite
//
//  Created by NOOB-LAB on 11/10/17.
//  Copyright © 2017 Luis Alcantar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Structures.h"
#include "ManageInput.h"

int main(int argc, const char * argv[]) {
    InputBuffer* input_buffer = new_input_buffer();
    
    while (1) {
        print_prompt();
        read_input(input_buffer);
        
        if(strcmp(input_buffer->buffer, ".exit") == 0) {
            exit(EXIT_SUCCESS);
        } else {
            printf("Unrecognized command '%s'.\n", input_buffer->buffer);
        }
    }
    
    return 0;
}
