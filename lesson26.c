#include <stdio.h>
#include <locale.h>

int main(void){
    
    setlocale(LC_ALL, "");

    struct lconv *lInfo = localeconv();

    printf("Your Currency: %s\n", lInfo->int_curr_symbol);
    printf("Your Symbol: %s\n", lInfo->currency_symbol);

    return 0;
}
