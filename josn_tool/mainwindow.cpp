#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);

     first_click = true;
//     ui->treeWidget->setCurrentItem();
//      QList<QTreeWidgetItem *> items;
//      for (int i = 0; i < 10; ++i)
//          items.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("item: %1").arg(i))));
//      ui->treeWidget->insertTopLevelItems(0, items);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::on_add_Item_clicked
 * 说明："添加项目"按钮槽函数
 * 功能：添加"项目"
 */
void MainWindow::on_add_Item_clicked()
{
    /**
      * 1. 如果没有结点，则添加新的结点；
      * 2. 如果有结点，则添加此结点的子结点
      **/
    if(first_click == true)    // 第一次按"项目添加"按钮
    {
        first_click = false;
        QTreeWidgetItem *first_Item = new QTreeWidgetItem(ui->treeWidget);
        first_Item->setText(0,"first");
        first_Item->setText(1,"");
        first_Item->setFlags(first_Item->flags() | Qt::ItemIsEditable);

        ui->treeWidget->addTopLevelItem(first_Item);
    }
    else
    {
        // QTreeWidgetItem顶层的Item的parent为0

        QTreeWidgetItem *curItem = ui->treeWidget->currentItem();
        qDebug()  << "parent:" << curItem->parent();
        qDebug() << "child :" << curItem->childCount(); //child的数量，如果为0表示没有child
        QTreeWidgetItem *topItem;

        if (curItem == NULL)
        {
          return;
        }

        curItem->setFlags(curItem->flags() | Qt::ItemIsEditable);   //设置Item可编辑

        if(curItem->parent()) //有"parent"-->中间层节点
        {
            topItem = new QTreeWidgetItem(curItem->parent());
        }
        else //无"parent"-->顶层节点
        {
            topItem = new QTreeWidgetItem(ui->treeWidget);
        }
        topItem->setText(0,"node");
        topItem->setText(1,"");
        ui->treeWidget->addTopLevelItem(topItem);
    }


    qDebug() << "添加项目";
}

void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    qDebug() << "选择项目";
    qDebug() << "当前项目下所有子节点：" << current->childCount();
//    curItem = current;
}

/**
 * @brief MainWindow::on_pushButton_clicked
 * 说明："添加子项目"按钮槽函数
 * 功能：添加"子项目"
 */
void MainWindow::on_pushButton_clicked()
{
    QTreeWidgetItem *curItem = ui->treeWidget->currentItem();

    if (curItem == NULL)
    {
      return;
    }
    curItem->setFlags(curItem->flags() | Qt::ItemIsEditable);   //设置Item可编辑

    QTreeWidgetItem *topItem = new QTreeWidgetItem(curItem);

    topItem->setFlags(topItem->flags() | Qt::ItemIsEditable);   //设置Item可编辑

    topItem->setText(0,"child_node");
    topItem->setText(1,"");
    ui->treeWidget->addTopLevelItem(topItem);
    qDebug() << "添加子项目";
}

/**
 * @brief MainWindow::on_treeWidget_itemDoubleClicked
 * @param item
 * @param column
 * 说明："双击项目"槽函数
 * 功能：双击项目，修改项目名称
 */
void MainWindow::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if(column == 1) //"数值"列
    {

    }
}

/**
 * @brief MainWindow::on_mode_select_toggled
 * @param checked
 * 说明："字符/数据模式选择"槽函数
 * 功能：点击切换字符和数据模式
 */
void MainWindow::on_mode_select_toggled(bool checked)
{
    if(checked == true)
    {
        ui->mode_select->setText("字符");
    }
    else
    {
        ui->mode_select->setText("数值");
    }

}

/**
 * @brief MainWindow::on_generate_josn_clicked
 * 说明："生成JOSN按钮"槽函数
 * 功能：点击"生成JOSN"按钮
 */
void MainWindow::on_generate_josn_clicked()
{



    //获取当前"项目"中字符
    int i = 0;
    QStringList josn_strlist;
    QTreeWidgetItemIterator ite(ui->treeWidget);
    QTreeWidget *treeItem;
    QString str;
    while(*ite)
    {
        qDebug() << "tr-->" << (*ite);
//        if((*ite)->childCount()!= 0)    //有"child"
//        {
//            str = "\"";
//            str += (*ite)->text(0);
//            str += "\"";
//            str +=  ":{";
//            josn_strlist << str;  //获取"键名"列的数据
//        }
//        josn_strlist << (*ite)->text(1); //获取"键值"列的数据
        ite++;
    }
    qDebug() << "QstringList:-->" << josn_strlist;
}

/**
 * @brief MainWindow::on_remove_Item_clicked
 * 说明："删除项目"按钮槽函数
 * 功能：先选中项目,然后点击按钮删除项目
 */
void MainWindow::on_remove_Item_clicked()
{

}

/**
 * @brief MainWindow::Find_AllchildNode
 * @param current
 * 说明：自定义的函数
 * 功能：查找当前节点下所有子节点（包含子节点的节点...）
 */
void MainWindow::Find_AllchildNode(QTreeWidgetItem *current)
{
    int num = 0;
    num = current->childCount();
    qDebug() << current->text(0);
    for(int i=0;i < num;i++)
    {
        Find_AllchildNode(current->child(i));
//        qDebug() << current->child(i)->text(0);
//        if(current->child(i)->childCount() != 0)
//        {
//            Find_AllchildNode(current->child(i));
//        }
    }
}
