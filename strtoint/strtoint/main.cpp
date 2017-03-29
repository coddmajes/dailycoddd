//
//  main.cpp
//  strtoint
//
//  Created by coddmajes on 2017/3/25.
//  Copyright © 2017年 coddmajes. All rights reserved.
//


//#include "stdafx.h"
#include <iostream>
using namespace std;

//不使用库函数将字符串转换为数字
int str2int(const char *str){
    int num=0,dig=1;
    if (str==NULL)
    {
        return -1;
    }
    while (*str==' '){ //滤掉开头的空格
        str++;
    }
    if (*str=='+')
    {
        str++;
    }
    if (*str=='-')//如果开头有"-"使dig=-1
    {
        str++;
        dig*=-1;
    }
    while (*str!='\0')
    {
        num=num*10+(*str++-'0');
        if (*str<'0'||*str>'9')//如果遇到非数字则跳出循环
        {
            break;
        }
    }
    num*=dig;
    return num;
}
int main()
{
    int num=0;
    char str[10]="";
    cout<<"请输入字符串："<<endl;
    cin.getline(str,10);
    num=str2int(str);
    cout<<num<<"\n";
    system("pause");
    return 0;
}
