#pragma once
#include <iostream>
#include "clsDate.h"
#include "Global.h"

using namespace std;


class clsScreen
{
protected:

    static bool CheckAccessRights(clsUser::enPermissions Permission)
    {

        if (!CurrentUser.CheckAccessPermission(Permission))
        {
            cout << "\t\t\t\t\t______________________________________";
            cout << "\n\n\t\t\t\t\t  Access Denied! Contact your Admin.";
            cout << "\n\t\t\t\t\t______________________________________\n\n";
            return false;
        }
        else
        {
            return true;
        }

    }

    static void _DrawScreenHeader(string Title, string SubTitle = "")
    {
        cout << "\t\t\t\t\t______________________________________";
        cout << "\n\n\t\t\t\t\t  " << Title;
        if (SubTitle != "")
        {
            cout << "\n\t\t\t\t\t  " << SubTitle;
        }
        cout << "\n\t\t\t\t\t______________________________________\n\n";

        cout << "\t\t\t\t\tUser : ";
        cout << "\t" << CurrentUser.UserName << endl;
        cout << "\t\t\t\t\tDate : ";
        cout << "\t" << clsDate::DateToString(clsDate());
        
        cout << endl << endl;

    }

    static void _CheckAccessRights() {
        cout << 2;
    }


};

