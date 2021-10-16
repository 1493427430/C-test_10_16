#include<stdio.h>
int main()
{
	int a = 100;
	int b = 32;
	float f=3.1415;
	double d=123.123456789;
	char ch = 84;
	
	printf("姓名：陈杨    班级：2102!\n");
	printf("学号：215501020302\n");
	printf("%c\n",13);
	printf("◆◆◆◆◆◆◆◆◆◆格式输出printf函数应用作业如下◆◆◆◆◆◆◆◆◆◆\n");
	printf("%c\n", 13);
	printf("%c%c", 32,32);
	printf("a的值是%d\n", a);
	printf("%c\n", 13);
	printf("%c%c", 32, 32);
	printf("b中十进制32的八进制数是%o\n", b);
	printf("%c\n", 13);
	printf("%c%c", 32, 32);
	printf("f=%.6f\n", f);
	printf("%c\n", 13);
	printf("%c%c", 32, 32);
	printf("f=%.2f\n",f);
	printf("%c\n", 13);
	printf("%c%c", 32, 32);
	printf("f=%10.2f\n",f);
	printf("%c\n", 13);
	printf("%c%c", 32, 32);
	printf("d=%.6lf\n",d);
	printf("%c\n", 13);
	printf("%c%c", 32, 32);
	printf("d=%.9lf\n",d);
	printf("%c\n", 13);
	printf("%c%c", 32, 32);
	printf("ch=%d\n",ch);
	printf("%c\n", 13);
	printf("%c%c", 32, 32);
	printf("ch中存放的字符的小写形式为：%c\n",ch+=32);
	printf("%c\n", 13);
	printf("◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆结束◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆");
	printf("%c\n", 13); 
		return 0;
}
