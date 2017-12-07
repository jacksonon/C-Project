#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
 
   fp = fopen("/tmp/test.txt", "w+");

   // 写入文件
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);

   // 读取文件
   char buff[255];
   fp = fopen("/tmp/test.txt", "r");
   fscanf(fp, "%s", buff);// 遇见空格停
   printf("1:%s\n", buff);

   fgets(buff, 255, (FILE*)fp);// 遇见换行停
   printf("2:%s\n", buff);

   fgets(buff, 255, (FILE*)fp);
   printf("3:%s\n", buff);
   fclose(fp);

}

/*
二进制IO函数：
size_t fread(void *ptr, size_t size_of_elements, 
             size_t number_of_elements, FILE *a_file);
              
size_t fwrite(const void *ptr, size_t size_of_elements, 
             size_t number_of_elements, FILE *a_file);
*/