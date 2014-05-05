                                                                               
#include <stdlib.h>

typedef struct <TYPE>_tree {
  <TYPE> data;
  struct <TYPE>_tree *left;
  struct <TYPE>_tree *right;
} <TYPE>_tree;

inline int cmp_<TYPE>(<TYPE> left, <TYPE> right);

//#include "<TYPE>_lib.c"

#ifndef CMP_TYPE
  inline int cmp_<TYPE>(<TYPE> left, <TYPE> right) return ((left == right) ? 0 : ((left < right) ? -1 : 1));
  #define CMP_TYPE 1
#endif
