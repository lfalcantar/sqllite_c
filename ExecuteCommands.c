//
//  ExecuteCommands.c
//  sqlLite
//
//  Created by NOOB-LAB on 11/12/17.
//  Copyright © 2017 Luis Alcantar. All rights reserved.
//
#include <string.h>
#include <stdlib.h>


#include "ExecuteCommands.h"
#include "Enumerations.h"
#include "Structures.h"


MetaCommandResult do_meta_command(InputBuffer* input_buffer)
{
    if (strcmp(input_buffer->buffer, ".exit") == 0)
    {
        exit(EXIT_SUCCESS);
    }
    else
    {
        return META_COMMAND_UNRECOGNIZED_COMMAND;
    }
}
