#include"struct.h"
#include"count.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Count(treeNode currentPtr)
{
    if(currentPtr!=NULL)
    {   
        Count(currentPtr->left);
        if(currentPtr->exist)
        {           
            p[i].count = currentPtr->count;
            strcpy(p[i].temp,currentPtr->value);
            i++;                                     
        } 
        Count(currentPtr->right); 
    }
}
