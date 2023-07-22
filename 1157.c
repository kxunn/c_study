#include <stdio.h>
#include <string.h>

char a[1000005];
int arr[26];

int main(){
    int max = 0;
    int count;
    char b;
    int i;
    
    scanf("%s",a);
    count = strlen(a);

    for(int i=0;i<count;i++)
        if(a[i]>='a') arr[a[i]-'a']++;
        else arr[a[i]-'A']++;

    for(int i=0;i<26;i++)
        if(arr[i]==max){
            b = '?';
        }
        else if(arr[i]>max){
            max = arr[i];
            b = 'A'+i;
        }

    printf("%c",b);

    return 0;
}
