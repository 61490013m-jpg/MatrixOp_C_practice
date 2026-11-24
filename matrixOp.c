#include<stdio.h>
#include"matrixOp.h"

void MatrixTranspose(float* matrixA, float* matrixB){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrixB[j*3+i] = matrixA[i*3+j];
        }
    }
}