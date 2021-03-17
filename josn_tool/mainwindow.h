#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Find_AllchildNode(QTreeWidgetItem *current);

private slots:
    void on_add_Item_clicked();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_pushButton_clicked();


    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_mode_select_toggled(bool checked);

    void on_generate_josn_clicked();

    void on_remove_Item_clicked();

private:
    Ui::MainWindow *ui;
    bool first_click;
    QTreeWidgetItem *curItem;
};

#endif // MAINWINDOW_H
