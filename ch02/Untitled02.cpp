#include<cstdio>
#include<cmath>

const double eps=1e-8;
const double Pi=acos(-1.0);

#define Equ(a,b)        ((fabs((a)-(b)))<(eps))         //等于
#define More(a,b)       (((a)-(b))>(eps))               //大于
#define Less(a,b)       (((a)-(b))<(-eps))              //小于
#define MoreEqu(a,b)    (((a)-(b))>(-eps))              //大于等于
#define LessEqu(a,b)    (((a)-(b))<(eps))               //小于等于

struct Point{
    int x, y;
    Point(){}
    Point(int _x, int _y):x(_x),y(_y){}
}pt[10];

int main(){
//    int num=0;
//    for(int i=1; i<=3; i++){
//        for(int j=1; j<=3; j++){
//            pt[num++]=Point(i,j);
//        }
//    }
//
//    for(int i=0;i<num;i++){
//        printf("%d,%d\n", pt[i].x, pt[i].y);
//    }


//    double db=1.23;
//    if(Equ(db, 1.23)){
//        printf("true");
//    }else{
//        printf("false");
//    }


    int a[5]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("%d", a[i]);
        if(i<4) printf("");
        else printf("\n");
    }


    return 0;
}



