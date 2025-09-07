#include<stdio.h>
int main(){
    int expenses,income;
    printf("Enter your monthly expenses: \n");
    scanf("%d", &expenses);
    
    printf("Enter your monthly income: \n");
    scanf("%d", &income);

    int savings=income - expenses;
    printf("Remaining money: %d\n",savings);
    printf("Remarks->");
    if(savings >=0){
        printf("Congrats your savings for this month are: %d",savings);
    }
    else{
        printf("You need to cut unnecessary expenses");
    }
    return 0;
}