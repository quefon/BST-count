#include"find.h"
#include"struct.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Find(treeNode currentPtr, char* value)
{ 
    if(currentPtr!=NULL)
    {
        if(strcmp(currentPtr->value,value)==0 && currentPtr->exist==1)
        {
            printf("%s\t%d\n",currentPtr->value,currentPtr->count);        
        }        
        else
        {
            Find(currentPtr->left,value);
            Find(currentPtr->right,value);        
        }    
    }          
}
