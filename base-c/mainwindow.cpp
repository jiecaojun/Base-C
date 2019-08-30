#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSave_As_triggered()
{

}

void MainWindow::on_actionCreate_triggered()
{

}

void MainWindow::on_actionOpen_triggered()
{

}

void MainWindow::on_actionSave_triggered()
{

}

void MainWindow::on_actionClose_triggered()
{

}

void MainWindow::on_actionCopy_triggered()
{

}

void MainWindow::on_actionCut_triggered()
{

}

void MainWindow::on_actionPaste_triggered()
{

}

void MainWindow::on_actionSelect_All_triggered()
{

}

void MainWindow::on_actionAnnotation_triggered()
{

}

void MainWindow::on_actionUnannotation_triggered()
{

}

void MainWindow::on_actionRun_triggered()
{

}

void MainWindow::on_actionCompile_triggered()
{

}

void MainWindow::on_actionRun_Compile_triggered()
{

}

void MainWindow::on_actionStop_triggered()
{

}

void MainWindow::on_actionAbout_Base_C_triggered()
{

}

void MainWindow::on_actionMotto_of_the_day_triggered()
{

}

void MainWindow::on_actionAbout_us_triggered()
{

}
