#include<bits/stdc++.h>
using namespace std;
int n;
char s[300010],nw;
void pt(int x,char c){
    if(x<10){//小于10个字符直接输出 
        for(int i=1;i<=x;i++){
            putchar(c);
        }
        return;
    }
    int tot1=sqrt(x);//分为两份输出
    int tot2=tot1;
    for(;tot1*tot2<=x;tot2++);
    tot2--;
    x-=tot1*tot2; 
    putchar('>');
    for(int i=1;i<=tot1;i++){
        putchar('+');
    }
    printf("[<");
    for(int i=1;i<=tot2;i++){
        putchar(c);
    }
    printf(">-]<");
    for(int i=1;i<=x;i++){//输出多余部分 
        putchar(c);
    }
}
void print(char c){
    if(c>nw){
        pt(c-nw,'+');
        nw=c;
    }else{
        pt(nw-c,'-');
        nw=c;
    }
    cout<<".";
}
int main(){
    printf("输入一些字符(不包括换行),我将把它转化为brainf**k(河蟹)源代码，保存在brainfuck_code.txt中。\n");
    freopen("brainfuck_code.txt","w",stdout);
    gets(s+1);
    n=strlen(s+1);
    for(int i=1;i<=n;i++){
        print(s[i]);
    }
    return 0;
}
