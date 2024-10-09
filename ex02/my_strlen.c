 #include<stdio.h>
 int my_strlen(char* param_1){

    int counter=0;
    while (*param_1 != '\0') {
         counter++;
         param_1++;
    }
        
    return counter;
 }
   
