//
//  main.c
//  C-Project
//
//  Created by jiawei  on 2017/2/27.
//  Copyright © 2017年 王家伟. All rights reserved.
//

#include <stdio.h>

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

//---方法的声明---
void baseLanguage(void);
void constValue(void);
void saveClass(void);
void func(void);
void useOtherFileMethodAndOtherUseCurrentParam(void);
void arithmeticOperator(void);
void logCValue(int value);

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
    
    return 0;
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
