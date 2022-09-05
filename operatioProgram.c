//
// Created by Lenovo on 9/3/2022.
//


// OPERATION PROGRAM (A+b)-C)*D)/E
#include "stdio.h"


int main(){
    int data1,data2,add,sub,mul,div;

    int* pt1,* pt2;

    pt1=&data1;
    pt2=&data2;
    int total=0;
    char operation[5]={'+','-','*','/','\0'};

    printf(" Enter first number: ");
    scanf("%d",&data1);
    printf("Enter second number: ");
    scanf("%d",&data2);
    printf("Choose operator( +,-,*,/ ) : ");
    for (int i=0; operation[i] != '\0'; i++) {
        scanf(" %c", &operation[i]);
        if (operation[i] == '+') {
            add = data1 + data2;                                   //ADDITION STAGE
            printf("Result : %d\n", add);
            printf("Enter third number : ");
            scanf("%d", pt1);
            printf("Enter operation:");
            for (int a = 0; operation[a] != '\0'; a++) {
                scanf(" %c", &operation[a]);
                if (operation[a] == '-') {
                    sub = add - *pt1;                               //SUBTRACTION STAGE
                    printf("Total: %d\n", sub);
                    printf("Enter fourth number : ");
                    scanf("%d", pt2);
                    printf("Enter operation:");
                    for (int b = 0; operation[b] != '\0'; b++) {
                        scanf(" %c", &operation[b]);
                        if (operation[b] == '*') {
                            mul = sub * *pt2;                            //MULTIPLY STAGE
                            printf("Total: %d\n", mul);
                            printf("Enter fifth number : ");
                            scanf("%d", pt1);
                            printf("Enter operation:");
                            for (int c = 0; operation[c] != '\0'; c++) {
                                scanf(" %c", &operation[c]);
                                if (operation[c] == '/') {
                                    div = mul / *pt1;                             // DIVISION STAGE
                                    printf("The final result : %d", div);
                                }//   ပြန်ထွက်တာ အဆင်မပြေ ဖစ်နေလို့ဆရာ break သုံးတာလဲ မထွက်ဖစ်နေတယ် မပြီး သေးပဲ assignment တင်လိုက်ရတာ sorry ဆရာ
                                //    ကြည့်ပြီး အချိန်ရရင် ထွက်ရ အောင်ဘယ်လိုလုပ် လဲ ‌ေပြာပေးပါဉီး

                            }
                        }
                    }
                }
            }
        }
    }
        return 0;
    }
