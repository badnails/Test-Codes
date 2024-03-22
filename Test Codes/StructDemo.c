
// C program for Demonstrating the use of
// Structure, Enumeration, Union and Bit Fields
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union restype{
    int mark;
    float cgpa;
};
struct personType{
    unsigned char bloodgroup : 2;
    unsigned char rhfactor : 1;
    unsigned char haircolor : 2;
    unsigned char eyecolor : 2;
};
enum tagtype { MARK, CGPA };
char* tagnames[2] = { "Mark", "CGPA"};
enum BLOOD { A, B, O, AB };
char* bloodgroup[4] = { "A", "B", "O", "AB"};
enum RH { POSITIVE, NEGATIVE };
char* rhnames[2] = { "+", "-"};
enum HAIR { RED, BLACK, BLOND, WHITE};
char* haircolor[4] = { "Red", "Black", "Blond", "White"};
enum EYE {EBLACK, GREEN, EWHITE, GREY};
char* eyecolor[4] = { "Black", "Green", "White", "Grey" };

struct student{
    char *name;
    int roll;
    enum tagtype tag;
    union restype result;
    struct personType profile;
};

int findcode(char *key, char ** table, int n){
    for (int i=0;i<n;i++){
        if (strcmp(key,table[i])==0) {
                return i;
        }
    }
}
void getStudent(struct student* a){
    //Getting input
    char marking[10],bloods[10],rh[10],hairs[10],eyes[10];
    printf("\n Give the name of the student:");
    scanf("%s",a->name);
    printf("\n Give the roll of the student:");
    scanf("%d",&a->roll);
    printf("\n Give the marking system of the student:");
    scanf("%s",marking);
    a->tag= findcode(marking,tagnames,2);
    if (a->tag==MARK){
        printf("\nGive the Mark:");
        scanf("%d",&a->result.mark);
    }
    else {
        printf("\nGive the CGPA:");
        scanf("%f",&a->result.cgpa);
    }
    printf("\n Give the Blood group of the student:");
    scanf("%s",bloods);
    a->profile.bloodgroup=findcode(bloods,bloodgroup,4);
    printf("\n Give the Blood Rh:");
    scanf("%s",rh);
    a->profile.rhfactor=findcode(rh,rhnames,2);
    printf("\n Give the Hair Color:");
    scanf("%s",hairs);
    a->profile.haircolor=findcode(hairs,haircolor,4);
    printf("\n Give the Eye Color:");
    scanf("%s",eyes);
    a->profile.eyecolor=findcode(eyes,eyecolor,4);
}
void printStudent (struct student a){
    printf("\nRoll:%d",a.roll);
    printf(" Name:%s",a.name);
    if (a.tag==MARK){
        printf(" Mark:%d",a.result.mark);
    }
    else printf(" CGPA:%.2f",a.result.cgpa);
    printf(" Blood Group:%s%s",bloodgroup[a.profile.bloodgroup],rhnames[a.profile.rhfactor]);
    printf(" Hair Color:%s",haircolor[a.profile.haircolor]);
    printf(" Eye Color:%s",eyecolor[a.profile.eyecolor]);
}
void structcpy (struct student* a,struct student* b){
    a->roll=b->roll;
    strcpy(a->name,b->name);
    a->tag=b->tag;
    if (a->tag==MARK) a->result.mark=b->result.mark;
    else a->result.cgpa=b->result.cgpa;
    a->profile.bloodgroup=b->profile.bloodgroup;
    a->profile.rhfactor=b->profile.rhfactor;
    a->profile.haircolor=b->profile.haircolor;
    a->profile.eyecolor=b->profile.eyecolor;
}
void initStruct(struct student* a){
    //Required to initialize the memory.
    a->name=(char*)malloc(30*sizeof(char));
}
void freStruct(struct student* a){
    free(a->name);
}
int main()
{
    struct student a[10];
    for (int i=0;i<3;i++){
        initStruct(&a[i]);
        getStudent(&a[i]);
    }
    for (int i=0;i<3;i++){
        printStudent(a[i]);
    }
    for (int i=0;i<3;i++){
        for (int j=i+1;j<3;j++){
            if (a[i].roll>a[j].roll){
                struct student t;
                initStruct(&t);
                structcpy(&t,&a[i]);
                structcpy(&a[i],&a[j]);
                structcpy(&a[j],&t);
                freStruct(&t);
            }
        }
    }
    for (int i=0;i<3;i++){
        printStudent(a[i]);
    }
    for (int i=0;i<3;i++){
        freStruct(&a[i]);
    }
    return 0;
}
