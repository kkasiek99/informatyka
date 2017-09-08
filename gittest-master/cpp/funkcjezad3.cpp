/*
 * funkcjezad3.cpp
 *
 * Copyright 2016 user <user@lap79>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <iostream>

using namespace std;



int podstawa(float a )
    {
    float podstawa = a*a ;
    return podstawa;
    }
int sciany(float a , float b)
    {
    float sciany = a*b ;
    return sciany;
    }

int main(int argc, char **argv)
{
    int a , c , b = 0;
     cout << "podaj 2 liczby ";
    cin >> a;
    cin >> b ;
    c = podstawa(a)*2 + sciany(a,b)*4;
    cout << "powierzchnia postopadłościanu to " << c << endl;
	return 0;
}

