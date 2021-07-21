#ifndef priyabrat
#include <stdlib.h>

int  sumIt(vector *v)
{

         //int maximum= -1e4,data;
         int ans=0;
        for(int i=0;i<v->vectorList.total;i++)
        {
             ans+=(int)v->vectorList.items[i];

        }
        return ans;

}
int sizeTot(vector  *v)
{
    return v->vectorList.total;
}

 void reverseIt(vector  * v)
 {
    void * a[v->vectorList.total] ;
    int k=0;
    for(int i=v->vectorList.total-1;i>= 0;i--)
        {
             a[k++]=v->vectorList.items[i];

        }
        k=0;
    for(int i=0;i<v->vectorList.total;i++)
        {
            v->vectorList.items[i] = a[k++];

        }
        printf("the reverse vector is \n") ;
        for(int i=0;i<v->vectorList.total;i++)
        {
            printf("%d",(int)v->vectorList.items[i]);
            printf("  ") ;

        }
 }

 int findIndex(vector *v,int val)
 {
     int k = 0;
      for(int i=0;i<v->vectorList.total;i++)
      {
        k++;
        if((int)v->vectorList.items[i]==val)
            return k;
      }
      return -1;
 }

 void  sortIt(vector *v,int total)
   {
        int t = total;


          int a[total];
      for(int i=0;i<total;i++)
      {
         a[i] = (int)v->vectorList.items[i];
      }

       for (int i = 0; i < total; ++i)
        {

            for (int j = i + 1; j < total; ++j)
            {

                if (a[i] > a[j])
                {

                   int  num =  a[i];
                    a[i] = a[j];
                    a[j] = num;

                }

            }

        }

    for(int i=0;i<total;i++)
    {
       // vector_set(&v, i, a[i]);
      v->vectorList.items[i] = a[i];

    }
      for(int i=0;i<total;i++)
      {
             printf("%d",(int)v->vectorList.items[i]);
             printf("\n");

      }


  }


#define priyabrat
#endif
