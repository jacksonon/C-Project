//
//  SaveClass.c
//  C-Project
//
//  Created by jiawei  on 2017/3/1.
//  Copyright © 2017年 王家伟. All rights reserved.
//

#include <stdio.h>

//从别的文件导入的全局变量
extern int externCount;

void write_extern(void) {
    printf("extern method out : externCount = %d\n", externCount);
}
