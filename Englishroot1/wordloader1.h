#ifndef WORDLOADER1_H
#define WORDLOADER1_H
#include <vector>
#include <QStringList>

class Word1
{
    QString word;
    QString meaning;

    friend class WordLoader1;

public:
    Word1(QString word_,QString meaning_)
        :word(word_), meaning(meaning_){}
};

class WordLoader1
{
public:
    WordLoader1();
    void getTestIndex(int n, std::vector<int> &arr); //获取测试单词编号序列
    QString getMeaning(int id);
    QString getWord(int id);

private:
    std::vector<Word1> wordvec;
};
#endif // WORDLOADER1_H
