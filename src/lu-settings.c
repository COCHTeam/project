#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <stdint.h>
#include <assert.h> 
/*
#include <gsl/gsl_linalg.h>
#include "thpool.h"
*/
#include "lu-settings.h"
//#include "Yaml.hpp"


int parse()
{
FILE *fh = fopen("../config.yaml", "r");
if( !fh )
{
  printf("Pas bon!\n");
  return 1;
}
/*
  yaml_parser_t parser;
    yaml_event_t event;
    yaml_event_type_t event_type;

    yaml_parser_initialize(&parser);
    yaml_parser_set_input_file(&parser, fh);

    do {
        if (!yaml_parser_parse(&parser, &event))
            goto error;
        print_event(&event);
        event_type = event.type;
        yaml_event_delete(&event);
    } while (event_type != YAML_STREAM_END_EVENT);

    yaml_parser_delete(&parser);
 fclose(fh);
    return 1;

error:
    fprintf(stderr, "Failed to parse: %s\n", parser.problem);
    yaml_parser_delete(&parser);
*/
}


int parse2()
{
    FILE *fh = fopen("../fruit.yaml", "r");
    if( !fh )
    {
     printf("Pas bon!\n");
     return 1;
    }
/*
    yaml_parser_t parser;
    yaml_event_t event;
    struct parser_state state = {.state=START, .accepted=0, .error=0};
    struct fruit data[64];
    int i = 0;

    memset(data, 0, sizeof(data));
    yaml_parser_initialize(&parser);
    yaml_parser_set_input_file(&parser, fh);

    do {
        if (!yaml_parser_parse(&parser, &event)) {
            goto error;
        }
        if (!consume_event(&state, &event)) {
            goto error;
        }
        if (state.accepted && i < sizeof(data)/sizeof(*data)) {
            data[i].name = state.data.name;
            data[i].color = state.data.color;
            data[i].count = state.data.count;
            printf("data[%d]={name=%s, color=%s, count=%d}\n",
                i, data[i].name, data[i].color, data[i].count);
            i++;
        }
        yaml_event_delete(&event);
    } while (state.state != STOP);

    yaml_parser_delete(&parser);
    return 0;
fclose(fh);

error:
    yaml_parser_delete(&parser);
    return 1;
*/
}
