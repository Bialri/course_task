#include "widget.h"
#include <iostream>
#include "stack.h"
#include "StateExam.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Stack stack;
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}

