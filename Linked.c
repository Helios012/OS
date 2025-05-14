#include<stdio.h> 
#include<conio.h> 
struct file 
{ 
 char fname[10]; 
 int start,size,block[10]; 
}f[10]; 
main() 
{ 
 int i,j,n; 
 printf("Enter no. of files:"); 
 scanf("%d",&n); 
 for(i=0;i<n;i++) 
 { 
 printf("Enter file name:"); 
 scanf("%s",&f[i].fname); 
 printf("Enter starting block:"); 
 scanf("%d",&f[i].start); 
 f[i].block[0]=f[i].start; 
 printf("Enter no.of blocks:"); 
 scanf("%d",&f[i].size); 
 printf("Enter block numbers:"); 
 for(j=1;j<=f[i].size;j++) 
 { 
 scanf("%d",&f[i].block[j]); 
 } 
 } 
 printf("File\tstart\tsize\tblock\n");
  for(i=0;i<n;i++) 
 { 
 printf("%s\t%d\t%d\t",f[i].fname,f[i].start,f[i].size); 
 for(j=1;j<=f[i].size-1;j++) 
  printf("%d--->",f[i].block[j]); 
 printf("%d",f[i].block[j]); 
 printf("\n"); 
 } 
} 
/* 
 output
 Enter no. of files: 2
Enter starting block and size of file 1: 2 5
Enter number of blocks occupied by file 1: 10
Enter blocks of file 1: 3
2 5 4 6 7 2 6 4 7
Enter starting block and size of file 2: 3 4
Enter number of blocks occupied by file 2: 5
Enter blocks of file 2: 2 3 4 5 6
*/
