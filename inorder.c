#include"inorder.h"
#include"struct.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Inorder(treeNode currentPtr) //LVR
{
    if(currentPtr!=NULL)
    {
        Inorder(currentPtr->left);       
        if(currentPtr->count>0 && currentPtr->exist)
            printf("%s\t%d\n",currentPtr->value,currentPtr->count);
        Inorder(currentPtr->right);             
    }        
}
