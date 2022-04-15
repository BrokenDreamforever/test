//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf是输入函数
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//不安全的
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
////scanf   是c语言提供的
////scanf_s  不是标准c语言提供的，VS编译器提供的
////跨平台性、可移植性，scanf_s不能在gcc使用
////#define _CRT_SECURE_NO_WARNINGS  //放在开头就可以解决错误问题   放在源文件的开头
////我的电脑搜索newc+ +file 打开记事本输入#define _CRT_SECURE_NO_WARNINGS即可在开头显示
//
//
//int main()
//{
//	int num = 10;//1.变量 可变
//	//3;//是字面常量 不可赋予，不可变
//	//100；
//	printf("%d\n", num);
//  num = 2;
//	printf("%d\n", num);
//	return 0;
//}
//
//
////const - 2.是常属性 不可变，但是本质是常量
////错误代码如下
//int main()
//{
//	const int num = 10;// 不可变，但是本质是常量
//	//const int n = 10;// n是变量，但是又有常属性，所以我们说n是常变量
//	printf("%d\n", num);
//	num = 8;//错误，因为const是常属性，不可变成8
//	printf("%d\n", num);
//	return 0;
//}
////int arr[] - 之定义一个数组名 理解为变量的籍贯 只能放正整数
//
////#define  -  定义的标识符常量  可以在arr[]里面，是常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
////4.枚举常量
////枚举 - 一一列举
////例：性别：男，女，保密
////三原色：红，黄，蓝
////星期：1，2，3，4，5，6，7
//
//
////枚举关键字 - enum
//enum Sex
//{
//	enum Sex s = MALE;
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//
//
//
//enum Color
//{              // 大括号里的枚举常量是不能改的
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;     //但是通过枚举常量类型所创建的变量是可以改的例如color
//	color = YELLOW;  //例这个是可以改的，是通过枚举常量类型所创建的变量
//	//BUUE = 6  这个是错的，枚举常量是不可改的
//	printf("%d\n", RED);
//	printf("%d\n", YELLOW);
//	printf("%d\n", BLUE);
//	return 0;
//}
//双引号引起来的一串字符称为字符串字面值，简称为字符串。
//int main()
//{
//	char arr1[] = "abc";//数组，字符串,""含有\0,是字符串的结束标志，不算做字符串内容
//	char arr2[] = { 'a', 'b', 'c',0 };//不含0要加0表示\0
//	printf("%s\n", arr1);//%c是字符，%s是字符串
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//strlen - string length 是计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	int num = 10;  
//	printf("%d\n",num);
//	num = 1;
//	printf("%d\n", num);
//	return 0;
//}
// \n 是转行     // \t  是水平制表符  //  \\   是用于表示一个反斜杠，防止他被翻译为一个转义序列符 -比如\\ 打印出来就是\
//#include<stdio.h>
//int main()
//{
//	printf("c:\test\32\test.c");//错误的，需要转义字符
//	return 0;
//}
//int main()
//{
//	printf("c:\\test\\32\\test.c");
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\'');//打印'需要加上\
//	return 0;
//}
//int main()
//{
//	printf("%s\n", "\"");
//	return 0;
//}
//用到strlen需要#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}
// \ddd就代表1~3个八进制数字表示十进制对应的码对应的符号   例\32  32转换成十进制是3*8^1+2*8^0等于26
// \xdd  dd表示2个十六进制数字           十六进制是0~9加上A~F
//int main()
//{
//	printf("%c\n", '\32');
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\x32');
//	return 0;
//}
//int main()
//{	
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0)>:");//>:是提示符
//	scanf("%d", &input);
//	if (input == 1)          //=是赋值,==是判断相等
//		printf("好offer\n");
//	else//其他的
//		printf("卖红薯\n");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)//while是循环语句
//	{
//		printf("敲一行代码: %d\n", line);
//		line++;//line++是执行完语句后自己加一再返回重头执行，直到结束
//	}
//	if (line>20000)
//		printf("好offer\n");
//	return 0;
//}
//(二进制位操作）
// &  按位与
// |  按位或
// ^  按位异或
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//}
//赋值的两种
//a = a+10   把a+10赋值给a
//a+ = 10    给a自己加上10
//以上两种赋值相同
//a = a&2
//a& = 2
//复合赋值符    +=   -=   *=   /=	%=	>>=		<<=		&=		|=		^=		


//单目操作符 ！逻辑反操作  -负值 +正值 &取地址符号 sizeof操作数的类型长度（以字节为单位） ~对一个数的二进制按位取反 --前置、后置-- ++前置、后置++ *间接访问操作符（解引用操作符） （类型）强制类型转换
//int main()
//{
//	int a = 10;//    0表示假  1表示真
//	printf("%d\n", a);//打印10
//	printf("%d\n", !a);//打印0
//	return 0;
//}
//int main()
//{
//	int a = 0;//    0表示假  1表示真
//	printf("%d\n", a);//打印0
//	printf("%d\n", !a);//打印1
//	return 0;
//}
//-例int a = -2    如果a = +2  则+号省略
//int main()
//{
//	//sizeof           sizeof计算的是变量/类型所占空间的大小，单位是字节    strlen是计算字符串长度
//	int a = 10;
//	printf("%d\n", sizeof(a));//a所占4字节 
//	printf("%d\n", sizeof a);//可以打印出4，说明sizeof打印变量所占空间大小可以省略（）
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeofint);//打印错误，说明打印字符不能省略（）
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//十个整形元素的数组
//	int sz = 0;
//	printf("%d\n", sizeof(arr));//计算得40    10*4
//	//计算数组元素个数
//	//个数=数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);//得10    40/4
//	printf("%d\n", sz);
//	return 0;
//}
//双目操作符  例如a+b  +是双目操作符
//三目操作符
//
//int Add = (int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//（） 这个是函数调用操作符
//	return 0;
//}
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计"，55 };
//	printf("书名：%s\n", b1.name);
//	
//	return 0;
//}

#include<string.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计", 55 };
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d\n", b1.price);
//	//b1.price = 15;
//	//printf("修改后的价格：%d\n", b1.price);
//	//struct Book* pb = &b1;
//	//printf("%s\n", (*pb).name);//结构体变量.成员
//	//printf("%d\n", (*pb).price);
//	//printf("%s\n", pb->name);//结构体指针->成员
//	//printf("%d\n", pb->price);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s ", password);
//	//缓冲区还余一个\n,用getchar（）读走\n
//	getchar();
//	printf("请确认（Y/N）:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//int mian()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


int main()
{
	printf("hehe\n");
	main();
	return 0;
}