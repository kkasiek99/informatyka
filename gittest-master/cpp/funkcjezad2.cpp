/*
 * funkcjezad2.cpp
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

int sumakwadrat(float a , float b)
    {
    float sumakwadrat = a*a + b*b ;
    return sumakwadrat;
    }

int main(int argc, char **argv)
{
    int a , b , c = 0;
    cout << "podaj 3 liczby ";
    cin >> a;
    cin >> b ;
    cin >> c;
    if (sumakwadrat (a,b) >= c*c)
        cout << " Z tych boków stworzysz trójkąt";
    else
        cout << " Nie da się stworzyć trójkąta z tych boków";

	return 0;
}
