/*
 * The following program solves the linear system Ax=b.
 * The solution is found using LU decomposition of the matrix A.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <stdint.h>
#include <assert.h> 
#include "lu-read-settings.h"
#include "Yaml.hpp"

int main(int argc, char *argv[])
{
  Settings settings;

  return lu_read_yaml_settings("../../lu.yaml", &settings);

  if(argc<=2)
    goto Error;
/*
  if (strcmp(argv[1],"reorder")==0) {
     return lu_cmd_reorder(argc-1, argv+1);
  }
  else if (strcmp(argv[1],"test_mt")==0) {
          printf("    test_mt\n");
          test_mt();
          return 0;
  }
*/

  Error :
//   lu_help();
   return 0;


//  parse2();
//  parse();
//  test_reorder();
//  test_bitmap();
//  test_queue();
//  lu_test3_optim2();
/*
  lu_mat_t *mat;

  if( !ReadMMFileTolu_mat_trix("example/bcsstk31/bcsstk31.mtx", &mat) )
   return 1;
*/
/*
  test_gsl();
  lu_test3_matrix();
  test_mt();
*/
//  lu_test3_optim1();
//  lu_test3_optim2();

//  test_basic();

/*  printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
  test3(10);
*/
//  test3_mt(1000);
//   test(10000);

//  lu_test_perf(1000);

  return 0;
}
