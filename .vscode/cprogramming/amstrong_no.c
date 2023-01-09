//to check wether the no id an anstrong no or not
// a no of order n is a no in which each digit when multiplied by itself n no of times & finally added togther, esults the same no.

#include<stdio.h>
#include<math.h>
int main(){
    // first checking no of digits 
    int n,q;
    printf("enter the no");
    scanf("%d",&n);
    q=n;
    int count=0;
    while(q!=0){
        q=q%10;
        count++;
    }
//count has the no of digits
int r,result=0;
    while(q!=0){
        r=q%10;
        result=result+pow(r,count);
    }
if(result==n)
    printf("amstrong no");
else
    printf("not an anstrong no");

}