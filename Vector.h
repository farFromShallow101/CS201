#ifndef Vector
#include <stdio.h>
#include <stdlib.h>
#define VECTOR_INIT_CAPACITY 6
#define UNDEFINE -1
#define SUCCESS 0
#define VECTOR_INIT(vec) \
    vector vec;          \
    vector_init(&vec)

//Store and track the stored data
typedef struct sVectorList
{
    void **items;
    int capacity;
    int total;
} sVectorList;
//structure contain the function pointer
typedef struct sVector vector;
struct sVector
{
    sVectorList vectorList;
    //function pointers
    int (*pfVectorTotal)(vector *);
    int (*pfVectorResize)(vector *, int);
    int (*pfVectorAdd)(vector *, void *);
    int (*pfVectorSet)(vector *, int, void *);
    void *(*pfVectorGet)(vector *, int);
    int (*pfVectorDelete)(vector *, int);
    int (*pfVectorFree)(vector *);

    int (*pfMaximum)(vector *);
    int (*isEmpty)(vector *);

    //Priyabrat
    int (*pfSumIt)(vector *);
    int (*pfSizeTot)(vector *);
    void (*pfReverseIt)(vector *);
    int (*pfFindIndex)(vector *, int);
    void (*sortIt)(vector *);

    //Prateek
    void (*pfFilter)(vector *, vector *, int(f)(int));
    void (*pfShow)(vector *);
    void *(*pfVecBack)(vector *);

    //Arshad
    int (*pfVecFront)(vector *);
};
// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Our Header Files $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
#include "header1.h"
#include "header2.h"
#include "header3.h"
#include "header4.h"

void vector_init(vector *v)
{
    //init function pointers
    v->pfVectorTotal = vectorTotal;
    v->pfVectorResize = vectorResize;
    v->pfVectorAdd = vectorPushBack;
    v->pfVectorSet = vectorSet;
    v->pfVectorGet = vectorGet;
    v->pfVectorFree = vectorFree;
    v->pfVectorDelete = vectorDelete;
    v->pfMaximum = findMax;
    v->isEmpty = isEmpty;
    //initialize the capacity and allocate the memory
    v->vectorList.capacity = VECTOR_INIT_CAPACITY;
    v->vectorList.total = 0;
    v->vectorList.items = malloc(sizeof(void *) * v->vectorList.capacity);

    v->pfSumIt = sumIt;
    v->pfSizeTot = sizeTot;
    v->pfReverseIt = reverseIt;
    v->pfFindIndex = findIndex;
    v->sortIt = sortIt;

    v->pfFilter = filter;
    v->pfShow = show;
    v->pfVecBack = vecBack;

    v->pfVecFront = vecFront;
}
#define VECTOR
#endif
