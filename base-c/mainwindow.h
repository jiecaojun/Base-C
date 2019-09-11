#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionSave_As_triggered();

    void on_actionCreate_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionClose_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionSelect_All_triggered();

    void on_actionAnnotation_triggered();

    void on_actionUnannotation_triggered();

    void on_actionRun_triggered();

    void on_actionCompile_triggered();

    void on_actionRun_Compile_triggered();

    void on_actionStop_triggered();

    void on_actionAbout_Base_C_triggered();

    void on_actionMotto_of_the_day_triggered();

    void on_actionAbout_us_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
