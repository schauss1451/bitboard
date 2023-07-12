/*
    Copyright (C) 2023 de-Manzanares

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    Contact:
    If you have any questions, comments, or suggestions,
    you can reach me at <git.in.touch@dmanz.org>
*/

/// @file   printVector.cpp
/// @author de-Manzanares
/// @brief  Prints a vector.

#include "bitBoards.h"

void printVector(vector<int>& range)
{
    int printIndex = 0;
    while (printIndex<range.size()) {
        cout << range[printIndex] << " ";
        printIndex++;
    }
    cout << endl;
}

void printVectorAlgebraic(vector<int>& range)
{
    int printIndex = 0;
    while (printIndex<range.size()) {
        cout << indexToAlgebraic(range[printIndex]) << " ";
        printIndex++;
    }
    cout << endl;
}

string indexToAlgebraic(int index)
{
    string algebraic;

    int row = index/8 + 1;
    int column = index%8;

    switch (column) {
    case 0:algebraic += "h";
        break;
    case 1:algebraic += "g";
        break;
    case 2:algebraic += "f";
        break;
    case 3:algebraic += "e";
        break;
    case 4:algebraic += "d";
        break;
    case 5:algebraic += "c";
        break;
    case 6:algebraic += "b";
        break;
    case 7:algebraic += "a";
        break;
    }

    switch (row) {
    case 1:algebraic += "1";
        break;
    case 2:algebraic += "2";
        break;
    case 3:algebraic += "3";
        break;
    case 4:algebraic += "4";
        break;
    case 5:algebraic += "5";
        break;
    case 6:algebraic += "6";
        break;
    case 7:algebraic += "7";
        break;
    case 8:algebraic += "8";
        break;
    }

    return algebraic;
}
