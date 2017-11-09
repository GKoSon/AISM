#include <iostream>
#include<stdio.h>
using namespace std;


class TIME     
{
 public:
 int time;
 void (*function)(int);
 static void Time_Fun(int a);
};

void TIME::Time_Fun(int a)
{
 printf("%d\n",a);

}

class Son     
{
 public:
 int son;
 static void Son_Fun(int a);
};


void Son::Son_Fun(int a)
{
 printf("%d\n",a);
}

void User_Fun(int a)
{
    printf("%d\n",a);
}

int main()
{
        TIME test;
    Son gjh;
    gjh.Son_Fun(5);   

    test.function=User_Fun;
    test.function(6);

    test.function=&User_Fun;
    test.function(6);


    test.function=gjh.Son_Fun;
    test.function(7);

    test.function=&gjh.Son_Fun;
    test.function(7);

    test.function=test.Time_Fun;
    test.function(8);

    test.function=&test.Time_Fun;
    test.function(8);
}


class TIME     
{
public:
 int time;
 void (*function)(int);
};

void Son_Fun(int a)
{
    printf("%d\n",a);
}

int main()
{
    TIME test;   
    test.time=3;   
    test.function=Son_Fun;
    test.function(test.time);
}
