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

int externCount;
//从别的文件导入的方法，可以直接进行调用
extern void write_extern();

void func(void);

static int count = 5;

int main(int argc, const char * argv[]) {
    
    //声明之后进行定义
    int i;
    //定义之后进行初始化
    i = 99;
    
    //const 形式定义常量:作用范围当前{}内
    const int WIDTH = 5;
    
    //auto:存储类是所有局部变量默认的存储类
    int mount;
    auto int month;
    
    //register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。寄存器只用于需要快速访问的变量，比如计数器。还应注意的是，定义 'register' 并不意味着变量将被存储在寄存器中，它意味着变量可能存储在寄存器中，这取决于硬件和实现的限制。
    register int miles;
    
    while (count--) {
        func();
    }
    
    externCount = 5;
    write_extern();
    
    return 0;
}

void func(void) {
    static int i = 5;
    i++;
    printf("i = %d, count = %d\n", i, count);
}
