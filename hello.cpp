// Basic Syntax

// #include<iostream>
// int main(){
//     std::cout<<"Hello,"<<std::endl;
//     std::cout<<"World!"<<std::endl;
//     return 0;
// }

// Loops & Functions

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2==0){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }    


// Simple Calculator

// #include<iostream>
// int main(){
//     int a,b;
//     char oper;
//     printf("enter:");
//     scanf("%d %c %d",&a,&b,&oper);
//     switch(oper){
//         case'+':printf("%2d\n",a+b);
//     break;
//         case'-':printf("%2d\n",a-b);
//     break;
//         case'*':printf("%2d\n",a*b);
//     break;
//         case'/':b? printf("%2d\n",a/b):printf("error:div by 0\n");
//     break;
//         default: printf("invalid operator\n");
//     }
//     return 0;
// }

// Arrays & Functions

#include<stdio.h>
int FindLarg(int a[],int n){
    int larg=a[0];
    for(int i=1;i<n;i++)
    if (a[i]>larg) larg=a[i];
    return larg;
}
int main(){
    int i,n;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers:",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("largest: %d\n", FindLarg(a,n));
    return 0;
}