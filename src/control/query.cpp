#include "include/control/query.h"
#include <string>
#include <iostream>
#include "include/global.h"
#include <QMessageBox>
using namespace std;

query::query(QWidget *parent)
    : QMainWindow(parent), ui(new Ui_query)
{
    ui->setupUi(this);
    setFixedSize(900, 580);
    ui->table->setColumnCount(6);
    // ui->table->setRowCount(2);

    QStringList headers;
    headers << "姓名"
            << "卡号"
            << "状态"
            << "余额"
            << "上次使用时间"
            << "结账状态";
    ui->table->setHorizontalHeaderLabels(headers);
    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // 表头自适应宽度
}

query::~query()
{
    delete ui;
}

void query::on_QUERY_clicked()
{
    string id = ui->ID->toPlainText().toStdString();

    vector<card> res;
    int RES = Qlist->query(id, res, JINGQUE);
    if (RES == EMPTY)
    {
        QMessageBox::information(this, "提示", "请输入查询信息!");
    }
    else if (RES == LONG)
    {
        QMessageBox::information(this, "提示", "卡号不合法");
    }
    else if (RES == NOT_FOUND)
    {
        QMessageBox::information(this, "提示", "没有找到哦!");
    }

    else if (RES == SUCCESS)
    {
        // 动态设置行数
        ui->table->setRowCount(res.size());
        for (int i = 0; i < res.size(); i++)
        {
            string status;
            switch (res[i].Status)
            {
            case ON:
                status = "上机";
                break;
            case OFF:
                status = "下机";
                break;
            default:
                status = "空闲";
                break;
            }
            ui->table->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(res[i].name)));
            ui->table->item(i, 0)->setTextAlignment(Qt::AlignCenter);
            ui->table->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(res[i].id)));
            ui->table->item(i, 1)->setTextAlignment(Qt::AlignCenter);
            ui->table->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(status)));
            ui->table->item(i, 2)->setTextAlignment(Qt::AlignCenter);
            ui->table->setItem(i, 3, new QTableWidgetItem(QString::number(res[i].balance, 'f', 2)));
            ui->table->item(i, 3)->setTextAlignment(Qt::AlignCenter);
            QString dt = res[i].time_last.toString("yyyy-MM-dd hh:mm:ss");
            ui->table->setItem(i, 4, new QTableWidgetItem(dt));
            if (res[i].Pay == PAY_ED)
            {
                ui->table->setItem(i, 5, new QTableWidgetItem("已结账"));
                ui->table->item(i, 5)->setTextAlignment(Qt::AlignCenter);
            }
            else
            {
                ui->table->setItem(i, 5, new QTableWidgetItem("未结账"));
                ui->table->item(i, 5)->setTextAlignment(Qt::AlignCenter);
            }
        }

        // ui->table->setItem(0, 3, new QTableWidgetItem(RES.time_in));
        // ui->table->setItem(0, 4, new QTableWidgetItem(RES.time_out));
    }
}

void query::on_QUERY_2_clicked()
{
    string id = ui->ID->toPlainText().toStdString();

    vector<card> res;
    int RES = Qlist->query(id, res, MOHU);
    if (RES == EMPTY)
    {
        QMessageBox::information(this, "提示", "请输入查询信息!");
    }
    else if (RES == LONG)
    {
        QMessageBox::information(this, "提示", "卡号不合法");
    }
    else if (RES == NOT_FOUND)
    {
        QMessageBox::information(this, "提示", "没有找到哦!");
    }

    else if (RES == SUCCESS)
    {
        // 动态设置行数
        ui->table->setRowCount(res.size());
        for (int i = 0; i < res.size(); i++)
        {
            string status;
            switch (res[i].Status)
            {
            case ON:
                status = "上机";
                break;
            case OFF:
                status = "下机";
                break;
            default:
                status = "空闲";
                break;
            }
            ui->table->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(res[i].name)));
            ui->table->item(i, 0)->setTextAlignment(Qt::AlignCenter);
            ui->table->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(res[i].id)));
            ui->table->item(i, 1)->setTextAlignment(Qt::AlignCenter);
            ui->table->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(status)));
            ui->table->item(i, 2)->setTextAlignment(Qt::AlignCenter);
            ui->table->setItem(i, 3, new QTableWidgetItem(QString::number(res[i].balance, 'f', 2)));
            ui->table->item(i, 3)->setTextAlignment(Qt::AlignCenter);
            QString dt = res[i].time_last.toString("yyyy-MM-dd hh:mm:ss");
            ui->table->setItem(i, 4, new QTableWidgetItem(dt));
            if (res[i].Pay == PAY_ED)
            {
                ui->table->setItem(i, 5, new QTableWidgetItem("已结账"));
                ui->table->item(i, 5)->setTextAlignment(Qt::AlignCenter);
            }
            else
            {
                ui->table->setItem(i, 5, new QTableWidgetItem("未结账"));
                ui->table->item(i, 5)->setTextAlignment(Qt::AlignCenter);
            }
        }

        // ui->table->setItem(0, 3, new QTableWidgetItem(RES.time_in));
        // ui->table->setItem(0, 4, new QTableWidgetItem(RES.time_out));
    }
}
void query::on_NO_clicked()
{
    this->close();
}