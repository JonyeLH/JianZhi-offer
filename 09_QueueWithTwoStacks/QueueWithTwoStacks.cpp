/*******************************************************************
Copyright(c) 2016, Harry He
All rights reserved.

Distributed under the BSD license.
(See accompanying file LICENSE.txt at
https://github.com/zhedahht/CodingInterviewChinese2/blob/master/LICENSE.txt)
*******************************************************************/

//==================================================================
// ����ָOffer�����������Թپ������ͱ���⡷����
// ���ߣ��κ���
//==================================================================

// ������9��������ջʵ�ֶ���
// ��Ŀ��������ջʵ��һ�����С����е��������£���ʵ��������������appendTail
// ��deleteHead���ֱ�����ڶ���β����������ڶ���ͷ��ɾ�����Ĺ��ܡ�

#include "Queue.h"
#include <time.h>

// ====================���Դ���====================
void Test(char actual, char expected)	//�����׳��Ľ���Ƿ���������һ��
{
    if(actual == expected)
        printf("Test passed output right.\n");
    else
        printf("Test failed output false.\n");
}

int main(int argc, char* argv[])
{
	clock_t start, stop;
	double duration;
	start = clock();

    CQueue<char> queue;

	//ѹ�����ݡ�a' ��b' 'c'
    queue.appendTail('a');
    queue.appendTail('b');
    queue.appendTail('c');

    char head = queue.deleteHead();	//�׳�'a'
    Test(head, 'a');	//���Խ��

    head = queue.deleteHead();//�׳�'b'
    Test(head, 'b');	//���Խ��

    queue.appendTail('d');	//ѹ��'d'
    head = queue.deleteHead();	//�׳�'c'
    Test(head, 'c');	//���Խ��

    queue.appendTail('e');	//ѹ��'e'
    head = queue.deleteHead();//�׳�'d'
    Test(head, 'd');	//���Խ��

    head = queue.deleteHead();//�׳�'e'
    Test(head, 'e');	//���Խ��

	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("�ó������е�ʱ���ǣ�%f\n", duration);

	system("pause");
    return 0;
}

