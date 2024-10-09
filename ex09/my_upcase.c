#include<stdio.h>
char* my_upcase(char* param_1)
{
    char* temp = param_1;
    while (*param_1 != '\0') {
        if (*param_1 >= 'a' && *param_1 <= 'z') {
            *param_1 = *param_1 - 32;
        }
        param_1++;
    }
    return temp;
}
//int main(){
  // printf("%s\n",my_upcase("aBc"));
  // printf("%s\n",my_upcase(""));


//} 