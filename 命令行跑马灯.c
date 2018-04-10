#include<stdlib.h>//后面的system（）函数包含在stdlib.h头文件中 
#include<windows.h>//sleep（）等待函数在windows.h头文件中 
int main()
{
	while(1)//让屏幕一直闪烁 
	{
		//向cmd发送color 1f指令，改变窗口颜色，后同 
		system("color 1f");
		//sleep（100）让程序在此处暂停100毫秒，后同 
		Sleep(100);
		system("color 2f");
		Sleep(100);
		system("color 3f");
		Sleep(100);
		system("color 4f");
		Sleep(100);
		system("color 5f");
		Sleep(100);
		system("color 6f");
		Sleep(100);
		system("color 7f");
		Sleep(100);
		system("color 0f");
		Sleep(100);
	}
	return 0;
 } 
