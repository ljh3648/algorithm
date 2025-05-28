#include <stdio.h>

int main(void){
    int total_price; // X
    int total_pcs; // N
    int price; // a
    int pcs; // b
    int check_total_price = 0;
    
    scanf("%d", &total_price);
    scanf("%d", &total_pcs);
    
    for(int i = 0; i < total_pcs; i++){
        scanf("%d %d", &price, &pcs);
        check_total_price += (price * pcs);
    }
    
    if(check_total_price == total_price) printf("Yes");
    else printf("No");
    
    return 0;
}