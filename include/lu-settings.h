#ifndef LU_SETTINGS_H
#define LU_SETTINGS_H

typedef enum {
MODE_NO_VERBOSE, 
MODE_VERBOSE
} Mode_t; 

typedef enum {
RDCPU
} Reorder_Algo;

typedef struct {
  Mode_t  _mode;
} Env;

typedef enum {
TEXT
} File_Format;

typedef struct {
  char   *_matrix;
  Mode_t  _mode;
} Task_Load;

typedef struct {
  Reorder_Algo _reorder_Algo;
  Mode_t       _mode;
  char        *_out_path;
  File_Format  _format;
} Task_Reorder;

typedef struct {
  Task_Load _task_Load;
} Task;

typedef struct {
  char     *apiVersion;
  Env      _env;
  Task     _task;
} Settings;


int parse();
int parse2();


#endif /* LU_SETTINGS_H */

