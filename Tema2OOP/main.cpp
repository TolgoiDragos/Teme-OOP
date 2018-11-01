#include <iostream>
#include<string.h>
using namespace std;
//2
struct student{
string name;
int degree;
}student1,student2;

template <typename st1>
st1 Max(st1 a , st1 b){
    return a < b ? b : a ;
}
//1
int f(float n,bool isRoundedTo100=false)
{
    if(isRoundedTo100==false)
    if((int)n+0.5>=(int)n)
        n=(int)n+1;
    else
        n=(int)n;
    else
    {
        if((int)n%100 < 50)
            n=(int)n-(int)n%100;
        else
            n=(int)n+(100-(int)n%100);
    }
return n;
}
// 3
int f(int x){
    return sizeof(x);
}

int f(double x){
    return sizeof(x);
}

int f(char* x){

    return strlen(x);
}

//4
char f2(int a){
    while(a>9)
        a=a/10;
    return a ;
}

char f2(long a){
    while(a>9)
        a=a/10;
    return a ;
}

char f2(char *s){
    return s[0];

//6
template <typename S>
S suma( S s1,S s2 ,S s3){
    int sum= max(s1,s2);
    return max(sum ,s3); // chestie template returneaza kea mai mare dintre s1 , s2 si s3
}
//7
template <typename Q>
Q schimba( Q v1,Q v2){
    int aux = v1;
    v1 = v2;
    v2 = aux;
    cout <<v1<<" "<<v2; // template face metoda paharelor intre v1 si v2
}
//8
struct pisica{
    char nume[20],stapan[20];
    int age;

};

struct persoana{
    char nume[20],prenume[20];
    int age;
};

struct masina{
    char marca[20] , nrInmatrculare[20];
    int age;
};
int main()
{
    float n;

    cin>>n;
    cout<<f(n,1)<<endl;
    cin>>student1.degree;
    cin>>student2.degree;
    cout<<Max(student1.degree,student2.degree )<<endl;

    cout<<sizeof(n);
}

