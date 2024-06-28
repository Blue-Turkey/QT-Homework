#ifndef WORDLOADER_H
#define WORDLOADER_H

#include <vector>
#include <QStringList>

class Word
{
    QString word;
    QString root;
    QString root_meaning;
    QString word_class;

    friend class WordLoader;

public:
    Word(QString word_, QString root_, QString root_meaning_, QString word_class_)
        :word(word_), root(root_), root_meaning(root_meaning_), word_class(word_class_){}
};

class WordLoader
{
public:
    WordLoader();
    void getTestIndex(int n, char start, char end, std::vector<int> &arr); //获取测试单词编号序列
    void getStringList(QString sep, QString str, QStringList &list);
    QString getMeaning(int id);
    QString getWordClass(int id);
    QString getRoot(int id);
    QString getWord(int id);

private:
    std::vector<Word> wordvec;
};

#endif // WORDLOADER_H
