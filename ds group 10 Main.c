#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"

int condition(int element)
{
    if (element % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char *argv[])
{

    printf("___________________________________Group-10: Arshad, Aditi, Pratik, Priyabrat, Rishi__________________________________\n");
    printf("____________________________________________Implementation Of the Functions_______________________________________\n\n\n");
    int i = 0, n, data, index;
    char character;
    //init vector
    VECTOR_INIT(v1);
    VECTOR_INIT(v2);
    printf("How many elements do you want to enter\n");
    scanf("%d", &n);
    printf("Enter the elements of vector 1\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);
        v1.pfVectorAdd(&v1, (void *)data);
    }
    printf("Enter the elements of vector 2\n");
    for (i = 0; i < n; i++)
    {
        scanf("%c", &data);
        v2.pfVectorAdd(&v2, (void *)data);
    }

    printf("____________________________________________________________________________________________________________\n");
    printf("Implementing Show function to display vectors:\n");
    printf("The first vector entered is:\n");
    v1.pfShow(&v1);
    printf("\nThe size of the first vector is: %d\n", v1.pfSizeTot(&v1));
    printf("\nThe second vector entered is:\n");
    v2.pfShow(&v2);
    printf("The size of the second vector is : %d\n", v2.pfSizeTot(&v2));

    printf("____________________________________________________________________________________________________________\n");

    printf("\n\nImplementing Maximum functon:\n");
    printf("Maximum of v1= %d\n", v1.pfMaximum(&v1));
    printf("____________________________________________________________________________________________________________\n");

    printf("\n\nImplementing vecFront and vecBack functions\n");
    printf("The front of the first vector is %d\n", v1.pfVecFront(&v1));
    printf("The back of the first vector is %d\n", v1.pfVecBack(&v1));

    printf("____________________________________________________________________________________________________________\n");

    printf("\n\nImplementing Vector set Function\n");
    v1.pfVectorSet(&v1, 2, (void *)20);
    printf("After setting that value our vector becomes:\n");
    v1.pfShow(&v1);

    printf("____________________________________________________________________________________________________________\n");
    printf("Impelementing Vector Get function\n");
    printf("Enter the index at which you want to find the element: ");
    scanf("%d", &index);
    printf("\nThe element present at the given index is %d", v1.pfVectorGet(&v1, index));

    printf("____________________________________________________________________________________________________________\n");

    printf("\n\nImplementing Is empty function\n");
    if (v1.isEmpty(&v1))
    {
        printf("v1 is empty\n");
    }
    else
    {
        printf("v1 is not empty\n");
    }

    printf("____________________________________________________________________________________________________________\n");

    printf("\n\nImplementing the Find element function:\n");
    index = v1.pfFindIndex(&v1, 8);
    if (index == -1)
    {
        printf("The element is not present in the vector\n");
    }
    else
    {
        printf("The element is present at the index: %d\n", index);
    }

    printf("____________________________________________________________________________________________________________\n");
    VECTOR_INIT(v3);
    printf("\n\nImplementing filter function to make a vector that contains only even elements\n");
    filter(&v1, &v3, condition);
    printf("The filtered vector v3 is:\n");
    v3.pfShow(&v3);

    printf("____________________________________________________________________________________________________________\n");
    printf("\n\nImplementing Delete function\n");
    printf("Enter the element you want to delete:");
    scanf("%d", &data);
    v1.pfVectorDelete(&v1, data);
    printf("\nThe vector after deleting the element becomes:\n");
    v1.pfShow(&v1);

    printf("____________________________________________________________________________________________________________\n");
    printf("\n\nImplementing Reverse Function\n");
    v1.pfReverseIt(&v1);
    printf("\n");

    printf("____________________________________________________________________________________________________________\n");
    printf("\n\nImplenting Sort Function\n");
    sortIt(&v1, v1.pfSizeTot(&v1));

    return 0;
}
