#include <iostream>
//#import <math>
using namespace std;


//Variable Declaration

//Function Declaration
float getGST(float pt);
float getPST(float pt);
float getTotal(float pt, float gst, float pst);
float get_user_amount();
void swap_by_value(int x, int y);
void swap_by_pointer(int *x, int *y);
void swap_by_reference(int &x, int &y);


int main()
{

//    float preTax = get_user_amount();
    float preTax = 10.0;
    cout << "#########################################" << endl;
    cout << "Sales sum before taxes is: " << preTax << "$" << endl;

    float gst = getGST(preTax);
    cout << "Global Sales Tax = " << gst << "$" << endl;

    float pst = getPST(preTax);
    cout << "Provincial Sales Tax = " << pst << "$" << endl;

    float total = getTotal(preTax, gst, pst);
    cout << "Total sales sum = " << total << "$" << endl;
    cout << "#########################################" << endl;


    int a = 100;
    int b = 200;

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;
    cout << "#########################################" << endl;


    // Call function by value
    swap_by_value(a, b);

    cout << "Call function swap by value" << endl;
    cout << "After swap_by_value, value of a :" << a << endl;
    cout << "After swap_by_value, value of b :" << b << endl;
    cout << "#########################################" << endl;


    // Call function by pointer
    swap_by_pointer(&a, &b);

    cout << "Call function swap2 by pointer" << endl;
    cout << "After swap_by_pointer, value of a :" << a << endl;
    cout << "After swap_by_pointer, value of b :" << b << endl;
    cout << "#########################################" << endl;


    // Call function by reference
    swap_by_reference(a, b);

    cout << "Call function swap3 by reference" << endl;
    cout << "After swap_by_reference, value of a :" << a << endl;
    cout << "After swap_by_reference, value of b :" << b << endl;
    cout << "#########################################" << endl;



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

// Function call by value
// function definition to swap_by_value the values.
void swap_by_value(int x, int y)
{
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}

// Function call by pointer
// function definition to swap_by_pointer the values.
void swap_by_pointer(int *x, int *y)
{
   int temp;
   temp = *x; /* save the value at address x */
   *x = *y; /* put y into x */
   *y = temp; /* put x into y */

   return;
}

// Function call by reference
// function definition to swap_by_reference the values.
void swap_by_reference(int &x, int &y)
{
   int temp;
   temp = x; /* save the value at address x */
   x = y; /* put y into x */
   y = temp; /* put x into y */

   return;
}































