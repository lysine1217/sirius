#include "double_array.hpp"

DoubleArray::DoubleArray(){
  
  n_vocab = 0;
  base  = (int *)malloc(sizeof(int)*MAX_ARRAYLEN);
  check = (int *)malloc(sizeof(int)*MAX_ARRAYLEN);

  // initialize array with skip list to make searching quickly
  for(int i=0;i<MAX_ARRAYLEN;i++){
    base[i] = -(i+1);
    check[i] = -1;
  }

  base[0]  = 0;
  check[0] = 1;
}

DoubleArray::~DoubleArray(){
  free(base);
  free(check);
}

//current test version just treat lower alphabet

bool DoubleArray::FindWord(char* word){
  
  int p = 0;

  for(int i=0;i<strlen(word);i++){

    //check range of the char
    int c  = word[i]-'a';
    if(c<0 || c>26)return false;

    //check parent of the current node
    int np = base[p]+c;
    if(np<0 || check[np]!=p)return false;

    p = np;
  }

  return true;

}


bool DoubleArray::AddWord(char* word){

  int p = 0;

  for(int i=0;i<strlen(word);i++){

    //check range
    int c  = word[i]-'a';
    if(c<0 || c>26)return false;
    
    int np = base[p]+c;
    if(np>=0 && check[np]==p){
      p = np;
    }
    else {
      ;
    }
  }

}
