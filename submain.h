#include<bits/stdc++.h>
#include <iostream>
#include "kids.h"
#include "gents.h"
#include "ladies.h"
#include"lol.h"
using namespace std;


int KHR_SUPERSHOP()
{
    string choice;

    cout<<"\n\n                     ************____________WELCOME TO K.H.R. SUPERSHOP_____________************\n\n";
    cout<<"_____This is an online supershop. You can buy our product very easily. The items of our supershop is given in below____\n\n";
    cout<<"                 1. kids Item\n                  2. Gents Item\n                 3. Ladies Item\n\n";

    while(1)
    {
        cout<<"         ______________Please enter your choice : ";

        cin>>choice;

        if(choice == "1")
        {
            kids kids_item;
            kids_item.kids_menu();
            break;
        }
        else if(choice == "2")
        {
            gents gents_item;
            gents_item.gents_menu();
            break;
        }
        else if(choice == "3")
        {
            ladies ladies_item;
            ladies_item.ladies_menu();
            break;
        }
        else
        {
            cout<<"\n\nInvalid number. Please enter a valid one : ";
        }
    }

    return 0;
}
