#ifndef header3
#include <stdlib.h>
#include "header1.h"
#include "header2.h"


/*
VecBack Function takes a vector array as parameter and returns the last element of the array.
Time Complexity is O[1].
*/
void * vecBack(vector *v){
    return v->pfVectorGet(v, v->vectorList.total-1);
}



/*
Filter function takes three parameters.
First parameter is a vector array from which elements are to be chosen.
Second parameter is a vector array in which suitable elements are inserted.
Third parameter is a boolean function which is the condition for an element to be inserted in second array.
E.g.
    bool condition(element){
        return element%2==0;
    }
Time Complexity is O[n].
*/
void filter(vector* v1,vector* v2,int (f)(int)){
    int size = v1->vectorList.total,data;
    for(int i=0;i<size;i++){
        data = (int)v1->vectorList.items[i];
        if((f)(data)){
            v2->pfVectorAdd(v2,(void*)data);
        }
    }
}


/*
Show function takes a vector array as the parameter and prints its elements. Time Complexity is O[n].
*/
void show(vector *v){
    int size = v->vectorList.total;
    for(int i=0;i<size;i++){
        printf(" %d",v->vectorList.items[i]);
    }
    printf("\n");
}
#define header3
#endif // header3
