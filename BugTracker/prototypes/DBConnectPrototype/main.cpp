#include "mainwindow.hpp"
#include <QApplication>
#include <memory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto it = std::make_unique<int>(5);

    MainWindow w;
    w.show();

    return a.exec();
}
