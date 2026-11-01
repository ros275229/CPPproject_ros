#include "../header/speechManager.h"
// 构造函数
SpeechManager::SpeechManager()
{
    // 初始化属性
    this->initSpeech() ; 
    // 创建选手
    this->createSpeaker() ;
}
// 析构函数
SpeechManager::~SpeechManager()
{
}

// 菜单功能
void SpeechManager::show_Menu()
{
    cout << "********************************" << endl;
    cout << "******** 欢迎参加演讲比赛 ********" << endl;
    cout << "******** 1.开始演讲比赛 ********" << endl;
    cout << "******** 2.查看往届记录 ********" << endl;
    cout << "******** 3.清空比赛记录 ********" << endl;
    cout << "******** 0.退出比赛程序 ********" << endl;
    cout << "********************************" << endl;
    cout << endl ;
}

void SpeechManager::exitSystem()
{
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0);
}

void SpeechManager::initSpeech()
{
    // 容器保证为空
    this->m_Index = 1 ;// 比赛轮数
    this->v1.clear() ;
    this->v2.clear() ;
    this->v3.clear() ;
    // 初始化比赛轮数 
    this->m_Speaker.clear();
}

void SpeechManager::createSpeaker()
{
    string nameSeed = "ABCDEFGHIJKL" ;// 12名选手姓名
    for(int i = 0 ; i < 12 ; i++){
        string name = "选手" ;
        name += nameSeed[i] ;
        Speaker sp ;
        sp.name = name ;
        for(int j = 0 ; j < 2 ; j++){
            sp.score[j] = 0 ;
        }
        // 将创建的选手放入到容器中
        this->m_Speaker.insert(make_pair(i+10001, sp)) ;
    }
}