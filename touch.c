// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim(char name[],int size){
    int len = strlen(name);
    if(len > 0 && name[len - 1] == '\n'){
        name[len - 1 ] = '\0';
    }
}

int main() {
    int nth;
    int xth;
    printf("How many space you want to allocate?\n");
    scanf("%d",&nth);
    int *m = (int*)malloc(nth*sizeof(int));
    
    
    for(int i = 0; i < nth; i++){
        printf("Element #%d: ",i+1);
        scanf("%d",(m+i));
        
    }
    
    for(int i = 0; i < nth; i++){
        printf("%d ",*(m+i));
        
    }    
    getchar();

    char op[10];
    printf("\nDo you want to put more values?(yes/no)\n");
    fgets(op,sizeof(op),stdin);
    trim(op,sizeof(op));
    
    if(strcmp(op,"yes") == 0){
        printf("\n\nAllocating 2 byte memory more!\n");
        
    }else if(strcmp(op,"no") == 0){
        printf("Ok terminating program\n");
        return 1;
    }else{
        printf("What the fudge is that?");
        return 1;
    }
    
    printf("\n========2nd part==========\n");
    
    m = realloc(m,(2 + nth)*sizeof(int));
    
    for(int i = nth; i < (nth + 2 ); i++){
        printf("Element #%d: " ,(nth - 1) + i);
        scanf("%d",(m + i));
    }
    
    printf("So numbers were stored are:\n ");
    for(int i = 0; i < (nth + 2 ); i++){
        printf("%d ",*(m + i));
    }
    
    
    // again remember syntax for realloc!
    // put getchar() immidiately after doing something with scanf
    //so that you can use fgets.
  free(m);
    return 0;
}
