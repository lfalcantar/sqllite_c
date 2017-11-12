//
//  main.c
//  sqlLite
//
//  Created by NOOB-LAB on 11/10/17.
//  Copyright © 2017 Luis Alcantar. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#include "Structures.h"
#include "ManageInput.h"
#include "Enumerations.h"
#include "ExecuteCommands.h"
#include "ExecuteStatements.h"

int main(int argc, const char * argv[])
{
    InputBuffer* input_buffer = new_input_buffer();
    
    while (1)
    {
        print_prompt();
        read_input(input_buffer);
        
        if (input_buffer->buffer[0] == '.')
        {
            switch (do_meta_command(input_buffer))
            {
                case (META_COMMAND_SUCCESS):
                    continue;
                case (META_COMMAND_UNRECOGNIZED_COMMAND):
                    printf("Unrecognized command '%s'\n", input_buffer->buffer);
                    continue;
            }
        }
        
        else
        {
            Statement statement;
            switch (prepare_statement(input_buffer, &statement))
            {
                case (PREPARE_SUCCESS):
                    break;
                case (PREPARE_UNRECOGNIZED_STATEMENT):
                    printf("Unrecognized keyword at start of '%s'.\n",input_buffer->buffer);
                    continue;
            }
            
            execute_statement(&statement);
            printf("Executed.\n");
        }
    }
}
