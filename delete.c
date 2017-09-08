#include"struct.h"
#include"delete.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Delete(treeNode *currentPtr, char* value)
{
    if((*currentPtr)!=NULL)
    {
        if(strcmp((*currentPtr)->value,value)==0 && (*currentPtr)->exist==1)
        {
            (*currentPtr)->count--;
            if((*currentPtr)->count==0)
                (*currentPtr)->exist=0;        
        }        
        else
        {
            Delete(&((*currentPtr)->left),value);
            Delete(&((*currentPtr)->right),value);        
        }    
    }
}
