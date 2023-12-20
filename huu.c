#include <stdio.h>

void Greedy_Knapsack(int M) {
    int n1;
    printf("Enter the no of items");
    scanf("%d",&n1);
    int weight[n1];
    int price[n1];
    for(int k=0;k<n1;k++)
    {
        printf("Enter the price of item %d -:",k+1);
        scanf("%d",&price[k]);
         printf("Enter the weight of item %d -:",k+1);
        scanf("%d",&weight[k]);

    }
    int current_value;
    float total_value;
    int i, maximum;
    int used[n1];
    for (i = 0; i < n1; ++i)
    used[i] = 0;
    current_value = M;
    while (current_value > 0) {
        maximum = -1;
        for (i = 0; i < n1; ++i)
        if ((used[i] == 0) && ((maximum == -1) || (price[i]*1.0/weight[i] > price[maximum]*1.0/weight[maximum])))
        maximum = i;
        used[maximum] = 1;
        current_value -= weight[maximum];
        total_value += price[maximum];
        if (current_value >= 0)
        printf("Add object %d (₹%d, %d weight). Space left: %d.\n", maximum + 1, price[maximum], weight[maximum], current_value);
        else {
            printf("Add %d%% (₹%d, %d weight) of object %d.\n", (int)((1 + current_value*1.0/weight[maximum]) * 100), price[maximum], weight[maximum], maximum+ 1);
            total_value -= price[maximum];
            total_value += (1 + (float)current_value/weight[maximum]) * price[maximum];
        }

    }
    printf("Filled the knapsack with items worth ruppes %.2f.\n", total_value);
}
int main() {
int M;
printf("enter the size of knapsack");
scanf("%d",&M);
Greedy_Knapsack(M);
return 0; }
