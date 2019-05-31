/* 計算機概論實務-進階練習作業-作業12 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/24 10:00 */
#include <stdio.h>  //函示庫 
#include <stdlib.h> //函示庫  
int main(void)
{
    FILE *pFile;  
    char ch;
    printf("計算機概論實務-進階練習作業-作業12\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/24 10:40\n");
	printf("-----------------------------------\n");	
    pFile=fopen("somebody.txt", "r"); //開檔 
    //SEEK_SET	從檔案開頭開始計算
    //SEEK_CUR	從指標目前位置向後計算 
    //SEEK_END	從檔案結尾向前計算
    fseek(pFile, 2, SEEK_SET);
    ch=fgetc(pFile); 
    printf("第 1 個fgetc() = %c\n", ch);
    fseek(pFile, 3, SEEK_CUR);
    ch=fgetc(pFile);
    printf("第 2 個fgetc() = %c\n", ch);
    fseek(pFile, -4, SEEK_END);
    ch=fgetc(pFile);
    printf("第 3 個fgetc() = %c\n", ch);
    fclose(pFile);//關檔 
    system("pause");//暫停視窗 
    return 0;//回傳值 0 
}
