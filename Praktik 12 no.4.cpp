#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {	
#define INF 999
#define n 6
 int G[n][n]={{0,4,0,0,0,0}, {0,0,0,4,0,0}, {0,3,0,0,0,0}, {3,0,2,0,3,0}, {0,4,0,5,0,1}, 
{5,0,0,0,0,0}};
 int main()
 
 int tempGraf[n][n],jarak[n],visit[n],temp[n],count;
 while(1){
 printf("\n\n1. Tampilkan Matriks");
 printf("\n2. Cek jarak terdekat");
 printf("\n3. Exit");
 printf("\nMasukkan Pilihan: ");
 scanf("%d", &pilih);
 switch(pilih){
 case 1:
 for(i=0;i<n;i++)
 {
 for (j=0;j<n;j++)
 {
 printf(" %d ", Garis[i][j]);
 }
 printf("\n");
 }
 break; break;
 case 2:
 printf("Masukan Vertex Asal : ");
 scanf ("%d",&start);
 printf("Masukan Vertex Tujuan : ");
 scanf ("%d",&end);
 asal=start-1;
 tujuan=end-1;
 for(i=0;i<n;i++)
 {
 for (j=0;j<n;j++)
 {
 if (Garis[i][j] == 0){
 tempGraf[i][j] = INF;
 }
 else{
 tempGraf[i][j] = Garis[i][j];
 }
 }
 }
 for (i = 0;i<n;i++)
 {
 jarak[i] = tempGraf[asal][i];
 temp[i] = asal;
 visit[i] = 0;
 }
 jarak[asal] = 0;
 visit[asal] = 1;
 count =1;
 int jarakmin,nextvertex; while (count < n-1)
 {
 jarakmin = INF;
 for (i=0;i<n;i++)
 {
 if(jarak[i] < jarakmin && visit[i]!=1)
 {
 jarakmin = jarak[i];
 nextvertex = i;
 }
 }
 visit[nextvertex] = 1;
 for(i = 0;i<n;i++)
 {
 if(visit[i]!=1)
 {
 if(jarakmin+tempGraf[nextvertex][i]<jarak[i])
 {
 jarak[i] = jarakmin+tempGraf[nextvertex][i];
 temp[i] = nextvertex;
 }
 }
 }
 count++;
 }
 for (i = 0; i < n ;i++)
 {
 if(i!=asal && i==tujuan)
 {
 printf ("\nHasil jarak terdekat adalah %d\n",jarak[i]); j=i;
 printf ("%d<-",i+1);
 while(j!=asal)
 {
 j=temp[j];
 printf ("%d",j+1);
 if(j!=asal)
 {
 printf ("<-");
 }
 }
 }
 }
 break;
 case 3:
 return 0;
 break;
 }
 }
}
