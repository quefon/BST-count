#include"struct.h"
#include"insert.h"
#include"delete.h"
#include"find.h"
#include"inorder.h"
#include"count.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
int compare(const void *a, const void *b);

int main(int argc ,char* argv[])
{
    (void)argc;
    char choose[10], name[MAX];
    treeNode rootPtr = NULL;    
    FILE* fp =fopen(argv[1],"r+");
    
    while(EOF!=fscanf(fp,"%s",choose))
    {   
        
        if(strcmp(choose,"insert")==0)
        {
            fscanf(fp,"\t%s",name);            
            Insert(&rootPtr,name);         
        }      
        else if(strcmp(choose,"delete")==0)
        {
            fscanf(fp,"\t%s",name);
            Delete(&rootPtr,name);        
        }    
        else if(strcmp(choose,"find")==0)
        {
            fscanf(fp,"\t%s",name);
            Find(rootPtr,name);
        }    
        else if(strcmp(choose,"inorder")==0)
        {
            Inorder(rootPtr);       
        }    
        else if(strcmp(choose,"count")==0)
        {
      	    int n;
            Count(rootPtr);  
            n=i;
            qsort(p,n,sizeof(Node),compare);
            for(i=0;i<n;i++)
                printf("%s\t%d\n",p[i].temp,p[i].count);
        } 
        else if(strcmp(choose,"exit")==0)
        {
            printf("bye bye~\n");
            exit(1);
        }
        else
        {
            printf("inpur error~\n");
            continue;       
        }             
    }                               
}
int compare(const void *a, const void *b)
{   
    Node  *c = (Node *)a;  
    Node *d = (Node *)b;
    int la,lb;
    la = c->count;
    lb = d->count;
    if(la>lb)
        return -1;     
    else        
        return 1;  
}
