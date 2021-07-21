#ifndef header2
#include <stdlib.h>
int  findMax(vector *v)
{
    if(v)
    {
         int maximum= -1e4,data;
        for(int i=0;i<v->vectorList.total;i++)
        {
             data=(int)v->vectorList.items[i];
                if(data>maximum)
                {
                maximum=(int) v->vectorList.items[i];
                }
        }
        return maximum;
    }
    return UNDEFINE;

}
int swapVectors(vector *x, vector *y)
{
    int status= UNDEFINE;
        if(x && y)
        {
            if(x->vectorList.total==y->vectorList.total)
            {
                void* temp;
                for(int i=0;i<x->vectorList.total;i++)
                {
                    temp=x->vectorList.items[i];
                    x->vectorList.items[i]=y->vectorList.items[i];
                    y->vectorList.items[i]=temp;
                }
                status= 1;
                return(status);
            }

        }
        return status;

}

int isEmpty(vector *v)
{
    if(v->vectorList.total==0)
    {
        return 1;
    }
    else return 0;
}




#define header2
#endif // header2
