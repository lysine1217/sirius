#ifndef SIRIUS_STRUCTURE_DOUBLEARRAY_
#define SIRIUS_STRUCTURE_DOUBLEARRAY_

//standard library
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MAX_ARRAYLEN   20000
#define MAX_WORDLEN    20
#define MAX_VOCABULARY 10000


class DoubleArray{

  DoubleArray();
  ~DoubleArray();

  void AddWord(char* word);
  bool FindWord(char* word);
  

  int n_vocab;
  int *base;
  int *check;
  

}



#endif SIRIUS_STRUCTURE_DOUBLEARRAY_
