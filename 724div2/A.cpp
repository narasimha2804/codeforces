#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   scanf("%d",&t);

   for(int i=0;i<t;i++){
       int n;
       scanf("%d",&n);
       int arr[n];
       int neg = 0;
       for(int j=0;j<n;j++){
           scanf("%d",arr+j);
           if(arr[j] <0 && neg == 0){
               printf("NO\n");
               neg = 1;
            
           }
       }
       if(neg == 0){
            printf("YES\n");
            sort(arr,arr+n);
            int diff = arr[1] - arr[0];
            if(diff != arr[0]){
                neg = 1;
            }
            for(int j=0;j<n-1;j++){
                if((arr[j+1] - arr[j]) == diff){

                }else{
                    neg = 1;
                    break;
                }
            }
            if(neg == 1){
                printf("%d\n",arr[n-1]+1);
                for(int j=0;j<=arr[n-1];j++){
                    printf("%d ",j);
                }
            }
            if(neg == 0){
                printf("%d\n",n);
                for(int j=0;j<n;j++){
                    printf("%d ",arr[j]);
                }
            }
           printf("\n");
       }
   }
}