#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>

#define pi 3.14

using namespace std;

int main()
{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d", a+b);

//    long long bignum;
//    bignum = 12345671231;
//    printf("%lld", bignum);

//    double d=1.2345612345;
//    printf("%.8f", d);

//    int a=48;
//    char c=a;
//    printf("%c",c);

//    int a=1, b=2, c=3;
//    printf("%d %d%d", a, b, c);
//    printf("%c", 7);

//    float f1=123.4, f2=123.4;
//    double d1=123.4, d2=123.4;
//    printf("%f\n%f\n", f1*f2, d1*d2);

//    double db=-12.34;
//    printf("%.2f", fabs(db));

//    double db1=-5.2, db2=5.2;
//    printf("%.0f %.0f\n", floor(db1), ceil(db1));
//    printf("%.0f %.0f\n", floor(db2), ceil(db2));

//    double db=pow(2.0,3.0);
//    printf("%f", db);

//    double db=sqrt(2.0);
//    printf("%f", db);

//    double db1=round(1.445);
//    printf("%d", int(db1));

    //扯牢快投快快扭妓
//    int a[5]={4,2,3,5,1};
//    for(int i=0;i<4;i++){
//        for(int j=0;j<4-i;j++){
//            int t;
//            if(a[j]>a[j+1]){
//                t=a[j];
//                a[j]=a[j+1];
//                a[j+1]=t;
//            }
//        }
//    }
//    for(int i=0;i<5;i++){
//        printf("%d ", a[i]);
//    }

//    int a[5]={1,2,3,4,5};
//    memset(a, 0, sizeof(a));
//    for(int i=0; i<5; i++){
//        printf("%d ", a[i]);
//    }

//    char str[10];
//    scanf("%s", str);
//    printf("%s", str);

//    char str[5][5];
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            str[i][j]=getchar();
//        }
//        getchar();
//    }
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            putchar(str[i][j]);
//        }
//        putchar('\n');
//    }

//    char str1[20];
//    char str2[5][20];
//    gets(str1);
//    for(int i=0;i<3;i++){
//        gets(str2[i]);
//    }
//    puts(str1);
//    for(int i=0;i<3;i++){
//        puts(str2[i]);
//    }

    int len;
    cout<<"size:"<<endl;
    cin>>len;
    int *p=new int[len];

    cout<<"value"<<endl;
    int val,i=0;
    for(i=0; i!=len; i++)
    {
        cin>>val;
        p[i]=val;
    }
    cout<<"out:"<<endl;
    for(i=0; i!=len; i++)
    {

        cout<<p[i]<<" ";
    }
    cout<<endl;







    return 0;

}
