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
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Merza-ye Shirazi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Merza-ye Shirazi");
    }
}


void Form::on_Shahrake_Shariati_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahrak-e Shari'ati");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahrak-e Shari'ati");
    }
}


void Form::on_Rahahan_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Rahahan");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Rahahan");
    }
}


void Form::on_Meydane_Hazrate_Valiasr_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Hazrat-e ValiAsr");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Hazrat-e ValiAsr");
    }
}


void Form::on_Bosstane_Laleh_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Boostan-e Laleh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Boostan-e Laleh");
    }
}


void Form::on_Mirdamad_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Mirdamad");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Mirdamad");
    }
}


void Form::on_Tajrish_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Tajrish");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Tajrish");
    }
}


void Form::on_Shahid_Sadr_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Sadr");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Sadr");
    }
}


void Form::on_Kouhsar_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Kouhsar");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Kouhsar");
    }
}


void Form::on_Kashani_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Kashani");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Kashani");
    }
}


void Form::on_Yadegare_Emam_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Yadegar-e Emam");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Yadegar-e Emam");
    }
}


void Form::on_Haftome_Tir_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Haftom-e Tir");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Haftom-e Tir");
    }
}


void Form::on_Emam_Hossein_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Emam Hossein");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Emam Hossein");
    }
}


void Form::on_Meydane_Shohada_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Shohada");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Shohada");
    }
}


void Form::on_Shahid_Rezaei_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Rezaei");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Rezaei");
    }
}


void Form::on_Harame_Hazrate_Abdolazim_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Haram-e Hazrat-e Abdolazim");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Haram-e Hazrat-e Abdolazim");
    }
}


void Form::on_Chaharbagh_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Chaharbagh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Chaharbagh");
    }
}


void Form::on_Allameh_Jafari_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Allameh Jafari");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Allameh Jafari");
    }
}


void Form::on_Erame_Sabz_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Eram-e Sabz");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Eram-e Sabz");
    }
}


void Form::on_Meydane_Azadi_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Azadi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Azadi");
    }
}


void Form::on_Ostad_Moin_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Ostad Moi'n");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Ostad Moi'n");
    }
}


void Form::on_Shademan_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shademan");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shademan");
    }
}


void Form::on_Towhid_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Towhid");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Towhid");
    }
}


void Form::on_Meydane_Enghelabe_Eslami_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Enghelab-e Eslami");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Enghelab-e Eslami");
    }
}


void Form::on_Teatre_shahr_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Teatr-e Shahr");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Teatr-e Shahr");
    }
}


void Form::on_Ferdowsi_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Ferdowsi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Ferdowsi");
    }
}


void Form::on_Darvazeh_Dowlat_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Darvazeh Dowlat");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Darvazeh Dowlat");
    }
}


void Form::on_Darvazeh_Shemiran_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Darvazeh Shemiran");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Darvazeh Shemiran");
    }
}


void Form::on_Ebne_Sina_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Ebn-e Sina");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Ebn-e Sina");
    }
}


void Form::on_Pirouzi_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Pirouzi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Pirouzi");
    }
}


void Form::on_Nabard_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Nabard");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Nabard");
    }
}


void Form::on_Nirou_Havaei_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Nirou Havaei");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Nirou Havaei");
    }
}


void Form::on_Shahid_Kolahdouz_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Kolahdouz");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Kolahdouz");
    }
}


void Form::on_Kahrizak_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Kahrizak");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Kahrizak");
    }
}


void Form::on_Shahre_Rey_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahr-e Rey");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahr-e Rey");
    }
}


void Form::on_Jonoub_Terminal_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Jonoub Terminal");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Jonoub Terminal");
    }
}


void Form::on_Shoush_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shoush");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shoush");
    }
}


void Form::on_Panzdahe_Khordad_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Panzdah-e Khordad");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Panzdah-e Khordad");
    }
}


void Form::on_Taleghani_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Taleghani");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Taleghani");
    }
}


void Form::on_Shahid_Mofatteh_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Mofatteh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Mofatteh");
    }
}


void Form::on_Shahid_Beheshti_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Beheshti");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Beheshti");
    }
}


void Form::on_Shahid_Haghani_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Haghani");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Haghani");
    }
}


void Form::on_Gholhak_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Gholhak");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Gholhak");
    }
}


void Form::on_Gheytariyeh_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Gheytariyeh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Gheytariyeh");
    }
}


void Form::on_Meydane_Jahad_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Jahad");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Jahad");
    }
}


void Form::on_Sohrevardi_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Sohrevardi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Sohrevardi");
    }
}


void Form::on_Shahid_Ghodousi_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Ghdousi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Ghdousi");
    }
}


void Form::on_Shahid_Zeynoddin_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Zeynoddin");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Zeynoddin");
    }
}


void Form::on_Aghdasiyeh_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Aghdasiyeh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Aghdasiyeh");
    }
}


void Form::on_Ghaem_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Gha'em");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Gha'em");
    }
}


void Form::on_Khajeh_Abdollahe_Ansari_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Khajeh Abdollah-e Ansari");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Khajeh Abdollah-e Ansari");
    }
}


void Form::on_Payaneh_Javanmard_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Payaneh Javanmard");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Payaneh Javanmard");
    }
}


void Form::on_Bimeh_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Bimeh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Bimeh");
    }
}


void Form::on_Tehran_Pars_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Tehran Pars");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Tehran Pars");
    }
}

