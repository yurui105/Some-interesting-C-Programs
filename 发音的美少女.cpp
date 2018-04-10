#include <cstdio>
#include <windows.h>
#define qdo 262 
#define qre 294
#define qmi 330     //q前缀为低音，1后缀为高音，s前缀为半音阶 
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865

void music()
{
	int pai=400,ban=200;
int ting=128;

Sleep(1000);

Beep(la,ban);
Beep(si,ban);
Sleep(ting);

Beep(do1,pai+ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);

Beep(si,3*pai);
Sleep(ting);
Beep(mi,ban);
Beep(mi,ban);

Beep(la,ban+pai);
Beep(so,ban);
Sleep(ting);
Beep(la,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);

Beep(so,2*pai);
Sleep(ting);
Sleep(pai);
Beep(mi,ban);
Sleep(ting/2);
Beep(mi,ban);
Sleep(ting/2);

Beep(fa,pai+ban);
Beep(mi,ban);
Sleep(ting);
Beep(fa,ban);
Beep(do1,ban+pai);
Sleep(ting);

Beep(mi,2*pai);
Sleep(ting);
Sleep(ban);
Beep(do1,ban);
Sleep(ting/2);
Beep(do1,ban);
Sleep(ting/2);
Beep(do1,ban);
Sleep(ting/2);

Beep(si,ban+pai);
Beep(sfa,ban);
Sleep(ting);
Beep(sfa,pai);
Beep(si,pai);
Sleep(ting);

Beep(si,2*pai);
Sleep(ting);
Sleep(pai);
Beep(la,ban);
Beep(si,ban);
Sleep(ting);

Beep(do1,pai+ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);

Beep(si,2*pai);
Sleep(ting);
Sleep(pai);
Beep(mi,ban);
Sleep(20);
Beep(mi,ban);
Sleep(ting);

Beep(la,pai+ban);
Beep(so,ban);
Sleep(ting);
Beep(la,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);

Beep(so,3*pai);
Sleep(ting+ban);
Beep(mi,ban);
Sleep(ting/2);

Beep(fa,pai);
Sleep(ting);
Beep(do1,ban);
Beep(si,ban);
Sleep(20);
Beep(si,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);

Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(20);
Beep(mi1,ban);
Sleep(ting/2);
Beep(do1,pai);
Sleep(ting+pai);

Beep(do1,pai);
Beep(si,ban);
Sleep(ting);
Beep(la,ban);
Sleep(20);
Beep(la,ban);
Sleep(ting);
Beep(si,pai);
Sleep(ting);
Beep(sso,pai);
Sleep(ting);

Beep(sso,2*pai);
Sleep(ting+pai);
Beep(do1,ban);
Beep(re1,ban);
Sleep(ting);

Beep(mi1,pai+ban);
Beep(re1,ban);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);
Beep(fa1,pai);
Sleep(ting);

Beep(re1,2*pai);
Sleep(pai+ting);
Beep(so,ban);
Sleep(20);
Beep(so,ban);
Sleep(ting);

Beep(do1,ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);

Beep(mi1,2*pai);
Sleep(ting+2*pai);

Beep(la,ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(si,pai);
Sleep(ting);
Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(ting);

Beep(do1,pai+ban);
Beep(so,ban);
Sleep(20);
Beep(so,pai);
Sleep(pai+ting);

Beep(fa1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);
Beep(re1,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);

Beep(mi1,4*pai);

Beep(mi1,pai*2);
Sleep(pai+ting);
Beep(mi1,pai);
Sleep(ting);

Beep(la1,2*pai);
Sleep(ting);
Beep(so1,pai);
Sleep(ting);
Beep(so1,pai);
Sleep(ting);

Beep(mi1,ban);
Sleep(ting/2);
Beep(re1,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting+ban);
Beep(do1,ban);
Sleep(ting);

Beep(re1,pai);
Sleep(ting);
Beep(do1,ban);
Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(ting);
Beep(so1,pai);
Sleep(ting);

Beep(mi1,2*pai);
Sleep(ting+pai);
Beep(mi,pai);
Sleep(ting);

Beep(la1,2*pai);
Sleep(ting);
Beep(so1,2*pai);
Sleep(ting);

Beep(mi1,ban);
Beep(re1,ban);
Sleep(ting);
Beep(do1,2*pai);
Sleep(ting+ban);
Beep(do1,ban);
Sleep(ting);

Beep(re1,pai);
Sleep(ting);
Beep(do1,ban);
Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(ting);
Beep(si,pai);
Sleep(ting);

Beep(la,2*pai);
Sleep(ting);
Beep(la,ban);
Beep(si,ban);

Beep(do1,pai+ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);

Beep(si,3*pai);
Sleep(ting);
Beep(mi,ban);
Beep(mi,ban);

Beep(la,ban+pai);
Beep(so,ban);
Sleep(ting);
Beep(la,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);

Beep(so,2*pai);
Sleep(ting);
Sleep(pai);
Beep(mi,ban);
Sleep(ting/2);
Beep(mi,ban);
Sleep(ting/2);

Beep(fa,pai+ban);
Beep(mi,ban);
Sleep(ting);
Beep(fa,ban);
Beep(do1,ban+pai);
Sleep(ting);

Beep(mi,2*pai);
Sleep(ting);
Sleep(ban);
Beep(do1,ban);
Sleep(ting/2);
Beep(do1,ban);
Sleep(ting/2);
Beep(do1,ban);
Sleep(ting/2);

Beep(si,ban+pai);
Beep(sfa,ban);
Sleep(ting);
Beep(sfa,pai);
Beep(si,pai);
Sleep(ting);

Beep(si,2*pai);
Sleep(ting);
Sleep(pai);
Beep(la,ban);
Beep(si,ban);
Sleep(ting);

Beep(do1,pai+ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);

Beep(si,2*pai);
Sleep(ting);
Sleep(pai);
Beep(mi,ban);
Sleep(20);
Beep(mi,ban);
Sleep(ting);

Beep(la,pai+ban);
Beep(so,ban);
Sleep(ting);
Beep(la,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);

Beep(so,3*pai);
Sleep(ting+ban);
Beep(mi,ban);
Sleep(ting/2);

Beep(fa,pai);
Sleep(ting);
Beep(do1,ban);
Beep(si,ban);
Sleep(20);
Beep(si,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);

Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(20);
Beep(mi1,ban);
Sleep(ting/2);
Beep(do1,pai);
Sleep(ting+pai);

Beep(la,4*pai);

Sleep(1000);
 } 

int main()
{
	system("mode con cols=100 lines=50");
	//向cmd发送引号内的命令，改变窗口的大小，让图案完整的显示出来 
	system("color 4f");
	//初始化窗口颜色为红色，字体为白色 
	char ch;
	FILE *fp=fopen("1.txt","r");
	//有一个叫1.txt的文件，里面存着这个图案，通过FILE *函数将其读到内存中 
	while((ch=fgetc(fp))!=EOF)
	//循环读入字符，直到全部字符都读完 
		putchar(ch);
		//没读入一个字符便将其打印到屏幕上 
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
		music();
	}

}
