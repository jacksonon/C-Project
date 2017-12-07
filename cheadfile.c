// C头文件

// 引用头文件的操作
// #include <file>
// #include "file"

// 只引用一次头文件的操作
#ifndef HEADER_FILE
#define HEADER_FILE
// 引入的头文件。避免编译器2次引入头文件
#endif

// 有条件引用
#if SYSTEM_1
// 情况1
#elif SYSTEM_2
// 情况2
#elif SYSTEM_3
// 情况3
#endif