/******************************************************************************
從鍵盤輸入你和你朋友的年齡，編成判斷誰的年齡最大，並列印最大者的年齡。
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a , b;
    printf("input you and your friend age \n");
    scanf("%d",&a);
    scanf("%d",&b);

    if(a > b)
    printf("you \n","%d", a);
           
    else if(a < b)
    printf("your friend \n","%d", b);
           
    
     return 0;
}
