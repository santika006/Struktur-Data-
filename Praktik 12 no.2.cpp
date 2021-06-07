//SANTIKA LANA HAYATI
//20051397006
//2020B_D4MI

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
#define N 5
int V[N]={1,2,3,4,5};
int E[N][N]={
 {0,4,0,0,5},
 {4,0,3,7,9},
 {0,3,0,2,0},
 {0,7,2,0,3},
 {5,9,0,3,0}
};
typedef struct edge{
 int VNext;
 int Weight;
 struct edge *next;
}LinkedList;
typedef struct{
int Vertices[N];
int Edges[N];
LinkedList *EFront, *ERear;
}Graph;
void jalur(Graph *G, int i){
 printf("\n%d : ", V[i]);
 while(G->EFront!=NULL){
 printf("--------> %d,%d : ", G->EFront->VNext, G->EFront->Weight);
 G->EFront=G->EFront->next; }
}
void dataGraph(Graph *G, int i){
 int j;
 LinkedList *ptr;
 for(j=0;j<N;j++){
 if(E[i][j]>0){
 ptr = (LinkedList *)malloc(sizeof(LinkedList));
 ptr->VNext = V[j];
 ptr->Weight = E[i][j];
 ptr->next = NULL;
 if(G->EFront==NULL)
 G->EFront = G->ERear = ptr;
 else{
 G->ERear->next = ptr;
 G->ERear = ptr;
 }
 }
 }
}
int main()
{
 int i, j;
 Graph G[N];
 for(i=0;i<N;i++){
 for(j=0;j<N;j++){
 if(E[i][j]>0)
 printf("(%d,%d)=%d\n", V[i], V[j], E[i][j]);
 }Output
Analisis
Pada program ini digunakan 3 libraries yaitu stdio.h, stdlib.h, dan malloc.h. Kemudian 
N didefinisikan secara global yaitu bernilai 5. Terdapat pendeklarasian variabel V yang 
mempunyai array N yang bernilai {1, 2, 3, 4, 5}.
Kemudian terdapat typedef struct edge yang memuat pendeklarasian variabel VNext 
dan Weight yang bertipe integer dan variabel edge *next yang bertipe struct. Setelahnya 
terdapat typedef struct yang memuat variabel Vartices [N] dan Edges [N] yang bertipe 
integer.
 }
 for(i=0;i<N;i++){
 G[i].EFront=NULL;
 dataGraph(&G[i], i);
 jalur(&G[i], i);
 }
	return 0;
}
