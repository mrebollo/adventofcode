#include <stdio.h>

typedef struct{
    char[60] crates;
    int top;
} stacks;

void loadworld(){

}

int iscrate(char c){
    return c >='A' && c<='Z';
}


void 
int main(){
    stacks stack[9];
    int i;
    FILE *fd = fopen("sample.txt","r"j;
    for(i=0;i<9; stack[i++].top=0)
    ;
    while(fgets(line,50,fd)!= NULL){
        for(i=0; i<8; i++){
            idx = 4*i+1;
            if(iscrate(line[idx])){
                stack[i].crates[stack[i].top++]= line[idx];
            }
            
        }

    }


    return 0;
}