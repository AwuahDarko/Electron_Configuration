#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->infoLabel->setVisible(false);
    ui->symbolLabel->setVisible(false);
    downarrow.setHtml(" &#x21BF;");
    uparrow.setHtml(" &#x21C2;");

    connect(ui->calculate_button,&QPushButton::clicked,this,&Dialog::calculate);


}
//==============================================================
Dialog::~Dialog()
{
    delete ui;
}
//===============================================================
void Dialog::calculate()
{

    setDefaultLabelText();
    if(ui->infoLabel->isVisible())
    {
        ui->infoLabel->setVisible(false);
    }
    if(ui->symbolLabel->isVisible())
    {
        ui->infoLabel->setVisible(false);
    }
    clearSpinBox();

    bool ok;

       ui->lineEdit->text().toInt(&ok,10);
       if(ok == true)
       {
          atomic_number = ui->lineEdit->text().toInt();
       }
       else if(ok == false)
           {
              element_name = ui->lineEdit->text().toUpper();
              if(element_name == "HYDROGEN")
              {
                  atomic_number = 1;
                  ui->lineEdit->setText("1");
              } else

              if(element_name == "HELIUM")
              {
                  atomic_number = 2;
                  ui->lineEdit->setText("2");
              } else

              if(element_name == "LITHIUM")
              {
                  atomic_number = 3;
                  ui->lineEdit->setText("3");
              } else

              if(element_name == "BERYLLIUM")
              {
                  atomic_number = 4;
                  ui->lineEdit->setText("4");
              }else

              if(element_name == "BORON")
              {
                  atomic_number = 5;
                  ui->lineEdit->setText("5");
              } else
              //==================================================

              if(element_name == "CARBON")
              {
                  atomic_number = 6;
                  ui->lineEdit->setText("6");
              } else

              if(element_name == "NITROGEN")
              {
                  atomic_number = 7;
                  ui->lineEdit->setText("7");
              } else

              if(element_name == "OXYGEN")
              {
                  atomic_number = 8;
                  ui->lineEdit->setText("8");
              } else

              if(element_name == "FLUORINE")
              {
                  atomic_number = 9;
                  ui->lineEdit->setText("9");
              } else

              if(element_name == "NEON")
              {
                  atomic_number = 10;
                  ui->lineEdit->setText("10");
              } else

              if(element_name == "SODIUM")
              {
                  atomic_number = 11;
                  ui->lineEdit->setText("11");
              } else

              if(element_name == "MAGNESIUM")
              {
                  atomic_number = 12;
                  ui->lineEdit->setText("12");
              } else

              if(element_name == "ALUMINIUM")
              {
                  atomic_number = 13;
                  ui->lineEdit->setText("13");
              } else

              if(element_name == "SILICON")
              {
                  atomic_number = 14;
                  ui->lineEdit->setText("14");
              } else

              if(element_name == "PHOSPHOROUS")
              {
                  atomic_number = 15;
                  ui->lineEdit->setText("15");
              } else
              //========================================================

              if(element_name == "SULPHUR")
              {
                  atomic_number = 16;
                  ui->lineEdit->setText("16");
              } else

              if(element_name == "CHLORINE")
              {
                  atomic_number = 17;
                  ui->lineEdit->setText("17");
              } else

              if(element_name == "ARGON")
              {
                  atomic_number = 18;
                  ui->lineEdit->setText("18");
              } else

              if(element_name == "POTASSIUM")
              {
                  atomic_number = 19;
                  ui->lineEdit->setText("19");
              } else

              if(element_name == "CALCIUM")
              {
                  atomic_number = 20;
                  ui->lineEdit->setText("20");
              } else

              if(element_name == "SCANDIUM")
              {
                  atomic_number = 21;
                  ui->lineEdit->setText("21");
              } else

              if(element_name == "TITANIUM")
              {
                  atomic_number = 22;
                  ui->lineEdit->setText("22");
              } else

              if(element_name == "VANADIUM")
              {
                  atomic_number = 23;
                  ui->lineEdit->setText("23");
              } else

              if(element_name == "CHROMIUM")
              {
                  atomic_number = 24;
                  ui->lineEdit->setText("24");
              } else

              if(element_name == "MANGANESE")
              {
                  atomic_number = 25;
                  ui->lineEdit->setText("25");
              } else

              if(element_name == "IRON")
              {
                  atomic_number = 26;
                  ui->lineEdit->setText("26");
              } else

              if(element_name == "COBALT")
              {
                  atomic_number = 27;
                  ui->lineEdit->setText("27");
              } else

              if(element_name == "NICKEL")
              {
                  atomic_number = 28;
                  ui->lineEdit->setText("28");
              } else

              if(element_name == "COPPER")
              {
                  atomic_number = 29;
                  ui->lineEdit->setText("29");
              }

              if(element_name == "ZINC")
              {
                  atomic_number = 30;
                  ui->lineEdit->setText("30");
              } else

              if(element_name == "GALLIUM")
              {
                  atomic_number = 31;
                  ui->lineEdit->setText("31");
              } else

              //==========================================
              if(element_name == "GERMANIUM")
              {
                  atomic_number = 32;
                  ui->lineEdit->setText("32");
              } else

              if(element_name == "ARSENIC")
              {
                  atomic_number = 33;
                  ui->lineEdit->setText("33");
              } else

              if(element_name == "SELENIUM")
              {
                  atomic_number = 34;
                  ui->lineEdit->setText("34");
              } else

              if(element_name == "BROMINE")
              {
                  atomic_number = 35;
                  ui->lineEdit->setText("35");
              } else

              if(element_name == "KRYPTON")
              {
                  atomic_number = 36;
                  ui->lineEdit->setText("36");
              } else

              if(element_name == "RUBIDIUM")
              {
                  atomic_number = 37;
                  ui->lineEdit->setText("37");
              } else

              if(element_name == "STRONTIUM")
              {
                  atomic_number = 38;
                  ui->lineEdit->setText("38");
              } else

              if(element_name == "YTTRIUM")
              {
                  atomic_number = 39;
                  ui->lineEdit->setText("39");
              } else

              if(element_name == "ZIRCONIUM")
              {
                  atomic_number = 40;
                  ui->lineEdit->setText("40");
              } else

              if(element_name == "NIOBIUM")
              {
                  atomic_number = 41;
                  ui->lineEdit->setText("41");
              } else

              if(element_name == "MOLYBDENUM")
              {
                  atomic_number = 42;
                  ui->lineEdit->setText("42");
              } else

              if(element_name == "TECHNETIUM")
              {
                  atomic_number = 43;
                  ui->lineEdit->setText("43");
              } else

              if(element_name == "RUTHENIUM")
              {
                  atomic_number = 44;
                  ui->lineEdit->setText("44");
              } else

              if(element_name == "RHODIUM")
              {
                  atomic_number = 45;
                  ui->lineEdit->setText("45");
              } else

              if(element_name == "PALLADIUM")
              {
                  atomic_number = 46;
                  ui->lineEdit->setText("46");
              } else

              if(element_name == "SILVER")
              {
                  atomic_number = 47;
                  ui->lineEdit->setText("47");
              } else

              if(element_name == "CADMIUM")
              {
                  atomic_number = 48;
                  ui->lineEdit->setText("48");
              } else

              if(element_name == "INDIUM")
              {
                  atomic_number = 49;
                  ui->lineEdit->setText("49");
              } else

              if(element_name == "TIN")
              {
                  atomic_number = 50;
                  ui->lineEdit->setText("50");
              } else

              if(element_name == "ANTIMONY")
              {
                  atomic_number = 51;
                  ui->lineEdit->setText("51");
              } else

              if(element_name == "TELLURIUM")
              {
                  atomic_number = 52;
                  ui->lineEdit->setText("52");
              } else

              if(element_name == "IODINE")
              {
                  atomic_number = 53;
                  ui->lineEdit->setText("53");
              } else

              if(element_name == "XENON")
              {
                  atomic_number = 54;
                  ui->lineEdit->setText("54");
              } else

              if(element_name == "CESIUM")
              {
                  atomic_number = 55;
                  ui->lineEdit->setText("55");
              } else

              if(element_name == "BARIUM")
              {
                  atomic_number = 56;
                  ui->lineEdit->setText("56");
              } else

              if(element_name == "LANTHANUM")
              {
                  atomic_number = 57;
                  ui->lineEdit->setText("57");
              } else

              if(element_name == "CERIUM")
              {
                  atomic_number = 58;
                  ui->lineEdit->setText("58");
              } else

              if(element_name == "PRASEODYMIUM")
              {
                  atomic_number = 59;
                  ui->lineEdit->setText("59");
              } else

              if(element_name == "NEODYMIUM")
              {
                  atomic_number = 60;
                  ui->lineEdit->setText("60");
              } /*else
              {
                  QString info = "Check your spelling";

                  QMessageBox box;
                  box.setText(info);
                  box.exec();
              }*/
           }

    hold_24 = atomic_number;
    hold_29 = atomic_number;
    holdInitialatomicnumber = atomic_number;

    if(atomic_number == 0)
    {
        return;
    }
    if(atomic_number > 60)
    {

        ui->infoLabel->setText("Am Sorry I can't calculate that! The maximum Atomic number should be 60");
        ui->infoLabel->setVisible(true);
        return;
    }
    while(atomic_number > 0)
    {
        oneSpin(ui->textEdit_1s,ui->one_s);
        --atomic_number;

        if(atomic_number == 0)
        {break;}

        twoSpins(ui->textEdit_1s,ui->one_s);
        --atomic_number;
        if(atomic_number == 0)
        {break;}

        oneSpin(ui->textEdit_2s,ui->two_s);
        --atomic_number;

        if(atomic_number == 0)
        {break;}

        twoSpins(ui->textEdit_2s,ui->two_s);
        --atomic_number;

        if(atomic_number == 0)
        {break;}

        p_degenerateOrbitals(ui->textEdit_2Px);

        if(atomic_number == 0)
        {break;}

        oneSpin(ui->textEdit_3s,ui->three_s);
        --atomic_number;

        if(atomic_number == 0)
        {break;}

        twoSpins(ui->textEdit_3s,ui->three_s);
        --atomic_number;

        if(atomic_number == 0)
        {break;}

        p_degenerateOrbitals(ui->textEdit_3Px);
        if(atomic_number == 0)
        {break;}

        oneSpin(ui->textEdit_4s,ui->four_s);
        --atomic_number;
        if(atomic_number == 0)
        {break;}

        if(hold_24 != 24 && hold_29 != 29)
        {
            twoSpins(ui->textEdit_4s,ui->four_s);
            --atomic_number;
            if(atomic_number == 0)
            {break;}
        }

        d_degenerateOrbitals(ui->textEdit_3d1);
        if(atomic_number == 0)
        {break;}

        p_degenerateOrbitals(ui->textEdit_4Px);
        if(atomic_number == 0)
        {break;}

        d_degenerateOrbitals(ui->textEdit_4d1);
        if(atomic_number == 0)
        {break;}

        f_degenerateOrbitals(ui->textEdit_4f1);
        if(atomic_number == 0)
        {break;}
    }
    setElentSymbol();

}
//================================================================
void Dialog::oneSpin(QTextEdit * spin,QLabel* label)
{
   spin->setText(downarrow.toPlainText());
   spin->setEnabled(true);
   std::string temp = label->text().toStdString();
   if(label == ui->one_s ||label == ui->two_s || label == ui->three_s || label == ui->four_s)
   {
       temp.erase(2);
   }
   else
   {
     temp.erase(3);
   }

   QString inside = QString::fromStdString(temp);
   label->setText(inside+"<sup>1</sup>");
}
//================================================================
void Dialog::twoSpins(QTextEdit *spin, QLabel *label)
{
     spin->setText(downarrow.toPlainText()+uparrow.toPlainText());
     spin->setEnabled(true);
     std::string temp = label->text().toStdString();
     if(label == ui->one_s ||label == ui->two_s || label == ui->three_s || label == ui->four_s)
     {
         temp.erase(2);
     }
     else
     {
       temp.erase(3);
     }
     QString inside= QString::fromStdString(temp);
     label->setText(inside+"<sup>2</sup>");
}
//================================================================
void Dialog::p_degenerateOrbitals(QTextEdit* spin)
{
    if(spin == ui->textEdit_2Px ||spin == ui->textEdit_2Py||spin == ui->textEdit_2Pz)
    {
    oneSpin(ui->textEdit_2Px,ui->two_Px);
    --atomic_number;
    if(atomic_number == 0)
    {return;}

    oneSpin(ui->textEdit_2Py,ui->two_Py);
    --atomic_number;
    if(atomic_number == 0)
    {return;}

    oneSpin(ui->textEdit_2Pz,ui->two_Pz);
    --atomic_number;
    if(atomic_number == 0)
    {return;}

     twoSpins(ui->textEdit_2Px,ui->two_Px);
      --atomic_number;
     if(atomic_number == 0)
     {return;}

     twoSpins(ui->textEdit_2Py,ui->two_Py);
      --atomic_number;
     if(atomic_number == 0)
     {return;}

     twoSpins(ui->textEdit_2Pz,ui->two_Pz);
      --atomic_number;
     if(atomic_number == 0)
     {return;}
    }
//----------------------------------------------------------------------------------
    if(spin == ui->textEdit_3Px ||spin == ui->textEdit_3Py||spin == ui->textEdit_3Pz)
    {
        oneSpin(ui->textEdit_3Px,ui->three_Px);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_3Py,ui->three_Py);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_3Pz,ui->three_Pz);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

         twoSpins(ui->textEdit_3Px,ui->three_Px);
          --atomic_number;
         if(atomic_number == 0)
         {return;}

         twoSpins(ui->textEdit_3Py,ui->three_Py);
          --atomic_number;
         if(atomic_number == 0)
         {return;}

         twoSpins(ui->textEdit_3Pz,ui->three_Pz);
          --atomic_number;
         if(atomic_number == 0)
         {return;}
    }

 //---------------------------------------------------------------
     if(spin == ui->textEdit_4Px ||spin == ui->textEdit_4Py||spin == ui->textEdit_4Pz)
     {
         oneSpin(ui->textEdit_4Px,ui->four_Px);
         --atomic_number;
         if(atomic_number == 0)
         {return;}

         oneSpin(ui->textEdit_4Py,ui->four_Py);
         --atomic_number;
         if(atomic_number == 0)
         {return;}

         oneSpin(ui->textEdit_4Pz,ui->four_Pz);
         --atomic_number;
         if(atomic_number == 0)
         {return;}

          twoSpins(ui->textEdit_4Px,ui->four_Px);
           --atomic_number;
          if(atomic_number == 0)
          {return;}

          twoSpins(ui->textEdit_4Py,ui->four_Py);
           --atomic_number;
          if(atomic_number == 0)
          {return;}

          twoSpins(ui->textEdit_4Pz,ui->four_Pz);
           --atomic_number;
          if(atomic_number == 0)
          {return;}
     }
}
//======================================================================
void Dialog::d_degenerateOrbitals(QTextEdit *spin)
{
    if(spin == ui->textEdit_3d1 ||spin == ui->textEdit_3d2||spin == ui->textEdit_3d5)
    {
        oneSpin(ui->textEdit_3d1,ui->three_d1);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_3d2,ui->three_d2);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_3d3,ui->three_d3);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_3d4,ui->three_d4);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_3d5,ui->three_d5);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_3d1,ui->three_d1);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_3d2,ui->three_d2);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_3d3,ui->three_d3);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_3d4,ui->three_d4);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_3d5,ui->three_d5);
        --atomic_number;
        if(atomic_number == 0)
        {return;}
    }
    //-----------------------------------------------------------------------
    if(spin == ui->textEdit_4d1 ||spin == ui->textEdit_4d2||spin == ui->textEdit_4d5)
    {
        oneSpin(ui->textEdit_4d1,ui->four_d1);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4d2,ui->four_d2);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4d3,ui->four_d3);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4d4,ui->four_d4);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4d5,ui->four_d5);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4d1,ui->four_d1);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4d2,ui->four_d2);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4d3,ui->four_d3);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4d4,ui->four_d4);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4d5,ui->four_d5);
        --atomic_number;
        if(atomic_number == 0)
        {return;}
    }
}
//======================================================================
void Dialog::f_degenerateOrbitals(QTextEdit *spin)
{
    if(spin == ui->textEdit_4f1)
    {
        oneSpin(ui->textEdit_4f1,ui->four_f1);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4f2,ui->four_f2);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4f3,ui->four_f3);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4f4,ui->four_f4);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4f5,ui->four_f5);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4f6,ui->four_f6);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        oneSpin(ui->textEdit_4f7,ui->four_f7);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4f1,ui->four_f1);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4f2,ui->four_f2);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4f3,ui->four_f3);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4f4,ui->four_f4);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4f5,ui->four_f5);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4f6,ui->four_f6);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

        twoSpins(ui->textEdit_4f7,ui->four_f7);
        --atomic_number;
        if(atomic_number == 0)
        {return;}

    }
}
//======================================================================
void Dialog::clearSpinBox()
{
     ui->textEdit_1s->clear();
     ui->textEdit_1s->setEnabled(false);
      ui->textEdit_2s->clear();
       ui->textEdit_2s->setEnabled(false);
       ui->textEdit_3s->clear();
        ui->textEdit_3s->setEnabled(false);
        ui->textEdit_4s->clear();
         ui->textEdit_4s->setEnabled(false);

        ui->textEdit_2Px->clear();
        ui->textEdit_2Px->setEnabled(false);
        ui->textEdit_2Py->clear();
         ui->textEdit_2Py->setEnabled(false);
        ui->textEdit_2Pz->clear();
         ui->textEdit_2Pz->setEnabled(false);

        ui->textEdit_3Px->clear();
         ui->textEdit_3Px->setEnabled(false);
        ui->textEdit_3Py->clear();
         ui->textEdit_3Py->setEnabled(false);
        ui->textEdit_3Pz->clear();
         ui->textEdit_3Pz->setEnabled(false);

        ui->textEdit_4Px->clear();
         ui->textEdit_4Px->setEnabled(false);
        ui->textEdit_4Py->clear();
         ui->textEdit_4Py->setEnabled(false);
        ui->textEdit_4Pz->clear();
         ui->textEdit_4Pz->setEnabled(false);

        ui->textEdit_3d1->clear();
        ui->textEdit_3d1->setEnabled(false);
         ui->textEdit_3d2->clear();
         ui->textEdit_3d2->setEnabled(false);
          ui->textEdit_3d3->clear();
          ui->textEdit_3d3->setEnabled(false);
           ui->textEdit_3d4->clear();
           ui->textEdit_3d4->setEnabled(false);
            ui->textEdit_3d5->clear();
            ui->textEdit_3d5->setEnabled(false);

            ui->textEdit_4d1->clear();
            ui->textEdit_4d1->setEnabled(false);
             ui->textEdit_4d2->clear();
             ui->textEdit_4d2->setEnabled(false);
              ui->textEdit_4d3->clear();
              ui->textEdit_4d3->setEnabled(false);
               ui->textEdit_4d4->clear();
               ui->textEdit_4d4->setEnabled(false);
                ui->textEdit_4d5->clear();
                ui->textEdit_4d5->setEnabled(false);

           ui->textEdit_4f1->clear();
           ui->textEdit_4f1->setEnabled(false);
            ui->textEdit_4f2->clear();
            ui->textEdit_4f2->setEnabled(false);
             ui->textEdit_4f3->clear();
             ui->textEdit_4f3->setEnabled(false);
              ui->textEdit_4f4->clear();
              ui->textEdit_4f4->setEnabled(false);
               ui->textEdit_4f5->clear();
               ui->textEdit_4f5->setEnabled(false);
                ui->textEdit_4f6->clear();
                ui->textEdit_4f6->setEnabled(false);
                 ui->textEdit_4f7->clear();
                 ui->textEdit_4f7->setEnabled(false);

}
//=====================================================================
void Dialog::setDefaultLabelText()
{
    ui->four_d1->setText("4d1");
    ui->four_d2->setText("4d2");
    ui->four_d3->setText("4d3");
    ui->four_d4->setText("4d4");
    ui->four_d5->setText("4d5");
    ui->four_f1->setText("4f1");
    ui->four_f2->setText("4f2");
    ui->four_f3->setText("4f3");
    ui->four_f4->setText("4f4");
    ui->four_f5->setText("4f5");
    ui->four_f6->setText("4f6");
    ui->four_f7->setText("4f7");
    ui->four_Px->setText("4Px");
    ui->four_Py->setText("4Py");
    ui->four_Pz->setText("4Pz");
    ui->four_s->setText("4s");

    ui->three_d1->setText("3d1");
    ui->three_d2->setText("3d2");
    ui->three_d3->setText("3d3");
    ui->three_d4->setText("3d4");
    ui->three_d5->setText("3d5");
    ui->three_Px->setText("3Px");
    ui->three_Py->setText("3Py");
    ui->three_Pz->setText("3Pz");
    ui->three_s->setText("3s");

    ui->two_s->setText("2s");
    ui->two_Px->setText("2Px");
    ui->two_Py->setText("2Py");
    ui->two_Pz->setText("2Pz");
    ui->one_s->setText("1s");
}
//=====================================================================
void Dialog::setElentSymbol()
{

     ui->symbolLabel->setVisible(true);

    if(holdInitialatomicnumber == 1)
    {
        ui->symbolLabel->setText("H");
        ui->element_name->setText("Hydrogen");
    }
    if(holdInitialatomicnumber == 2)
    {
        ui->symbolLabel->setText("He");
        ui->element_name->setText("Helium");
    }
    if(holdInitialatomicnumber == 3)
    {
        ui->symbolLabel->setText("Li");
        ui->element_name->setText("Lithium");
    }
    if(holdInitialatomicnumber == 4)
    {
        ui->symbolLabel->setText("Be");
        ui->element_name->setText("Beryllium");
    }
    if(holdInitialatomicnumber == 5)
    {
        ui->symbolLabel->setText("B");
        ui->element_name->setText("Boron");
    }
    if(holdInitialatomicnumber == 6)
    {
        ui->symbolLabel->setText("C");
        ui->element_name->setText("Carbon");
    }
    if(holdInitialatomicnumber == 7)
    {
        ui->symbolLabel->setText("N");
        ui->element_name->setText("Nitrogen");
    }
    if(holdInitialatomicnumber == 8)
    {
        ui->symbolLabel->setText("O");
        ui->element_name->setText("Oxygen");
    }
    if(holdInitialatomicnumber == 9)
    {
        ui->symbolLabel->setText("F");
        ui->element_name->setText("Fluorine");
    }
    if(holdInitialatomicnumber == 10)
    {
        ui->symbolLabel->setText("Ne");
        ui->element_name->setText("Neon");
    }
    if(holdInitialatomicnumber == 11)
    {
        ui->symbolLabel->setText("Na");
        ui->element_name->setText("Sodium");
    }
    if(holdInitialatomicnumber == 12)
    {
        ui->symbolLabel->setText("Mg");
        ui->element_name->setText("Magnesium");
    }
    if(holdInitialatomicnumber == 13)
    {
        ui->symbolLabel->setText("Al");
        ui->element_name->setText("Aluminium");
    }
    if(holdInitialatomicnumber == 14)
    {
        ui->symbolLabel->setText("Si");
        ui->element_name->setText("Silicon");
    }
    if(holdInitialatomicnumber == 15)
    {
        ui->symbolLabel->setText("P");
        ui->element_name->setText("Phosphorous");
    }
    if(holdInitialatomicnumber == 16)
    {
        ui->symbolLabel->setText("S");
        ui->element_name->setText("Sulphur");
    }
    if(holdInitialatomicnumber == 17)
    {
        ui->symbolLabel->setText("Cl");
        ui->element_name->setText("Chlorine");
    }
    if(holdInitialatomicnumber == 18)
    {
        ui->symbolLabel->setText("Ar");
        ui->element_name->setText("Argon");
    }
    if(holdInitialatomicnumber == 19)
    {
        ui->symbolLabel->setText("K");
        ui->element_name->setText("Potassium");
    }
    if(holdInitialatomicnumber == 20)
    {
        ui->symbolLabel->setText("Ca");
        ui->element_name->setText("Calcium");
    }
    if(holdInitialatomicnumber == 21)
    {
        ui->symbolLabel->setText("Sc");
        ui->element_name->setText("Scandium");
    }
    if(holdInitialatomicnumber == 22)
    {
        ui->symbolLabel->setText("Ti");
        ui->element_name->setText("Titanium");
    }
    if(holdInitialatomicnumber == 23)
    {
        ui->symbolLabel->setText("V");
        ui->element_name->setText("Vanadium");
    }
    if(holdInitialatomicnumber == 24)
    {
        ui->symbolLabel->setText("Cr");
        ui->element_name->setText("Chromium");
    }
    if(holdInitialatomicnumber == 25)
    {
        ui->symbolLabel->setText("Mn");
        ui->element_name->setText("Manganese");
    }
    if(holdInitialatomicnumber == 26)
    {
        ui->symbolLabel->setText("Iron");
        ui->element_name->setText("Fe");
    }
    if(holdInitialatomicnumber == 27)
    {
        ui->symbolLabel->setText("Co");
        ui->element_name->setText("Cobalt");
    }
    if(holdInitialatomicnumber == 28)
    {
        ui->symbolLabel->setText("Ni");
        ui->element_name->setText("Nickel");
    }
    if(holdInitialatomicnumber == 29)
    {
        ui->symbolLabel->setText("Cu");
        ui->element_name->setText("Copper");
    }
    if(holdInitialatomicnumber == 30)
    {
        ui->symbolLabel->setText("Zn");
        ui->element_name->setText("Zinc");
    }
    if(holdInitialatomicnumber == 31)
    {
        ui->symbolLabel->setText("Ga");
        ui->element_name->setText("Gallium");
    }
    if(holdInitialatomicnumber == 32)
    {
        ui->symbolLabel->setText("Ge");
        ui->element_name->setText("Germanium");
    }
    if(holdInitialatomicnumber == 33)
    {
        ui->symbolLabel->setText("As");
        ui->element_name->setText("Arsenic");
    }
    if(holdInitialatomicnumber == 34)
    {
        ui->symbolLabel->setText("Se");
        ui->element_name->setText("Selenium");
    }
    if(holdInitialatomicnumber == 35)
    {
        ui->symbolLabel->setText("Br");
        ui->element_name->setText("Bromine");
    }
    if(holdInitialatomicnumber == 36)
    {
        ui->symbolLabel->setText("Kr");
        ui->element_name->setText("Krypton");
    }
    if(holdInitialatomicnumber == 37)
    {
        ui->symbolLabel->setText("Rb");
        ui->element_name->setText("Rubidium");
    }
    if(holdInitialatomicnumber == 38)
    {
        ui->symbolLabel->setText("Sr");
        ui->element_name->setText("Strontium");
    }
    if(holdInitialatomicnumber == 39)
    {
        ui->symbolLabel->setText("Y");
        ui->element_name->setText("Yttrium");
    }
    if(holdInitialatomicnumber == 40)
    {
        ui->symbolLabel->setText("Zr");
        ui->element_name->setText("Zirconium");
    }
    if(holdInitialatomicnumber == 41)
    {
        ui->symbolLabel->setText("Nb");
        ui->element_name->setText("Niobium");
    }
    if(holdInitialatomicnumber == 42)
    {
        ui->symbolLabel->setText("Mo");
        ui->element_name->setText("Molybdenum");
    }
    if(holdInitialatomicnumber == 43)
    {
        ui->symbolLabel->setText("Tc");
        ui->element_name->setText("Technetium");
    }
    if(holdInitialatomicnumber == 44)
    {
        ui->symbolLabel->setText("Ru");
        ui->element_name->setText("Ruthenium");
    }
    if(holdInitialatomicnumber == 45)
    {
        ui->symbolLabel->setText("Rh");
        ui->element_name->setText("Rhodium");
    }
    if(holdInitialatomicnumber == 46)
    {
        ui->symbolLabel->setText("Pd");
        ui->element_name->setText("Palladium");
    }
    if(holdInitialatomicnumber == 47)
    {
        ui->symbolLabel->setText("Ag");
        ui->element_name->setText("Silver");
    }
    if(holdInitialatomicnumber == 48)
    {
        ui->symbolLabel->setText("Cd");
        ui->element_name->setText("Cadmium");
    }
    if(holdInitialatomicnumber == 49)
    {
        ui->symbolLabel->setText("In");
        ui->element_name->setText("Indium");
    }
    if(holdInitialatomicnumber == 50)
    {
        ui->symbolLabel->setText("Sn");
        ui->element_name->setText("Tin");
    }
    if(holdInitialatomicnumber == 51)
    {
        ui->symbolLabel->setText("Sb");
        ui->element_name->setText("Antimony");
    }
    if(holdInitialatomicnumber == 52)
    {
        ui->symbolLabel->setText("Te");
        ui->element_name->setText("Tellurium");
    }
    if(holdInitialatomicnumber == 53)
    {
        ui->symbolLabel->setText("I");
        ui->element_name->setText("Iodine");
    }
    if(holdInitialatomicnumber == 54)
    {
        ui->symbolLabel->setText("Xe");
        ui->element_name->setText("Xenon");
    }
    if(holdInitialatomicnumber == 55)
    {
        ui->symbolLabel->setText("Cs");
        ui->element_name->setText("Cesium");
    }
    if(holdInitialatomicnumber == 56)
    {
        ui->symbolLabel->setText("Ba");
        ui->element_name->setText("Barium");
    }
    if(holdInitialatomicnumber == 57)
    {
        ui->symbolLabel->setText("Lanthanum");
        ui->element_name->setText("La");
    }
    if(holdInitialatomicnumber == 58)
    {
        ui->symbolLabel->setText("Ce");
        ui->element_name->setText("Cerium");
    }
    if(holdInitialatomicnumber == 59)
    {
        ui->symbolLabel->setText("Praseodymium");
        ui->element_name->setText("Pr");
    }
    if(holdInitialatomicnumber == 60)
    {
        ui->symbolLabel->setText("Nd");
        ui->element_name->setText("Neodymium");
    }
}





/*21BE right up
 * 21BF left up
 * 21C2 right down
 * 21C3 left down
 *
 * add &#....;
*/
