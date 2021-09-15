
/* Name:-Aditya Gupta 
Reg No:-11918706
*/
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
void top()
{
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t Mob:7261092128" << endl;
    cout << "\t\t\t\t\t    IceCream Portal" << endl;
    cout << "\t\t\t\t\t   Geeks IceCream Parlor" << endl;
    cout << "\t\t\t\t\tThe best Icecream in the city!" << endl;
    cout << "\n\n\t\t\t\t\t In Stock Items " << endl
         << endl;
}
int main()
{
    system("color C");
    char name[20];
    int contact;
    float x;
    top();
    cout << setw(5) << "Sr.no:" << setw(15) << "Flavour's" << setw(15) << "\tVolume(in mL)" << setw(15) << "Quantity" << setw(15) << "Price(in Rs.)" << endl;
    cout << setw(5) << "1" << setw(15) << "Butterscotch" << setw(15) << "250" << setw(15) << "23" << setw(15) << "  64" << endl;
    cout << setw(5) << "2" << setw(15) << "Chocolate" << setw(15) << "300" << setw(15) << "28" << setw(15) << "  49" << endl;
    cout << setw(5) << "3" << setw(15) << "Strawberry" << setw(15) << "275" << setw(15) << "34" << setw(15) << "  59" << endl;
    cout << setw(5) << "4" << setw(15) << "Vanilla" << setw(15) << "200" << setw(15) << "40" << setw(15) << "  44" << endl;
    cout << setw(5) << "5" << setw(15) << "Pistabadam" << setw(15) << "200" << setw(15) << "20" << setw(15) << "  75" << endl;
    cout << setw(5) << "6" << setw(15) << "Dryfruit" << setw(15) << "250" << setw(15) << "25" << setw(15) << "  80" << endl;
    cout << setw(5) << "7" << setw(15) << "Exit" << endl;
    int m;
    cout << "Press the serial number of desired flavour: " << ends;
    cin >> m;
    switch (m)
    {
    case 1:
        cout << "\n\t\t\t\tYou selected Butterscotch" << endl;
        cout << "\nEnter the desired quantity: " << ends;
        cin >> x;
        if (x > 23)
        {
            cout << "Sorry only 23 pcs available";
        }
        else
        {
            cout << "Your goodname: " << ends;
            cin >> name;
            cout << "Contact" << ends;
            cin >> contact;
            cout << "Billing details: " << endl;
            cout << "Base Price= " << x * 64 << endl;
            cout << "Cgst=" << x * 64 * 0.05 << endl;
            cout << "Sgst=" << x * 64 * 0.05 << endl;
            cout << "Total payable amount=" << x * 64 + x * 64 * 0.1 << endl;
            ofstream fout;
            fout.open("ice cream@Adi.txt");
            char str[100] = "\t\t\t\t\t INVOICE\n\t\t\t\t\t Fantastic IceCream Parlor\n\t\t\t\t\t Jalandhar Punjab\n\t\t\t\t\tGSTIN:1234567890\nContact:";
            fout << str;
            fout << contact;
            char strn[50] = "\nButterscotch Icecream\nName of customer:";
            fout << strn;
            fout << name;
            char strq[20] = "\nQuantity=";
            fout << strq;
            fout << x;
            char str1[20] = "\nBase price=";
            fout << str1;
            float i = x * 64;
            fout << i;
            char str2[20] = "\nCgst=";
            fout << str2;
            float j = x * 64 * 0.05;
            fout << j;
            char str3[20] = "\nSgst=";
            fout << str3;
            float k = x * 64 * 0.05;
            fout << k;
            char str4[30] = "\nTotal payable amount= ";
            fout << str4;
            float l = i + j + k;
            fout << l;
            char str5[50] = "\n\t\t\t\t\tTHANK YOU \tPLEASE VISIT AGAIN";
            fout << str5;
            cout << "Bill generated in folder project";
            fout.close();
            getch();
            return 0;
        }
        break;
    case 2:
        cout << "\n\t\t\t\tYou selected Chocolate" << endl;
        cout << "\nEnter the desired quantity" << ends;
        cin >> x;
        if (x > 28)
        {
            cout << "Sorry only 28 pcs available";
        }
        else
        {
            cout << "Your goodname: " << ends;
            cin >> name;
            cout << "Contact" << ends;
            cin >> contact;
            cout << "Billing details: " << endl;
            cout << "Base Price= " << x * 49 << endl;
            cout << "Cgst=" << x * 49 * 0.05 << endl;
            cout << "Sgst=" << x * 49 * 0.05 << endl;
            cout << "Total payable amount= " << x * 49 + x * 49 * 0.1 << endl;
            ofstream fout;
            fout.open("ice cream@Adi.txt");
            char str[100] = "\t\t\t\t\t INVOICE\n\t\t\t\t\t Fantastic IceCream Parlor\n\t\t\t\t\t Jalandhar Punjab\n\t\t\t\t\tGSTIN:1234567890\nContact:";
            fout << str;
            fout << contact;
            char strn[50] = "\nChocolate Icecream\nName of customer:";
            fout << strn;
            fout << name;
            char strq[20] = "\nQuantity=";
            fout << strq;
            fout << x;
            char str1[20] = "\nBase price=";
            fout << str1;
            float i = x * 49;
            fout << i;
            char str2[20] = "\nCgst(5%)=";
            fout << str2;
            float j = x * 49 * 0.05;
            fout << j;
            char str3[20] = "\nSgst(5%)=";
            fout << str3;
            float k = x * 49 * 0.05;
            fout << k;
            char str4[30] = "\nTotal payable amount=";
            fout << str4;
            float l = i + j + k;
            fout << l;
            char str5[50] = "\n\t\t\t\t\tTHANK YOU \tPLEASE VISIT AGAIN";
            fout << str5;
            cout << "Bill generated in folder project";
            fout.close();
            getch();
            return 0;
        }
        break;
    case 3:
        cout << "\n\t\t\t\tYou selected Strawberry" << endl;
        cout << "\nEnter the desired quantity" << ends;
        cin >> x;
        if (x > 34)
        {
            cout << "Sorry only 34 pcs available";
        }
        else
        {
            cout << "Your goodname: " << ends;
            cin >> name;
            cout << "Contact" << ends;
            cin >> contact;
            cout << "Billing details:" << endl;
            cout << "Base Price= " << x * 59 << endl;
            cout << "Cgst=" << x * 59 * 0.05 << endl;
            cout << "Sgst=" << x * 59 * 0.05 << endl;
            cout << "Total payable amount=" << x * 59 + x * 59 * 0.1 << endl;
            ofstream fout;
            fout.open("ice cream@Adi.txt");
            char str[100] = "\t\t\t\t\t INVOICE\n\t\t\t\t\t Fantastic IceCream Parlor\n\t\t\t\t\t Jalandhar Punjab\n\t\t\t\t\tGSTIN:1234567890\nContact:";
            fout << str;
            fout << contact;
            char strn[50] = "\nStrawberry Icecream(Rs.59)\nName of customer:";
            fout << strn;
            fout << name;
            char strq[20] = "\nQuantity=";
            fout << strq;
            fout << x;
            char str1[20] = "\nBase price=";
            fout << str1;
            float i = x * 59;
            fout << i;
            char str2[20] = "\nCgst(5%)=";
            fout << str2;
            float j = x * 59 * 0.05;
            fout << j;
            char str3[20] = "\nSgst(5%)=";
            fout << str3;
            float k = x * 59 * 0.05;
            fout << k;
            char str4[30] = "\nTotal payable amount=";
            fout << str4;
            float l = i + j + k;
            fout << l;
            char str5[50] = "\n\t\t\t\t\tTHANK YOU \tPLEASE VISIT AGAIN";
            fout << str5;
            cout << "Bill generated in folder project";
            fout.close();
            getch();
            return 0;
        }
        break;
    case 4:
        cout << "\n\t\t\t\tYou selected Vanilla" << endl;
        cout << "\nEnter the desired quantity" << ends;
        cin >> x;
        if (x > 40)
        {
            cout << "Sorry only 40 pcs available";
        }
        else
        {
            cout << "Your goodname: " << ends;
            cin >> name;
            cout << "Contact" << ends;
            cin >> contact;
            cout << "Billing details:" << endl;
            cout << "Base Price= " << x * 44 << endl;
            cout << "Cgst=" << x * 44 * 0.05 << endl;
            cout << "Sgst=" << x * 44 * 0.05 << endl;
            cout << "Total payable amount=" << x * 44 + x * 44 * 0.1 << endl;
            ofstream fout;
            fout.open("ice cream@Adi.txt");
            char str[100] = "\t\t\t\t\t INVOICE\n\t\t\t\t\t Fantastic IceCream Parlor\n\t\t\t\t\t Jalandhar Punjab\n\t\t\t\t\tGSTIN:1234567890\nContact:";
            fout << str;
            fout << contact;
            char strn[50] = "\nVanilla Icecream(Rs.44)\nName of customer:";
            fout << strn;
            fout << name;
            char strq[20] = "\nQuantity=";
            fout << strq;
            fout << x;
            char str1[20] = "\nBase price=";
            fout << str1;
            float i = x * 44;
            fout << i;
            char str2[20] = "\nCgst(5%)=";
            fout << str2;
            float j = x * 44 * 0.05;
            fout << j;
            char str3[20] = "\nSgst(5%)=";
            fout << str3;
            float k = x * 44 * 0.05;
            fout << k;
            char str4[30] = "\nTotal payable amount=";
            fout << str4;
            float l = i + j + k;
            fout << l;
            char str5[50] = "\n\t\t\t\t\tTHANK YOU \tPLEASE VISIT AGAIN";
            fout << str5;
            cout << "Bill generated in folder project";
            fout.close();
            getch();
            return 0;
        }
        break;
    case 5:
        cout << "\n\t\t\t\tYou selected Pitabadam" << endl;
        cout << "\nEnter the desired quantity" << ends;
        cin >> x;
        if (x > 20)
        {
            cout << "Sorry only 40 pcs available";
        }
        else
        {
            cout << "Your goodname: " << ends;
            cin >> name;
            cout << "Contact" << ends;
            cin >> contact;
            cout << "Billing details:" << endl;
            cout << "Base Price= " << x * 75 << endl;
            cout << "Cgst=" << x * 75 * 0.05 << endl;
            cout << "Sgst=" << x * 75 * 0.05 << endl;
            cout << "Total payable amount=" << x * 75 + x * 75 * 0.1 << endl;
            ofstream fout;
            fout.open("ice cream@Adi.txt");
            char str[100] = "\t\t\t\t\t INVOICE\n\t\t\t\t\t Fantastic IceCream Parlor\n\t\t\t\t\t Jalandhar Punjab\n\t\t\t\t\tGSTIN:1234567890\nContact:";
            fout << str;
            fout << contact;
            char strn[50] = "\nPistabadam Icecream(Rs.75)\nName of customer:";
            fout << strn;
            fout << name;
            char strq[20] = "\nQuantity=";
            fout << strq;
            fout << x;
            char str1[20] = "\nBase price=";
            fout << str1;
            float i = x * 75;
            fout << i;
            char str2[20] = "\nCgst(5%)=";
            fout << str2;
            float j = x * 75 * 0.05;
            fout << j;
            char str3[20] = "\nSgst(5%)=";
            fout << str3;
            float k = x * 75 * 0.05;
            fout << k;
            char str4[30] = "\nTotal payable amount=";
            fout << str4;
            float l = i + j + k;
            fout << l;
            char str5[50] = "\n\t\t\t\t\tTHANK YOU \n\t\t\t\t\tPLEASE VISIT AGAIN";
            fout << str5;
            cout << "Bill generated in folder project";
            fout.close();
            getch();
            return 0;
        }
        break;
    case 6:
        cout << "\n\t\t\t\tYou selected Dryfruit" << endl;
        cout << "\nEnter the desired quantity" << ends;
        cin >> x;
        if (x > 25)
        {
            cout << "Sorry only 25 pcs available";
        }
        else
        {
            cout << "Your goodname: " << ends;
            cin >> name;
            cout << "Contact" << ends;
            cin >> contact;
            cout << "Billing details:" << endl;
            cout << "Base Price= " << x * 80 << endl;
            cout << "Cgst=" << x * 80 * 0.05 << endl;
            cout << "Sgst=" << x * 80 * 0.05 << endl;
            cout << "Total payable amount=" << x * 80 + x * 80 * 0.1 << endl;
            ofstream fout;
            fout.open("ice cream@Adi.txt");
            char str[100] = "\t\t\t\t\t INVOICE\n\t\t\t\t\t Fantastic IceCream Parlor\n\t\t\t\t\t Jalandhar Punjab\n\t\t\t\t\tGSTIN:1234567890\nContact:";
            fout << str;
            fout << contact;
            char strn[50] = "\nDryfruit Icecream(Rs.80)\nName of customer:";
            fout << strn;
            fout << name;
            char strq[20] = "\nQuantity=";
            fout << strq;
            fout << x;
            char str1[20] = "\nBase price=";
            fout << str1;
            float i = x * 80;
            fout << i;
            char str2[20] = "\nCgst(5%)=";
            fout << str2;
            float j = x * 80 * 0.05;
            fout << j;
            char str3[20] = "\nSgst(5%)=";
            fout << str3;
            float k = x * 80 * 0.05;
            fout << k;
            char str4[30] = "\nTotal payable amount=";
            fout << str4;
            float l = i + j + k;
            fout << l;
            char str5[50] = "\n\t\t\t\t\tTHANK YOU \tPLEASE VISIT AGAIN";
            fout << str5;
            cout << "Bill generated in folder project";
            fout.close();
            getch();
            return 0;
        }
        break;
    case 7:
        exit(0);
    default:
        cout << "Invalid Input.";
    }
    getch();
    return 0;
}
