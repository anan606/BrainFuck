#include<bits/stdc++.h>
using namespace std;
int n;
char s[300010],nw;
void pt(int x,char c){
    if(x<10){//С��10���ַ�ֱ����� 
        for(int i=1;i<=x;i++){
            putchar(c);
        }
        return;
    }
    int tot1=sqrt(x);//��Ϊ�������
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
    for(int i=1;i<=x;i++){//������ಿ�� 
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
    printf("����һЩ�ַ�(����������),�ҽ�����ת��Ϊbrainf**k(��з)Դ���룬������brainfuck_code.txt�С�\n");
    freopen("brainfuck_code.txt","w",stdout);
    gets(s+1);
    n=strlen(s+1);
    for(int i=1;i<=n;i++){
        print(s[i]);
    }
    return 0;
}
