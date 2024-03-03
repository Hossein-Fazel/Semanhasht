#include "form.h"
#include "ui_form.h"
#include "mainwindow.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    ui->T1->setDisplayFormat("HH:mm AP");
}

void Form::save_btns()
{
    button["Chaharbahg"] = ui->Chaharbagh;
    button["Kashani"] = ui->Kashani;
    button["Allameh Jafari"] = ui->Allameh_Jafari;
    button["Eram-e Sabz"] = ui->Erame_Sabz;
    button["Meydan-e Azadi"] = ui->Meydane_Azadi;
    button["Ostad Mo'in"] = ui->Ostad_Moin;
    button["Shademan"] = ui->Shademan;
    button["Tohid"] = ui->Towhid;
    button["Meydan-e Engelab-e Eslami"] = ui->Meydane_Enghelabe_Eslami;
    button["Teatr-e Shahr"] = ui->Teatre_shahr;
    button["Ferdowsi"] = ui->Ferdowsi;
    button["Darvazeh Dowlat"] = ui->Darvazeh_Dowlat;
    button["Darvazeh Shemiran"] = ui->Darvazeh_Shemiran;
    button["Meydan-e Shohada"] = ui->Meydane_Shohada;
    button["Ebn-e Sina"] = ui->Ebne_Sina;
    button["Pirouzi"] = ui->Pirouzi;
    button["Nabard"] = ui->Nabard;
    button["Nirou Havaei"] = ui->Nirou_Havaei;
    button["Shahid Kolahdouz"] = ui->Shahid_Kolahdouz;
    button["kouhsar"] = ui->Kouhsar;
    button["Yadegar-e Emam"] = ui->Yadegare_Emam;
    button["Boostan-e Laleh"] = ui->Bosstane_Laleh;
    button["Meydan-e Hazrat-e ValiAsr"] = ui->Meydane_Hazrate_Valiasr;
    button["Haftom-e Tir"] = ui->Haftome_Tir;
    button["Emam Hossein"] = ui->Emam_Hossein;
    button["Shahid Rezaei"] = ui->Shahid_Rezaei;
    button["Haram-e Hazrat-e Abdolazim"] = ui->Harame_Hazrate_Abdolazim;
    button["Bimeh"] = ui->Bimeh;
    button["Tehran Pars"] = ui->Tehran_Pars;
    button["Shahrak-e Shari'ati"] = ui->Shahrake_Shariati;
    button["Rahahan"] = ui->Rahahan;
    button["Mirdamad"] = ui->Mirdamad;
    button["Tajrish"] = ui->Tajrish;
    button["Shahid Sadr"] = ui->Shahid_Sadr;
    button["Khajeh Abdollah-e Ansari"] = ui->Khajeh_Abdollahe_Ansari;
    button["Gha'em"] = ui->Ghaem;
    button["Payaneh Javanmard"] = ui->Payaneh_Javanmard;
    button["Gheytariyeh"] = ui->Gheytariyeh;
    button["Gholhak"] = ui->Gholhak;
    button["Shahid Haghani"] = ui->Shahid_Haghani;
    button["Shahid Beheshti"] = ui->Shahid_Beheshti;
    button["Shahid Mofatteh"] = ui->Shahid_Mofatteh;
    button["Taleghani"] = ui->Taleghani;
    button["Panzdah-e Khordad"] = ui->Panzdahe_Khordad;
    button["Shoush"] = ui->Shoush;
    button["Jonoub Terminal"] = ui->Jonoub_Terminal;
    button["Shahr-e Rey"] = ui->Shahre_Rey;
    button["Kahrizak"] = ui->Kahrizak;
    button["Azadegan"] = ui->Azadegan;
    button["Zamzam"] = ui->Zamzam;
    button["Javadiyeh"] = ui->Javadie;
    button["Mahdiyeh"] = ui->Mahdie;
    button["Moniriyeh"] = ui->Moniriyeh;
    button["Meydan-e Jahad"] = ui->Meydane_Jahad;
    button["Merza-ye Shirazi"] = ui->Merzaye_Shirazi;
    button["Sohrevardi"] = ui->Sohrevardi;
    button["Shahid Ghodousi"] = ui->Shahid_Ghodousi;
    button["Shahid Zeynoddin"] = ui->Shahid_Zeynoddin;
    button["Aghdasiyeh"] = ui->Aghdasiyeh;
}

Form::~Form()
{
    delete ui;
}


void Form::on_Merzaye_Shirazi_clicked()
{

}

