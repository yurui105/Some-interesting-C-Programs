#include<stdlib.h>//�����system��������������stdlib.hͷ�ļ��� 
#include<windows.h>//sleep�����ȴ�������windows.hͷ�ļ��� 
int main()
{
	while(1)//����Ļһֱ��˸ 
	{
		//��cmd����color 1fָ��ı䴰����ɫ����ͬ 
		system("color 1f");
		//sleep��100���ó����ڴ˴���ͣ100���룬��ͬ 
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
