/*******************************************************************
Copyright(c) 2016, Harry He
All rights reserved.

Distributed under the BSD license.
(See accompanying file LICENSE.txt at
https://github.com/zhedahht/CodingInterviewChinese2/blob/master/LICENSE.txt)
*******************************************************************/

//==================================================================
// 《剑指Offer——名企面试官精讲典型编程题》代码
// 作者：何海涛
//==================================================================

// 面试题9：用两个栈实现队列
// 题目：用两个栈实现一个队列。队列的声明如下，请实现它的两个函数appendTail
// 和deleteHead，分别完成在队列尾部插入结点和在队列头部删除结点的功能。

#include "Queue.h"
#include <time.h>

// ====================测试代码====================
void Test(char actual, char expected)	//测试抛出的结果是否与期望的一样
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

	//压入数据‘a' ‘b' 'c'
    queue.appendTail('a');
    queue.appendTail('b');
    queue.appendTail('c');

    char head = queue.deleteHead();	//抛出'a'
    Test(head, 'a');	//测试结果

    head = queue.deleteHead();//抛出'b'
    Test(head, 'b');	//测试结果

    queue.appendTail('d');	//压入'd'
    head = queue.deleteHead();	//抛出'c'
    Test(head, 'c');	//测试结果

    queue.appendTail('e');	//压入'e'
    head = queue.deleteHead();//抛出'd'
    Test(head, 'd');	//测试结果

    head = queue.deleteHead();//抛出'e'
    Test(head, 'e');	//测试结果

	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("该程序运行的时间是：%f\n", duration);

	system("pause");
    return 0;
}

