//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf�����뺯��
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//����ȫ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
////scanf   ��c�����ṩ��
////scanf_s  ���Ǳ�׼c�����ṩ�ģ�VS�������ṩ��
////��ƽ̨�ԡ�����ֲ�ԣ�scanf_s������gccʹ��
////#define _CRT_SECURE_NO_WARNINGS  //���ڿ�ͷ�Ϳ��Խ����������   ����Դ�ļ��Ŀ�ͷ
////�ҵĵ�������newc+ +file �򿪼��±�����#define _CRT_SECURE_NO_WARNINGS�����ڿ�ͷ��ʾ
//
//
//int main()
//{
//	int num = 10;//1.���� �ɱ�
//	//3;//�����泣�� ���ɸ��裬���ɱ�
//	//100��
//	printf("%d\n", num);
//  num = 2;
//	printf("%d\n", num);
//	return 0;
//}
//
//
////const - 2.�ǳ����� ���ɱ䣬���Ǳ����ǳ���
////�����������
//int main()
//{
//	const int num = 10;// ���ɱ䣬���Ǳ����ǳ���
//	//const int n = 10;// n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	printf("%d\n", num);
//	num = 8;//������Ϊconst�ǳ����ԣ����ɱ��8
//	printf("%d\n", num);
//	return 0;
//}
////int arr[] - ֮����һ�������� ���Ϊ�����ļ��� ֻ�ܷ�������
//
////#define  -  ����ı�ʶ������  ������arr[]���棬�ǳ���
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
////4.ö�ٳ���
////ö�� - һһ�о�
////�����Ա��У�Ů������
////��ԭɫ���죬�ƣ���
////���ڣ�1��2��3��4��5��6��7
//
//
////ö�ٹؼ��� - enum
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
//{              // ���������ö�ٳ����ǲ��ܸĵ�
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;     //����ͨ��ö�ٳ��������������ı����ǿ��Ըĵ�����color
//	color = YELLOW;  //������ǿ��Ըĵģ���ͨ��ö�ٳ��������������ı���
//	//BUUE = 6  ����Ǵ�ģ�ö�ٳ����ǲ��ɸĵ�
//	printf("%d\n", RED);
//	printf("%d\n", YELLOW);
//	printf("%d\n", BLUE);
//	return 0;
//}
//˫������������һ���ַ���Ϊ�ַ�������ֵ�����Ϊ�ַ�����
//int main()
//{
//	char arr1[] = "abc";//���飬�ַ���,""����\0,���ַ����Ľ�����־���������ַ�������
//	char arr2[] = { 'a', 'b', 'c',0 };//����0Ҫ��0��ʾ\0
//	printf("%s\n", arr1);//%c���ַ���%s���ַ���
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//strlen - string length �Ǽ����ַ������ȵ�
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
// \n ��ת��     // \t  ��ˮƽ�Ʊ��  //  \\   �����ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з� -����\\ ��ӡ��������\
//#include<stdio.h>
//int main()
//{
//	printf("c:\test\32\test.c");//����ģ���Ҫת���ַ�
//	return 0;
//}
//int main()
//{
//	printf("c:\\test\\32\\test.c");
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\'');//��ӡ'��Ҫ����\
//	return 0;
//}
//int main()
//{
//	printf("%s\n", "\"");
//	return 0;
//}
//�õ�strlen��Ҫ#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}
// \ddd�ʹ���1~3���˽������ֱ�ʾʮ���ƶ�Ӧ�����Ӧ�ķ���   ��\32  32ת����ʮ������3*8^1+2*8^0����26
// \xdd  dd��ʾ2��ʮ����������           ʮ��������0~9����A~F
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
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0)>:");//>:����ʾ��
//	scanf("%d", &input);
//	if (input == 1)          //=�Ǹ�ֵ,==���ж����
//		printf("��offer\n");
//	else//������
//		printf("������\n");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)//while��ѭ�����
//	{
//		printf("��һ�д���: %d\n", line);
//		line++;//line++��ִ���������Լ���һ�ٷ�����ͷִ�У�ֱ������
//	}
//	if (line>20000)
//		printf("��offer\n");
//	return 0;
//}
//(������λ������
// &  ��λ��
// |  ��λ��
// ^  ��λ���
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//}
//��ֵ������
//a = a+10   ��a+10��ֵ��a
//a+ = 10    ��a�Լ�����10
//�������ָ�ֵ��ͬ
//a = a&2
//a& = 2
//���ϸ�ֵ��    +=   -=   *=   /=	%=	>>=		<<=		&=		|=		^=		


//��Ŀ������ ���߼�������  -��ֵ +��ֵ &ȡ��ַ���� sizeof�����������ͳ��ȣ����ֽ�Ϊ��λ�� ~��һ�����Ķ����ư�λȡ�� --ǰ�á�����-- ++ǰ�á�����++ *��ӷ��ʲ������������ò������� �����ͣ�ǿ������ת��
//int main()
//{
//	int a = 10;//    0��ʾ��  1��ʾ��
//	printf("%d\n", a);//��ӡ10
//	printf("%d\n", !a);//��ӡ0
//	return 0;
//}
//int main()
//{
//	int a = 0;//    0��ʾ��  1��ʾ��
//	printf("%d\n", a);//��ӡ0
//	printf("%d\n", !a);//��ӡ1
//	return 0;
//}
//-��int a = -2    ���a = +2  ��+��ʡ��
//int main()
//{
//	//sizeof           sizeof������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�    strlen�Ǽ����ַ�������
//	int a = 10;
//	printf("%d\n", sizeof(a));//a��ռ4�ֽ� 
//	printf("%d\n", sizeof a);//���Դ�ӡ��4��˵��sizeof��ӡ������ռ�ռ��С����ʡ�ԣ���
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeofint);//��ӡ����˵����ӡ�ַ�����ʡ�ԣ���
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//ʮ������Ԫ�ص�����
//	int sz = 0;
//	printf("%d\n", sizeof(arr));//�����40    10*4
//	//��������Ԫ�ظ���
//	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);//��10    40/4
//	printf("%d\n", sz);
//	return 0;
//}
//˫Ŀ������  ����a+b  +��˫Ŀ������
//��Ŀ������
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
//	int sum = Add(a, b);//���� ����Ǻ������ò�����
//	return 0;
//}
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������"��55 };
//	printf("������%s\n", b1.name);
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
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������", 55 };
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%d\n", b1.price);
//	//b1.price = 15;
//	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	//struct Book* pb = &b1;
//	//printf("%s\n", (*pb).name);//�ṹ�����.��Ա
//	//printf("%d\n", (*pb).price);
//	//printf("%s\n", pb->name);//�ṹ��ָ��->��Ա
//	//printf("%d\n", pb->price);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s ", password);
//	//����������һ��\n,��getchar��������\n
//	getchar();
//	printf("��ȷ�ϣ�Y/N��:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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