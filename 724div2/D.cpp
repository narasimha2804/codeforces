#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
       int arr[n];
       int less[n];
       for(int j=0;j<n;j++){
          scanf("%d",arr+j);
          less[j] = j;
       }
       int no=0;
      for(int j=0;j<n;j++){
          if(no == 1){
              break;
          }
          int loc = arr[j];
          int pos = 0;
          int eq = 0;
          for(int k=j-1;k>=0;k--){
              if(arr[k]<loc){
                pos = k+1;
                break;
              }
              if(arr[k] == loc){
                  pos = k+1;
                  eq = 1;
                  break;
              }
              int m = less[k+1];
              less[k+1] = less[k];
              less[k] =  m;
              arr[k+1] = arr[k];
              arr[k] = loc;
          }
          int rep = pos;
          for(int qw=pos+1;qw<j;qw++){
            if(less[qw]<(j+(qw-pos))){
               if(arr[qw] == arr[qw-1]){
                   less[qw] = less[qw-1];
                   pos++;
               }else{
                   less[qw] = j+qw-pos;
                   if(less[qw]>=(2*j +1)){
                       printf("NO\n");
                       no = 1;
                       break;
                   }
               }
            }
            if(less[qw]>=(2*j +1)){
                       printf("NO\n");
                       no = 1;
                       break;
                   }
           
          }
          pos = rep;
          for(int qw=pos-1;qw>=0 && no==0;qw--){
             if(less[qw]>(j-(pos-qw))){
                 if(arr[qw] == arr[qw+1]){
                     if(less[qw] > less[qw+1]){
                         printf("N0\n");
                         no = 1;
                         break;
                     }else{
                         less[qw] = less[qw+1];
                         pos--;
                     }
                 }else{
                     printf("NO\n");
                     no = 1;
                     break;
                 }
             }
             else if(arr[qw] == arr[qw+1]){
                 less[qw] = less[qw+1];
                 pos--;
             }
          }
      }
      if(no == 0){
          printf("YES\n");
      }
    }
}