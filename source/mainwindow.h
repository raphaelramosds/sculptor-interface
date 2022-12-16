#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

#include "sculptor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    void putVoxel();
    void cutVoxel();

    void putBox();
    void cutBox();

    void setColor();

    void putSphere();
    void cutSphere();

    void putEllipsoid();
    void cutEllipsoid();

    void setPlane();
    void drawChosenShape();

    void changeToVoxelMode();
    void changeToBoxMode();
    void changeToSphereMode();
    void changeToEllipsoidMode();

private:
    Ui::MainWindow *ui;
    Sculptor* s;
    int drawingMode;
};
#endif // MAINWINDOW_H
