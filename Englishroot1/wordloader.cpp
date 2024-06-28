#include "wordloader.h"
#include <fstream>
#include <QTime>
#include <QDebug>
#include <QFile>
#include <QDir>

WordLoader::WordLoader()
{
    QFile file(":/new/prefix1/data.txt");
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        while(!file.atEnd())
        {
            QString str = file.readLine(); //读取一行
            QStringList strlist;
            getStringList("=", str, strlist);
            wordvec.push_back({strlist[4], strlist[2], strlist[3], strlist[6]});
        }
    }
}

void WordLoader::getTestIndex(int n, char start, char end, std::vector<int> &arr)
{
    int len = wordvec.size();
    srand(QTime(0,0,0).secsTo(QTime::currentTime()));
    int startid = 0, endid = len - 1;
    for(int i = 0; i < len; i++)
    {
        if(wordvec[i].root[0] == start)
        {
            startid = i;
            break;
        }
    }
    for(int i = len - 1; i >= 0; i--)
    {
        if(wordvec[i].root[0] == end)
        {
            endid = i;
            break;
        }
    }
    arr.clear();
    for(int i = 0; i < n; i++)
    {
        int rid = (rand() % (endid - startid + 1)) + startid;
        arr.push_back(rid);
    }
}

void WordLoader::getStringList(QString sep, QString str, QStringList &list)
{
    list = str.split(sep);
    for(auto &s : list)
    {
        s = s.simplified();
    }
}

QString WordLoader::getMeaning(int id)
{
    return wordvec[id].root_meaning;
}

QString WordLoader::getWordClass(int id)
{
    return wordvec[id].word_class;
}

QString WordLoader::getRoot(int id)
{
    return wordvec[id].root;
}

QString WordLoader::getWord(int id)
{
    return wordvec[id].word;
}


