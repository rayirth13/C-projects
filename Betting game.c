#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<process.h>
int main(){
    int balance=1000;
    int bet;
    int boss;
    int number;
    printf("Begin your bet\n");
      srand(_getpid());
    while(balance>0){
        if(bet>balance){
           printf("Error\n");
           continue;
        }
        sleep(2);
        boss=(rand())%6+1;
         printf("Begin your bet\n");
        scanf("%d",&bet);
        scanf("%d",&number);
        if(bet ==0){
            break;
        }
        else if(number==boss){
            balance+=bet;
            printf("Congratulations you won\n");
            printf("Balance=%d\n",balance);
        }
        else{
            balance=balance-bet;
            printf("Better luck next time\n");
            printf("Balance=%d\n",balance);
        }
    }
    printf("Balance is %d",balance);
}