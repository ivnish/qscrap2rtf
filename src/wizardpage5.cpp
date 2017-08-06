/* QScrap2rtf - a simple program to convert Shell Scrap Object File to Rich Text Format
   Copyright (C) 2012 Andrey Ivnitsky.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

   Andrey Ivnitsky <ivnitsky.a@gmail.com> */

#include "wizardpage5.h"
#include "ui_wizardpage5.h"

WizardPage5::WizardPage5(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::WizardPage5)
{
    ui->setupUi(this);
    // Set Watermark to last page
    #ifdef Q_OS_LINUX
        setPixmap(QWizard::WatermarkPixmap, QPixmap("/usr/share/qscrap2rtf/pixmaps/watermark.png"));
    #else
    #ifdef Q_OS_WIN32
		setPixmap(QWizard::WatermarkPixmap, QPixmap(qApp->applicationDirPath()+"\\pixmaps\\watermark.png"));
    #endif
    #endif
}
//-------------------------------------------------------------------------

WizardPage5::~WizardPage5()
{
    delete ui;
}
//-------------------------------------------------------------------------