int my_string_index(char* haystack, char needle)
{   
    int counter = 0;
    while (*haystack!='\0') {
        if(*haystack==needle){
            return counter;
        }
        haystack++;
        counter++;
    }
    return -1;
}