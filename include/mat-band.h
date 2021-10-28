#ifndef MAT_BAND_H
#define MAT_BAND_H

#include <stddef.h>

typedef struct {
  double *_mat;
  size_t  _length;
  size_t  _width;
} mat_band_t;

mat_band_t *create_mat_band(size_t lenght, size_t with);
mat_band_t *clone_mat_band(mat_band_t *mat);
void        fill_random_mat_band(mat_band_t *mat); 
int         cmp_mat_band(mat_band_t *mat1, mat_band_t *mat2); 
void        free_mat_band(mat_band_t *mat);

#endif /* MAT_BAND_H */

