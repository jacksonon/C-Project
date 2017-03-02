//
//  main.c
//  C-Project
//
//  Created by jiawei  on 2017/2/27.
//  Copyright © 2017年 王家伟. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//声明，不是定义
extern int i;
//声明 && 定义
int j;

//define 形式定义常量:作用范围整个函数
#define LENGTH 10

//声明&&定义函数。可以被其它函数调用
int externCount;
//从别的文件导入的方法，可以直接进行调用
extern void write_extern();

//全局变量
static int count = 5;
//全局变量
int g;

/*
struct [structure tag]
{
    member definition;
    member definition;
    ...
    member definition;
} [one or more structure variables];
 */
//结构体
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

/*
 union [union tag]
 {
 member definition;
 member definition;
 ...
 member definition;
 } [one or more union variables];
 */
//共用体
union Data {
    int i;
    float f;
    char str[20];
};

//---方法的声明---
void baseLanguage(void);
void constValue(void);
void saveClass(void);
void func(void);
void useOtherFileMethodAndOtherUseCurrentParam(void);
void arithmeticOperator(void);
void logCValue(int value);
void infiniteLoop(void);
void cFunction(void);
void localVariable(void);
void arrayInfo(void);
void adressAcess(void);
void charInfo(void);
void structFucn(void);
void printBook(struct Books *book);
void unionFunc(void);

int main(int argc, const char * argv[]) {
    
    //基本语法
    baseLanguage();
    
    //常量
    constValue();
    
    //存储类
    saveClass();
    
    //跨c调用
    useOtherFileMethodAndOtherUseCurrentParam();
    
    //算数运算符方法调用
    arithmeticOperator();
    
    //无限循环
    infiniteLoop();
    
    //函数
    cFunction();
    
    //局部变量
    localVariable();
    
    //数组
    arrayInfo();
    
    //访问地址、指针
    adressAcess();
    
    //字符串
    charInfo();
    
    //结构体
    structFucn();
    
    //共用体
    unionFunc();
    
    return 0;
}

//共用体
void unionFunc(void) {
    
    //输出内存大小
    union Data data;
    printf("Memory size = %lu\n", sizeof(data));
    
    //同一时间只可以使用共用体内一个成员
    data.i = 10;
    printf("Data.i = %d\n", data.i);
    data.f = 220.5;
    printf("data.f = %f\n", data.f);
    strcpy(data.str, "C Programing");
    printf("data/str = %s\n", data.str);
    printf("Data.i = %d ; data.f = %f ; data/str = %s", data.i, data.f, data.str);
}

//结构体作为函数参数
void printBook(struct Books *book) {
    printf( "Book title : %s\n", book->title);
    printf( "Book author : %s\n", book->author);
    printf( "Book subject : %s\n", book->subject);
    printf( "Book book_id : %d\n", book->book_id);
}

//结构体
void structFucn(void) {
    struct Books Book1;        /* 声明 Book1，类型为 Book */
    struct Books Book2;        /* 声明 Book2，类型为 Book */
    
    /* Book1 详述 */
    strcpy( Book1.title, "C Programming");
    strcpy( Book1.author, "Nuha Ali");
    strcpy( Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;
    
    /* Book2 详述 */
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Zara Ali");
    strcpy( Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;
    
    /*
    // 输出 Book1 信息
    printf( "Book 1 title : %s\n", Book1.title);
    printf( "Book 1 author : %s\n", Book1.author);
    printf( "Book 1 subject : %s\n", Book1.subject);
    printf( "Book 1 book_id : %d\n", Book1.book_id);
    
    //输出 Book2 信息
    printf( "Book 2 title : %s\n", Book2.title);
    printf( "Book 2 author : %s\n", Book2.author);
    printf( "Book 2 subject : %s\n", Book2.subject);
    printf( "Book 2 book_id : %d\n", Book2.book_id);
    */
     
    //调用输出结构体方法
    printBook(&Book1);
    printBook(&Book2);
}

//字符串
void charInfo(void) {
    char greeting0[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting1[] = "Hello";
    printf("Greeting0 message: %s\n", greeting0 );
    printf("Greeting1 message: %s\n", greeting1 );
    
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    unsigned long int  len ;
    
    /* 复制 str1 到 str3 */
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3 );
    
    /* 连接 str1 和 str2 */
    strcat( str1, str2);
    printf("strcat( str1, str2):   %s\n", str1 );
    
    /* 连接后，str1 的总长度 */
    len = strlen(str1);
    printf("strlen(str1) :  %lu\n", len );
}

//访问地址
void adressAcess(void) {
    int var1;
    char var2[10];
    printf("var1 变量的地址： %x\n", &var1);
    printf("var2 地址 %x\n", &var2);
    
    int var = 20;
    int *ip;
    ip = &var;
    printf("Address of var variable: %x\n", &var  );
    /* 在指针变量中存储的地址 */
    printf("Address stored in ip variable: %x\n", ip );
    /* 使用指针访问值 */
    printf("Value of *ip variable: %d\n", *ip );
    
    int  *ptr = NULL;
    printf("ptr 的值是 %x\n", ptr  );
}

//数组
void arrayInfo(void) {
    //type arrayName [ arraySize ];
    
    //声明数组
    int balance[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double newBalance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    
    balance[4] = 40;
    int use = balance[4];
    printf("%d", use);
    
    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", newBalance[i]);
    }
    
}

//局部变量
void localVariable(void) {
    
    /*
    数据类型	初始化默认值
    int	0
    char	'\0'
    float	0
    double	0
    pointer	NULL
     */
    
    //局部变量声明
    int a, b;
    int c;
    
    //初始化
    a = 10;
    b = 20;
    c = a + b;
    g = a + b;
    
    printf("a = %d ; b = %d ; c = %d ; g = %d\n", a, b, c, g);
    
}

//函数:
void cFunction(void) {
    printf("我都已经用了这么多函数了，你还想让我说什么？\n");
    
    char info[] = "return_type function_name( parameter list ) {\n    body of the function\n}\n";
    printf("%s", info);
}

//无限循环:C程序员偏向 ctrl + c 停止循环
void infiniteLoop(void) {
    int limit = 100;
    for (; ; ) {
        printf("无限循环 limit = %d \n", limit);
        limit--;
        if (limit == 0) {
            return;
        } else {
            continue;
        }
    }
}

//调用其它文件方法，其它文件调用本文件参数
void useOtherFileMethodAndOtherUseCurrentParam(void) {
    externCount = 5;
    write_extern();
}

//算数运算符
void arithmeticOperator(void) {
    int a = 21;
    int b = 10;
    int c;
    
    c = a + b;
    logCValue(c);
    c = a - b;
    logCValue(c);
    c = a * b;
    logCValue(c);
    c = a / b;
    logCValue(c);
    c = a % b;
    logCValue(c);
    c = a++;
    logCValue(c);
    c = a--;
    logCValue(c);
}

//Conflicting types for '' --> 没有先做函数声明，而函数位于main()之后、头文件循环引用、通文件声明和定义参数不同
void logCValue(int value) {
    printf("输出 c = %d \n", value);
}

void saveClass(void) {
    //auto:存储类是所有局部变量默认的存储类,只能用在函数内，auto只能修饰局部变量
    int mount;
    auto int month;
    
    //register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。寄存器只用于需要快速访问的变量，比如计数器。还应注意的是，定义 'register' 并不意味着变量将被存储在寄存器中，它意味着变量可能存储在寄存器中，这取决于硬件和实现的限制。
    register int miles;
    
    //简单赋值
    mount = 1;
    month = 03;
    miles = 10;
    
    //调用方法，使用全局变量static，进行数据计算
    while (count--) {
        func();
    }
}

//static 存储类
void func(void) {
    static int i = 5;
    i++;
    printf("i = %d, count = %d\n", i, count);
}

void constValue(void) {
    //const 形式定义常量:作用范围当前{}内
    const int WIDTH = 5;
    
    int area;
    area = WIDTH * LENGTH;
    printf("常量定义且使用 are = %d", area);
}

void baseLanguage(void) {
    //声明之后进行定义
    int i;
    //定义之后进行初始化
    i = 99;
    
    printf("基本语法 定义声明赋值 i = %d", i);
}
