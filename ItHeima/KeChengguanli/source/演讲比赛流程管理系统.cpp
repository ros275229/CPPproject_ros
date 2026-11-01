#include<iostream>
using namespace std;
#include<windows.h>
#include "../header/speechManager.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);  // 控制台输出 UTF-8
    SetConsoleCP(CP_UTF8);        // 控制台输入 UTF-8
    // cout << "Hello World!" << endl;
    // 创建管理类对象
    SpeechManager sm ;
    while(true){
        sm.show_Menu() ;
        sm.initSpeech() ;
        sm.createSpeaker() ;
        for(int i = 0 ; i < 12 ; i++){
            cout << "选手编号: " << 10001 + i << " 姓名: " << sm.m_Speaker[10001+i].name << "成绩： "<< sm.m_Speaker[10001+i].score[0] << " "<< sm.m_Speaker[10001+i].score[1] << endl ;
        }
        int choice = 0 ; // 用户的选择
        cout << "请输入您的选择: " ;
        cin >> choice ;
        switch (choice){
        case 1:
            cout << "开始演讲比赛" << endl;
            break;
        case 2:
            cout << "查看往届记录" << endl;
            break;
        case 3:
            cout << "清空比赛记录" << endl;
            break;
        case 0:
            cout << "退出比赛程序" << endl;
            sm.exitSystem();
            break;
        default:
            system("cls"); // 清屏
            break ;
        }
    }
    system("pause");// 暂停程序 
    return 0 ;
}