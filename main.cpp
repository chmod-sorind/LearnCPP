#include <iostream>
//#import <math>
using namespace std;


//Variable Declaration

//Function Declaration
float getGST(float pt);
float getPST(float pt);
float getTotal(float pt, float gst, float pst);
float get_user_amount();


int main()
{
    float preTax = get_user_amount();
    cout << "Sales sum before taxes is: " << preTax << "$" << endl;

    float gst = getGST(preTax);
    cout << "Global Sales Tax = " << gst << "$" << endl;

    float pst = getPST(preTax);
    cout << "Provincial Sales Tax = " << pst << "$" << endl;

    float total = getTotal(preTax, gst, pst);
    cout << "Total sales sum = " << total << "$" << endl;

    return 0;
}

float get_user_amount()
{
    float x;
    cout << "Enter sales amount:" << endl;
    cin >> x;
    return x;
}

float getGST(float pt)
{
    float gstPercent = 5.0f;
    float g = gstPercent / 100 * pt;
    return g;
}


float getPST(float pt)
{
    float pstPercentage = 9.975f;
    float p = pstPercentage / 100 * pt;
    return p;
}


float getTotal(float pt, float gst, float pst)
{
    float t = pt + gst + pst;
    return t;
}
