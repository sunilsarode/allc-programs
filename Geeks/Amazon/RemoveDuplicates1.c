#include <string.h>
int main()
{       
        char str[1000] = {0};
        char arr[256] = {0};
        
        int T, len;
        char tmp;
        int ip_index, res_index;
        scanf("%d\n",&T);
        
        while(T--) {
        ip_index = 0, res_index = 0;
        gets(str);
        while(*(str+ip_index)){
            tmp = *(str+ip_index);
            if(arr[tmp] == 0){
                arr[tmp] = 1;
                *(str + res_index) = *(str + ip_index);
                res_index++;
            }
            ip_index++;
        }
        str[res_index] = '\0';
        printf("%s\n", str);
        memset(str, 0, 1000);
        memset(arr, 0, 256);
        }
        return 0;
}
