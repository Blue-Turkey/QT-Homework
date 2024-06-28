#include "wordloader1.h"
#include <fstream>
#include <QTime>
#include <QDebug>
#include <QFile>
#include <QDir>

WordLoader1::WordLoader1()
{
    QFile file(":/new/prefix1/data1.txt");
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        while(!file.atEnd())
        {
            QString str1 = QString::fromLocal8Bit(file.readLine()); //读取一行
            QString str2 = QString::fromLocal8Bit(file.readLine()); //读取一行
            wordvec.push_back({str1,str2});
        }
    }
}

void WordLoader1::getTestIndex(int n, std::vector<int> &arr)
{
    int len = wordvec.size();
    srand(QTime(0,0,0).secsTo(QTime::currentTime()));
    int startid = 0, endid = len - 1;
    arr.clear();
    for(int i = 0; i < n; i++)
    {
        int rid = (rand() % (endid - startid + 1)) + startid;
        arr.push_back(rid);
    }
}


QString WordLoader1::getMeaning(int id)
{
    return wordvec[id].meaning;
}

QString WordLoader1::getWord(int id)
{
    return wordvec[id].word;
}


