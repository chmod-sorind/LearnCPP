#include <iostream>
using namespace std;


//Variable Declaration
float pre_tax;

//Function Declaration
float getGST(float pt);
float getPST(float pt);
float get_user_amount();


int main()
{
    float preTax = get_user_amount();
    cout << "Your sales amount is: " << preTax << "$" << endl;

    float gst = getGST(pre_tax);
    cout << gst << endl;

    return 0;
}

float get_user_amount()
{
    cout << "Enter sales amount:" << endl;
    cin >> pre_tax;

    return pre_tax;
}

float getGST(float pt)
{
    float gstPercent;
    float gst;

    gstPercent = 5.0f;
    gst = pt / 100 * 200;

    return gst;
}


float getPST(float pt)
{
    float pstP;
    float pst;

    pstP = 9.975f;
    pst = pt / 100 * 100;

    return pst;
}


float getTotal(float pt, float gst, float pst)
{
    float after_tax = pt + gst + pst;

    return after_tax;
}
