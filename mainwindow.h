#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "appcontext.h"
#include "entrypoint.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    AppContext context;

    void onConvertClicked();
    void onDeliteClicked();
    void updateLabels();
    void onCopyButtonClicked();
    void onSwapClicked();
};
#endif // MAINWINDOW_H
