#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <fstream>

using namespace std;

vector <vector <int> > hiddenKeys(53);



void setHiddenKeys()
{
    hiddenKeys[0] = vector <int> {32,10,30,47,20,11,36,21,47,30,27};
    hiddenKeys[1] = vector <int> {11,8,21,8,29,52,22,25,33,0,47};
    hiddenKeys[2] = vector <int> {20,44,5,11,50,14,30,21,6,15,47};
    hiddenKeys[3] = vector <int> {52,5,20,19,24,26,52,25,0,49,3};
    hiddenKeys[4] = vector <int> {20,52,9,31,51,7,39,8,25,37,36};
    hiddenKeys[5] = vector <int> {25,36,44,2,32,40,21,21,10,7,40};
    hiddenKeys[6] = vector <int> {29,13,49,25,9,32,22,50,9,13,48};
    hiddenKeys[7] = vector <int> {1,33,28,23,41,0,8,37,8,48,15};
    hiddenKeys[8] = vector <int> {7,28,43,16,32,36,51,26,2,23,40};
    hiddenKeys[9] = vector <int> {16,31,8,12,38,21,5,35,32,35,4};
    hiddenKeys[10] = vector <int> {29,12,2,18,28,50,22,3,30,1,31};
    hiddenKeys[11] = vector <int> {29,13,34,49,27,2,16,31,25,33,46};
    hiddenKeys[12] = vector <int> {47,22,12,33,26,23,2,12,44,30,11};
    hiddenKeys[13] = vector <int> {30,33,44,38,38,22,21,44,34,5,14};
    hiddenKeys[14] = vector <int> {36,4,25,51,33,41,37,14,22,6,12};
    hiddenKeys[15] = vector <int> {21,32,39,41,44,14,36,28,12,10,31};
    hiddenKeys[16] = vector <int> {42,8,6,19,27,42,5,34,46,47,46};
    hiddenKeys[17] = vector <int> {31,21,29,9,19,46,10,40,12,27,38};
    hiddenKeys[18] = vector <int> {20,34,35,52,35,31,50,20,45,47,11};
    hiddenKeys[19] = vector <int> {51,44,13,37,28,22,19,33,23,28,18};
    hiddenKeys[20] = vector <int> {26,29,42,36,23,21,40,30,17,5,45};
    hiddenKeys[21] = vector <int> {47,34,51,19,25,32,23,40,46,31,42};
    hiddenKeys[22] = vector <int> {5,12,43,19,51,39,36,12,25,33,34};
    hiddenKeys[23] = vector <int> {46,15,24,18,45,40,28,30,52,15,43};
    hiddenKeys[24] = vector <int> {1,16,1,5,7,47,37,7,34,44,43};
    hiddenKeys[25] = vector <int> {24,1,50,38,27,39,43,9,41,19,7};
    hiddenKeys[26] = vector <int> {39,2,49,35,46,24,37,50,45,11,3};
    hiddenKeys[27] = vector <int> {44,31,49,37,2,43,33,14,47,1,28};
    hiddenKeys[28] = vector <int> {42,0,29,16,32,28,31,15,3,13,50};
    hiddenKeys[29] = vector <int> {17,7,27,21,31,1,16,0,31,17,14};
    hiddenKeys[30] = vector <int> {16,19,26,50,17,46,12,34,23,30,11};
    hiddenKeys[31] = vector <int> {8,50,40,17,3,15,50,12,21,10,52};
    hiddenKeys[32] = vector <int> {14,37,46,33,4,3,8,47,21,17,5};
    hiddenKeys[33] = vector <int> {17,47,11,3,50,40,20,9,30,43,4};
    hiddenKeys[34] = vector <int> {0,2,39,44,45,25,15,26,45,0,36};
    hiddenKeys[35] = vector <int> {28,23,44,11,39,36,22,14,17,21,10};
    hiddenKeys[36] = vector <int> {39,10,2,23,15,31,48,48,13,11,22};
    hiddenKeys[37] = vector <int> {3,25,28,4,41,22,18,35,16,32,33};
    hiddenKeys[38] = vector <int> {11,48,24,26,12,3,8,16,25,46,23};
    hiddenKeys[39] = vector <int> {32,33,20,6,34,3,48,4,51,9,45};
    hiddenKeys[40] = vector <int> {38,24,50,4,17,8,7,14,23,0,4};
    hiddenKeys[41] = vector <int> {19,46,3,32,0,47,17,35,27,50,24};
    hiddenKeys[42] = vector <int> {36,45,36,18,40,23,21,37,28,50,0};
    hiddenKeys[43] = vector <int> {9,30,48,45,49,23,3,45,14,41,33};
    hiddenKeys[44] = vector <int> {38,7,1,44,35,21,38,18,16,30,38};
    hiddenKeys[45] = vector <int> {50,46,39,20,14,45,25,11,48,44,46};
    hiddenKeys[46] = vector <int> {17,0,47,9,6,18,40,5,7,28,36};
    hiddenKeys[47] = vector <int> {44,49,16,19,42,13,31,11,10,21,34};
    hiddenKeys[48] = vector <int> {42,7,49,34,2,31,28,42,30,11,18};
    hiddenKeys[49] = vector <int> {41,33,32,18,30,36,4,30,1,36,23};
    hiddenKeys[50] = vector <int> {3,25,12,10,46,16,23,39,22,15,10};
    hiddenKeys[51] = vector <int> {45,1,51,49,38,15,28,18,52,6,38};
    hiddenKeys[52] = vector <int> {49,27,37,20,45,43,1,35,23,46,47};
}

void stringToInts(vector <int> &bufferInts, string &bufferString)
{
    bufferInts.clear();
    for (auto ele: bufferString)
    {
        if (ele == 32)
            bufferInts.push_back(0);
        else if (ele < 95)
            bufferInts.push_back(ele - 64);
        else
            bufferInts.push_back(ele - 70);
    }
}

void intsToString(vector <int> &bufferInts, string &bufferString)
{
    vector <char> output;
    for (auto ele: bufferInts)
    {
        if (ele == 0)
            output.push_back(32);
        else if (ele < 27)
            output.push_back(ele + 64);
        else
            output.push_back(ele + 70);
    }
    bufferString = string(output.begin(), output.end());
}

int abs(int x)
{
    if (x < 0) return -x;
    return x;
}

//preprocessing input makes similar strings look completely different, and this can only be undone once the cyphered text is decrypted
//the offset variable also helps in restricting undoing this operation directly from the cyphered text
void unpreprocessing(vector <int> &input)
{
    for (int i = 0; i < input.size() - 1; ++i)
        input[i] = (input[i] + 53 - input[i + 1]) % 53;
}

int main()
{
    setHiddenKeys();
    string inputString, outputString;
    vector <int> plainText, key, cipherText;
    ifstream keyFile("key.txt");
    ifstream inputFile("Dinput.txt");
    ofstream outputFile("Doutput.txt");
    getline(keyFile, inputString);
    if (inputString.size() < 20 || inputString.size() > 1000)
        return 0;
    stringToInts(key, inputString);
    int index_sum = 0;
    for (int i = 0; i < key.size(); ++i)
        index_sum = (index_sum + i * key[i]) % 97;
    while (inputFile)
    {
        int offset = 0;
        getline(inputFile, inputString);
        if (inputString.size() > 1000 || inputString.size() == 0 || inputFile.bad() || inputFile.fail())
            return 0;
        stringToInts(cipherText, inputString);
        for (int i = 0; i < cipherText.size(); ++i)
        {
            if (cipherText[i] < 0 || cipherText[i] > 52) return 0;
            int pos = hiddenKeys[(key.size() * 101 + cipherText.size() * 97) % 53][index_sum % 11];
            int keyRow = abs((int)(offset + pos + 100*cos(key[pos % key.size()])) + pos % 2) % 53;
            int keyCol = (offset + 2*index_sum + 5*offset + 7*i + 3*key[key.size() - 1 - i % key.size()]) % 11;
            plainText.push_back((cipherText[i] - hiddenKeys[keyRow][keyCol] + 53) % 53);
            offset = (2 * offset + plainText[i] * 7) % 97;
        }
        unpreprocessing(plainText);
        intsToString(plainText, outputString);
        outputFile << outputString << endl;
        plainText.clear();
    }
}