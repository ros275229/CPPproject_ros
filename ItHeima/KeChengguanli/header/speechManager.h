#pragma once
#include<iostream>
#include<vector>
#include<speaker.h>
#include<map>
using namespace std;

class SpeechManager
{
    public:
        // 比赛选手 容器 12人 , 存储编号
        vector<int> v1 ;
        // 比赛选手 容器 6人 , 存储编号 ，第二轮
        vector<int> v2 ;
        // 比赛选手 容器 3人 , 存储编号 ，第三轮
        vector<int> v3 ;
        // 比赛轮数
        int m_Index ;
        map<int, Speaker> m_Speaker ;// 存储编号和选手信息
        // 构造函数
        SpeechManager() ;
        // 析构函数
        ~SpeechManager() ;
        // 展示菜单
        void show_Menu() ;
        // 退出系统
        void exitSystem() ;
        // 初始化属性
        void initSpeech() ;
        // 初始化创建12名选手
        void createSpeaker() ;
};