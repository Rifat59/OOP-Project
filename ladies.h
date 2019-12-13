#include<iostream>

using namespace std;

void user_ladies();

FILE * l_fp;

class ladies_dress
{
public:

    int borkha, three_piece, shari;
    ladies_dress(){}
    ladies_dress(int bor, int tp, int sha)
    {
        borkha = bor;
        three_piece = tp;
        shari = sha;
    }

    void user_ladies();
    void ladies_dress_menu();
};

void ladies_dress :: ladies_dress_menu()
{
    cout<<"______________Here are the lists of the ladies_dress_____________\n\n";
    cout<<"         1. Borkhas: "<<borkha<<endl<<"           2. Three_pieces : "<<three_piece<<endl<<"            3. Sharis : "<<shari<<endl<<endl;
    user_ladies();
}

void ladies_dress::user_ladies()
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
                cout<<"\n_________Enter the number of borkhas you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                    if(n > borkha)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        borkha -= n;
                        cout<<"\nThank you for buying borkhas from our shop...!!!\n";
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
                cout<<"\n_________Enter the number of three_pieces you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                    if(n > three_piece)
                    cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        three_piece-= n;
                        cout<<"\nThank you for buying three_pieces from our shop...!!!\n";
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
                cout<<"\n_________Enter the number of sharis you want to buy?? :";
                int n;
                cin>>n;
                if(n < 0){
                    cout<<"\nInvalid number. Please put a valid one...!!!\n";
                }
                else{
                   if(n > shari)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        shari-= n;
                        cout<<"\nThank you for buying sharis from our shop...!!!\n";
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
            l_fp = fopen("ladies_dress.txt", "w");
            fprintf(l_fp, "%d\n%d\n%d\n", borkha, three_piece, shari);
            fclose(l_fp);
            break;
        }
    }

}


class ladies_book
{
public:

    int lstory, lnovel, ldetective;
    ladies_book(){}
    ladies_book(int lsto, int lnov, int ldet)
    {
        lstory = lsto;
        lnovel = lnov;
        ldetective = ldet;
    }

    void user_ladies_books();
    void ladies_books_menu();
};

void ladies_book :: ladies_books_menu()
{
    cout<<"______________Here are the lists of the ladies_books_____________\n\n";
    cout<<"         1. Stories : "<<lstory<<endl<<"           2. Novels : "<<lnovel<<endl<<"            3. Detectives : "<<ldetective<<endl<<endl;
    user_ladies_books();
}

void ladies_book::user_ladies_books()
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
                    if(n > lstory)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        lstory -= n;
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
                    if(n > lnovel)
                    cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        lnovel -= n;
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
                   if(n > ldetective)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        ldetective -= n;
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
            l_fp = fopen("ladies_books.txt", "w");
            fprintf(l_fp, "%d\n%d\n%d\n", lstory, lnovel, ldetective);
            fclose(l_fp);
            break;
        }
    }

}

class ladies_others
{
public:

    int lwatch, lshoe, lglass;
    ladies_others(){}
    ladies_others(int lwat, int lsho, int lgla)
    {
        lwatch = lwat;
        lshoe = lsho;
        lglass = lgla;
    }

    void user_ladies_others();
    void ladies_others_menu();
};

void ladies_others :: ladies_others_menu()
{
    cout<<"______________Here are the lists of the ladies_others_____________\n\n";
    cout<<"         1. Watches : "<<lwatch<<endl<<"           2. Shoes : "<<lshoe<<endl<<"            3. Glasses : "<<lglass<<endl<<endl;
    user_ladies_others();
}

void ladies_others :: user_ladies_others()
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
                    if(n > lwatch)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        lwatch -= n;
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
                    if(n > lshoe)
                    cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        lshoe -= n;
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
                   if(n > lglass)
                        cout<<"\nSorry,invalid number. Please try again..!!\n";
                    else {
                        lglass -= n;
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
            l_fp = fopen("ladies_others.txt", "w");
            fprintf(l_fp, "%d\n%d\n%d\n", lwatch, lshoe, lglass);
            fclose(l_fp);
            break;
        }
    }

}

class ladies
{
public:
    void ladies_menu()
    {
        string input;
        while(1)
        {
            cout<<"\n   ________________Here are the menus for the ladies______________\n\n";
            cout<<"           1.Dress\n            2.Books\n           3.Others\n          0.Main Menu\n";
            cout<<"\n       ___________Enter your choice for ladies item: ";
            cin>>input;
            if(input == "0")
            {
                ladies_menu();
                break;
            }
            else if(input == "1")
            {
                int borkha, three_piece, shari;
                l_fp = fopen("ladies_dress.txt", "r");
                fscanf(l_fp, "%d%d%d", &borkha, &three_piece, &shari);
                ladies_dress lDress(borkha, three_piece, shari);
                lDress.ladies_dress_menu();
                fclose(l_fp);
                break;
            }
            else if(input == "2")
            {
                int lstory, lnovel, ldetective;
                l_fp = fopen("ladies_books.txt", "r");
                fscanf(l_fp, "%d%d%d", &lstory, &lnovel, &ldetective);
                ladies_book lBook(lstory, lnovel, ldetective);
                lBook.ladies_books_menu();
                fclose(l_fp);
                break;
            }
            else if(input == "3")
            {
                int lwatch, lshoe, lglass;
                l_fp = fopen("ladies_others.txt", "r");
                fscanf(l_fp, "%d%d%d", &lwatch, &lshoe, &lglass);
                ladies_others lOthers(lwatch, lshoe, lglass);
                lOthers.ladies_others_menu();
                fclose(l_fp);
                break;
            }
            else
                cout<<"\n\nInvalid input. Please try again!!!!\n\n";
        }
    }
};

