#include<stdio.h>
#include<string.h>


int strLen(char *s){
    int i = 0;
    while(*(s+i)!='\0'){
        i++;
    }

    return i;
}
void factorial()
{
}
void strCat(char *s, char *t){
    int i = 0, j = 0;
    while(*(s+i)!='\0') i++;
    while(*(t+j)!='\0'){
        *(s+i)=*(t+j);
        i++;
        j++;
    }

}

char a[10];



int main(){
    

    // char s[10];
    // gets(s);

    // for(int i =0; i<strlen(s)/2; i++){
    //     s[i]=(char)((int)s[i]+(int)s[strlen(s)-1-i]);
    //     s[strlen(s)-1-i]=(char)((int)s[i]-(int)s[strlen(s)-1-i]);
    //     s[i]=(char)((int)s[i]-(int)s[strlen(s)-1-i]);
    // }

    // printf("%s", s);



    int m, n, o;
    scanf("%d %d %d", &m, &n, &o);
    int ma[m][n];
    int mb[n][o];



    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", ma[i][j]);
        }
        printf("\n");
    }




    
    
}