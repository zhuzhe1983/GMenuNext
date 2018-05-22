/***************************************************************************
 *   Copyright (C) 2006 by Massimiliano Torromeo   *
 *   massimiliano.torromeo@gmail.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef MENUSETTINGDATETIME_H
#define MENUSETTINGDATETIME_H

#include "menusetting.h"
// #include "menusettingstringbase.h"
#include "surface.h"

class GMenu2X;

class MenuSettingDateTime : public MenuSetting {
// class MenuSettingDateTime : public MenuSettingStringBase {

private:
	unsigned short selPart;
	int y;
	std::string month, day, year, hour, minute, *_value, originalValue;
	int imonth, iday, iyear, ihour, iminute;
	// string *_value;

	void dec();
	void inc();
	void leftComponent();
	void rightComponent();

public:
	MenuSettingDateTime(GMenu2X *gmenu2x, const std::string &name, const std::string &description, std::string *value);
	virtual ~MenuSettingDateTime() {};

	virtual void draw(int y);
	// virtual void handleTS();
	virtual uint manageInput();
	virtual void adjustInput();
	virtual void drawSelected(int y);
	virtual bool edited();

	void setSelPart(unsigned short int i);
	void setYear(short int i);
	void setMonth(short int i);
	void setDay(short int i);
	void setHour(short int i);
	void setMinute(short int i);
	unsigned short int getSelPart();
	string value();
};

#endif
