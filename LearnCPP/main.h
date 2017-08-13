#pragma once
#include <iostream>

//Function Declaration
float getGST(float pt);
float getPST(float pt);
float getTotal(float pt, float gst, float pst);
float get_user_amount();
void swap_by_value(int x, int y);
void swap_by_pointer(int *x, int *y);
void swap_by_reference(int &x, int &y);