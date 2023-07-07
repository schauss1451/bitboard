#include <vector>
#include <algorithm>

bool rangeValidation(std::vector<int> range, int indexTo)
{
    if(find(range.begin(), range.end(), indexTo) != range.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool isInFile_A (int indexFrom)
{
    std::vector<int> file_A = {7, 15, 23, 31, 39, 47, 55, 63};
    if(find(file_A.begin(), file_A.end(), indexFrom) != file_A.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool isInFile_B (int indexFrom)
{
    std::vector<int> file_A = {6, 14, 22, 30, 38, 46, 54, 62};
    if(find(file_A.begin(), file_A.end(), indexFrom) != file_A.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool isInFile_C (int indexFrom)
{
    std::vector<int> file_A = {5, 13, 21, 29, 37, 45, 53, 61};
    if(find(file_A.begin(), file_A.end(), indexFrom) != file_A.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool isInFile_D (int indexFrom)
{
    std::vector<int> file_A = {4, 12, 20, 28, 36, 44, 52, 60};
    if(find(file_A.begin(), file_A.end(), indexFrom) != file_A.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool isInFile_E (int indexFrom)
{
    std::vector<int> file_A = {3, 11, 19, 27, 35, 43, 51, 59};
    if(find(file_A.begin(), file_A.end(), indexFrom) != file_A.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool isInFile_F (int indexFrom)
{
    std::vector<int> file_A = {2, 10, 18, 26, 34, 42, 50, 58};
    if(find(file_A.begin(), file_A.end(), indexFrom) != file_A.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool isInFile_G (int indexFrom)
{
    std::vector<int> file_A = {1, 9, 17, 25, 33, 41, 49, 57};
    if(find(file_A.begin(), file_A.end(), indexFrom) != file_A.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool isInFile_H (int indexFrom)
{
    std::vector<int> file_H = {0, 8, 16, 24, 32, 40, 48, 56};
    if(find(file_H.begin(), file_H.end(), indexFrom) != file_H.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool isInRank_2 (int indexFrom)
{
    if (15 >= indexFrom && indexFrom >= 8) {
        return true;
    }
    else {
        return false;
    }
}

bool isInRank_7 (int indexFrom)
{
    if (55 >= indexFrom && indexFrom >= 48) {
        return true;
    }
    else {
        return false;
    }
}