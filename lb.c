#include<stdio.h>
int main(){
    int in,out,n,bsize,bucket;
    printf("Enter the bucket size : ");
    scanf("%d",&bsize);
    printf("Enter the no. of inputs : ");
    scanf("%d",&n);
    printf("Enter the outgoing  :");
    scanf("%d",&out);
    while(n!=0){
        printf("\nEnter the incoming rate :");
        scanf("%d",&in);    
        printf("incoming packet size is %d: \n",in);
        if(in<=(bsize-bucket)){
            bucket+=in;
            printf("Bucket status : %d out of %d \n",bucket,bsize);
        }    
        else{
            printf("Dropped packets %d \n ",in-(bsize-bucket));
            printf("Bucket status : %d out of %d \n",bucket,bsize);
            bucket=bsize;
        }
        bucket=bucket-out;
        printf("After going out,bucket status: %d out of %d \n\n",bucket,bsize);
        n--;
    }
}