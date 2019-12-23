#include<stdio.h>
int g(int a){return (a-31)%94+32;}char*f(char*a){char*b=a;while(*b){*b=g(*b);b++;}return a;}void main(){char a[]="#include<stdio.h>%cint g(int a){return (a-31)%c94+32;}char*f(char*a){char*b=a;while(*b){*b=g(*b);b++;}return a;}void main(){char a[]=%c%s%c;printf(a,10,37,34,f(a),34);}";printf(a,10,37,34,f(a),34);}
