#include"struct.h"
#include"insert.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Insert(treeNode *currentPtr,char* value)
{
    if(*currentPtr == NULL)
    {   
        *currentPtr = malloc(sizeof(Node));        

        if(*currentPtr!=NULL)
        {
            (*currentPtr)->count = 1;
            (*currentPtr)->exist = 1;
            strcpy((*currentPtr)->value,value);
            (*currentPtr)->left = NULL;
            (*currentPtr)->right = NULL;                           
        }
        else
            printf("no insert ~ malloc memory operation defeat\n");                    
    }                
    else
    {
        if(strcmp(value,(*currentPtr)->value)<0)
        {
            Insert(&((*currentPtr)->left),value);        
        }
        else if(strcmp(value,(*currentPtr)->value)>0)
        {
            Insert(&((*currentPtr)->right),value);                    
        }        
        else
        {
            if(!(*currentPtr)->exist)
            {
            	(*currentPtr)->count = 1;
             	(*currentPtr)->exist = 1;           	            
            }	
            else
            	(*currentPtr)->count++;

        }
    }                    
}
