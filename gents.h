#include<iostream>

using namespace std;

void user_gents();

FILE * g_fp;

class gents_dress
{
public:

    int shirt, pant, panjabi, genji;
    gents_dress(){}
    gents_dress(int sh, int pa, int panj, int gen)
    {
        shirt = sh;
        pant = pa;
        panjabi = panj;
        genji = gen;
    }

    void user_gents();
    void gents_dress_menu();
};

void gents_dress :: gents_dress_menu()
{
    cout<<"______________Here are the lists of the gents_dress_____________\n\n";
    cout<<"         1. Shirts : "<<shirt<<endl<<"           2. Pants : "<<pant<<endl<<"            3. Panjabis : "<<panjabi<<endl<<"            4. Genjis : "<<genji<<endl<<endl;
    user_gents();
}

void gents_dress::user_gents()
{
    bool check = false;
    string str,st;
    while(1)
    {
        cout<<"\n\n_____________Select your items : ";
        cin>>str;
        if(str == "1")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of shirts you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                    if(n > shirt)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        shirt -= n;
                        cout<<"\nThank you for buying shirts from our shop...!!!\n";
                    }
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
            //break;
        }
        else if(str == "2")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of pants you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                    if(n > pant)
                    cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        pant -= n;
                        cout<<"\nThank you for buying pants from our shop...!!!\n";
                    }
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
            //break;
        }
        else if(str == "3")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of panjabis you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                   if(n > panjabi)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        panjabi -= n;
                        cout<<"\nThank you for buying panjabis from our shop...!!!\n";
                    } 
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
            //break;
        }
        else if(str == "4")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of genjis you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                   if(n > genji)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        genji -= n;
                        cout<<"\nThank you for buying genjis from our shop...!!!\n";
                    } 
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
            //break;
        }
        else {
            cout<<"\nInvalid keyword. Please try again...!!!\n\\n";
        }
        if(check) {
            g_fp = fopen("gents_dress.txt", "w");
            fprintf(g_fp, "%d\n%d\n%d\n%d\n", shirt, pant, panjabi, genji);
            fclose(g_fp);
            break;
        }
    }

}

class gents_book
{
public:

    int story, novel, detective;
    gents_book(){}
    gents_book(int sto, int nov, int det)
    {
        story = sto;
        novel = nov;
        detective = det;
    }

    void user_gents_books();
    void gents_books_menu();
};

void gents_book :: gents_books_menu()
{
    cout<<"______________Here are the lists of the gents_books_____________\n\n";
    cout<<"         1. Stories : "<<story<<endl<<"           2. Novels : "<<novel<<endl<<"            3. Detectives : "<<detective<<endl<<endl;
    user_gents_books();
}

void gents_book::user_gents_books()
{
    bool check = false;
    string str,st;
    while(1)
    {
        cout<<"\n\n_____________Select your items : ";
        cin>>str;
        if(str == "1")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of story books you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                    if(n > story)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        story -= n;
                        cout<<"\nThank you for buying story books from our shop...!!!\n";
                    }
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
        }
        else if(str == "2")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of novels you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                    if(n > novel)
                    cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        novel -= n;
                        cout<<"\nThank you for buying novels from our shop...!!!\n";
                    }
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
        }
        else if(str == "3")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of detective books you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                   if(n > detective)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        detective -= n;
                        cout<<"\nThank you for buying detective books from our shop...!!!\n";
                    } 
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
        }
        else {
            cout<<"\nInvalid keyword. Please try again...!!!\n\\n";
        }
        if(check) {
            g_fp = fopen("gents_books.txt", "w");
            fprintf(g_fp, "%d\n%d\n%d\n", story, novel, detective);
            fclose(g_fp);
            break;
        }
    }

}

class gents_others
{
public:

    int watch, shoe, glass;
    gents_others(){}
    gents_others(int wat, int sho, int gla)
    {
        watch = wat;
        shoe = sho;
        glass = gla;
    }

    void user_gents_others();
    void gents_others_menu();
};

void gents_others :: gents_others_menu()
{
    cout<<"______________Here are the lists of the gents_others_____________\n\n";
    cout<<"         1. Watches : "<<watch<<endl<<"           2. Shoes : "<<shoe<<endl<<"            3. Glasses : "<<glass<<endl<<endl;
    user_gents_others();
}

void gents_others :: user_gents_others()
{
    bool check = false;
    string str,st;
    while(1)
    {
        cout<<"\n\n_____________Select your items : ";
        cin>>str;
        if(str == "1")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of watches you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                    if(n > watch)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        watch -= n;
                        cout<<"\nThank you for buying watches from our shop...!!!\n";
                    }
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
        }
        else if(str == "2")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of shoes you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                    if(n > shoe)
                    cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        shoe -= n;
                        cout<<"\nThank you for buying shoes from our shop...!!!\n";
                    }
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
        }
        else if(str == "3")
        {
            while(1)
            {
                cout<<"\n_________Enter the number of glasses you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                   if(n > glass)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        glass -= n;
                        cout<<"\nThank you for buying glasses from our shop...!!!\n";
                    } 
                }
                
                cout<<"\nDo you want to buy again?? (yes / no): ";
                cin>>st;
                if(st == "no") {
                    check = true;
                    break;
                }
            }
        }
        else {
            cout<<"\nInvalid keyword. Please try again...!!!\n\\n";
        }
        if(check) {
            g_fp = fopen("gents_others.txt", "w");
            fprintf(g_fp, "%d\n%d\n%d\n", watch, shoe, glass);
            fclose(g_fp);
            break;
        }
    }

}


class gents
{
public:
    void gents_menu()
    {
        string input;
        while(1)
        {
            cout<<"\n   ________________Here are the menus for the gents______________\n\n";
            cout<<"           1.Dress\n            2.Books\n           3.Others\n          0.Main Menu\n";
            cout<<"\n       ___________Enter your choice for gents item: ";
            cin>>input;
            if(input == "0")
            {
                gents_menu();
                break;
            }
            else if(input == "1")
            {
                int shirt, pant, panjabi, genji;
                g_fp = fopen("gents_dress.txt", "r");
                fscanf(g_fp, "%d%d%d%d", &shirt, &pant, &panjabi, &genji);
                gents_dress gDress(shirt, pant, panjabi, genji);
                gDress.gents_dress_menu();
                fclose(g_fp);
                break;
            }
            else if(input == "2")
            {
                int story, novel, detective;
                g_fp = fopen("gents_books.txt", "r");
                fscanf(g_fp, "%d%d%d", &story, &novel, &detective);
                gents_book gBook(story, novel, detective);
                gBook.gents_books_menu();
                fclose(g_fp);
                break;
            }
            else if(input == "3")
            {
                int watch, shoe, glass;
                g_fp = fopen("gents_others.txt", "r");
                fscanf(g_fp, "%d%d%d", &watch, &shoe, &glass);
                gents_others gOthers(watch, shoe, glass);
                gOthers.gents_others_menu();
                fclose(g_fp);
                break;
            }
            else
                cout<<"\n\nInvalid input. Please try again!!!!\n\n";
        }
    }
};
