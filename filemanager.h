#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <QMainWindow>
#include <QTextEdit>    //文本
#include "mainwindow.h"


class FileManager
{
private:
    std::string path;
    QString fileName;
    MainWindow *mainWindow;
    QTextEdit *text1;
    bool autoSave();
public:
    FileManager();
    ~FileManager();
    bool open();
    void close();
    bool newFile();
    bool save();
    bool saveAs();
    char* openMotto(char *buf,size_t size);
};


#endif // FILEMANAGER_H
