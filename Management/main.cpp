#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct Copil
{
    int id;
    char varsta;
    char nume[100],prenume[100],nume_mama[100],nume_tata[100],adresa[100];
};
Copil curent,grupa_1[26]={0},grupa_2[26]={0},grupa_3[26]={0};
int grupa_1_e=0,grupa_2_e=0,grupa_3_e=0,valid=0;
char pre[100];
void init()
{
    grupa_1_e=0;grupa_2_e=0;grupa_3_e=0;
    ifstream f("date.txt");
    char a[600],*p;
    int x,aux;
    while(f.getline(a,600))
    {
        x=1;
        p=strtok(a," ");
        while(p!=NULL)
        {
            if(x==1)curent.id=int(p[0]);
            else if(x==2)strcpy(curent.nume,p);
            else if(x==3)strcpy(curent.prenume,p);
            else if(x==4)curent.varsta=int(p[0]);
            else if(x==5)strcpy(curent.adresa,p);
            else if(x==6)strcpy(curent.nume_mama,p);
            else if(x==7)strcpy(curent.nume_tata,p);
            x++;
            p=strtok(NULL," ");
        }
        if(curent.varsta!='9')
        {
            if(curent.varsta>='0'&&curent.varsta<'2')
            {
                if(grupa_1_e==0)
                {
                    grupa_1[1].id=1;
                    strcpy(grupa_1[1].nume,curent.nume);
                    strcpy(grupa_1[1].prenume,curent.prenume);
                    grupa_1[1].varsta=curent.varsta;
                    strcpy(grupa_1[1].adresa,curent.adresa);
                    strcpy(grupa_1[1].nume_mama,curent.nume_mama);
                    strcpy(grupa_1[1].nume_tata,curent.nume_tata);
                    grupa_1_e=1;
                }
                else
                {
                    grupa_1_e++;
                    grupa_1[grupa_1_e].id=grupa_1_e;
                    strcpy(grupa_1[grupa_1_e].nume,curent.nume);
                    strcpy(grupa_1[grupa_1_e].prenume,curent.prenume);
                    grupa_1[grupa_1_e].varsta=curent.varsta;
                    strcpy(grupa_1[grupa_1_e].adresa,curent.adresa);
                    strcpy(grupa_1[grupa_1_e].nume_mama,curent.nume_mama);
                    strcpy(grupa_1[grupa_1_e].nume_tata,curent.nume_tata);
                }
            }
            else if(curent.varsta>='2'&&curent.varsta<'4')
            {
                if(grupa_2_e==0)
                {
                    grupa_2[1].id=1;
                    strcpy(grupa_2[1].nume,curent.nume);
                    strcpy(grupa_2[1].prenume,curent.prenume);
                    grupa_2[1].varsta=curent.varsta;
                    strcpy(grupa_2[1].adresa,curent.adresa);
                    strcpy(grupa_2[1].nume_mama,curent.nume_mama);
                    strcpy(grupa_2[1].nume_tata,curent.nume_tata);
                    grupa_2_e=1;
                }
                else
                {
                    grupa_2_e++;
                    grupa_2[grupa_2_e].id=grupa_2_e;
                    strcpy(grupa_2[grupa_2_e].nume,curent.nume);
                    strcpy(grupa_2[grupa_2_e].prenume,curent.prenume);
                    grupa_2[grupa_2_e].varsta=curent.varsta;
                    strcpy(grupa_2[grupa_2_e].adresa,curent.adresa);
                    strcpy(grupa_2[grupa_2_e].nume_mama,curent.nume_mama);
                    strcpy(grupa_2[grupa_2_e].nume_tata,curent.nume_tata);
                }
            }
            else if(curent.varsta>='4'&&curent.varsta<'7')
            {
                if(grupa_3_e==0)
                {
                    grupa_3[1].id=1;
                    strcpy(grupa_3[1].nume,curent.nume);
                    strcpy(grupa_3[1].prenume,curent.prenume);
                    grupa_3[1].varsta=curent.varsta;
                    strcpy(grupa_3[1].adresa,curent.adresa);
                    strcpy(grupa_3[1].nume_mama,curent.nume_mama);
                    strcpy(grupa_3[1].nume_tata,curent.nume_tata);
                    grupa_3_e=1;
                }
                else
                {
                    grupa_3_e++;
                    grupa_3[grupa_3_e].id=grupa_3_e;
                    strcpy(grupa_3[grupa_3_e].nume,curent.nume);
                    strcpy(grupa_3[grupa_3_e].prenume,curent.prenume);
                    grupa_3[grupa_3_e].varsta=curent.varsta;
                    strcpy(grupa_3[grupa_3_e].adresa,curent.adresa);
                    strcpy(grupa_3[grupa_3_e].nume_mama,curent.nume_mama);
                    strcpy(grupa_3[grupa_3_e].nume_tata,curent.nume_tata);
                }
            }
        }
    }
    f.close();
}
void adaugare(Copil curent)
{
    if(curent.varsta>='0'&&curent.varsta<'2')
        {
            if(grupa_1_e==0)
            {
                grupa_1[1].id=1;
                curent.id=grupa_1_e;
                strcpy(grupa_1[1].nume,curent.nume);
                strcpy(grupa_1[1].prenume,curent.prenume);
                grupa_1[1].varsta=curent.varsta;
                strcpy(grupa_1[1].adresa,curent.adresa);
                strcpy(grupa_1[1].nume_mama,curent.nume_mama);
                strcpy(grupa_1[1].nume_tata,curent.nume_tata);
                grupa_1_e=1;
            }
            else
            {
                grupa_1_e++;
                curent.id=grupa_1_e;
                grupa_1[grupa_1_e].id=grupa_1_e;
                strcpy(grupa_1[grupa_1_e].nume,curent.nume);
                strcpy(grupa_1[grupa_1_e].prenume,curent.prenume);
                grupa_1[grupa_1_e].varsta=curent.varsta;
                strcpy(grupa_1[grupa_1_e].adresa,curent.adresa);
                strcpy(grupa_1[grupa_1_e].nume_mama,curent.nume_mama);
                strcpy(grupa_1[grupa_1_e].nume_tata,curent.nume_tata);
            }
        }
        else if(curent.varsta>='2'&&curent.varsta<'4')
        {
            if(grupa_2_e==0)
            {
                grupa_2[1].id=1;
                curent.id=grupa_2_e;
                strcpy(grupa_2[1].nume,curent.nume);
                strcpy(grupa_2[1].prenume,curent.prenume);
                grupa_2[1].varsta=curent.varsta;
                strcpy(grupa_2[1].adresa,curent.adresa);
                strcpy(grupa_2[1].nume_mama,curent.nume_mama);
                strcpy(grupa_2[1].nume_tata,curent.nume_tata);
                grupa_2_e=1;
            }
            else
            {
                grupa_2_e++;
                curent.id=grupa_2_e;
                grupa_2[grupa_2_e].id=grupa_2_e;
                strcpy(grupa_2[grupa_2_e].nume,curent.nume);
                strcpy(grupa_2[grupa_2_e].prenume,curent.prenume);
                grupa_2[grupa_2_e].varsta=curent.varsta;
                strcpy(grupa_2[grupa_2_e].adresa,curent.adresa);
                strcpy(grupa_2[grupa_2_e].nume_mama,curent.nume_mama);
                strcpy(grupa_2[grupa_2_e].nume_tata,curent.nume_tata);
            }
        }
        else if(curent.varsta>='4'&&curent.varsta<'7')
        {
            if(grupa_3_e==0)
            {
                grupa_3[1].id=1;
                curent.id=grupa_3_e;
                strcpy(grupa_3[1].nume,curent.nume);
                strcpy(grupa_3[1].prenume,curent.prenume);
                grupa_3[1].varsta=curent.varsta;
                strcpy(grupa_3[1].adresa,curent.adresa);
                strcpy(grupa_3[1].nume_mama,curent.nume_mama);
                strcpy(grupa_3[1].nume_tata,curent.nume_tata);
                grupa_3_e=1;
            }
            else
            {
                grupa_3_e++;
                curent.id=grupa_3_e;
                grupa_3[grupa_3_e].id=grupa_3_e;
                strcpy(grupa_3[grupa_3_e].nume,curent.nume);
                strcpy(grupa_3[grupa_3_e].prenume,curent.prenume);
                grupa_3[grupa_3_e].varsta=curent.varsta;
                strcpy(grupa_3[grupa_3_e].adresa,curent.adresa);
                strcpy(grupa_3[grupa_3_e].nume_mama,curent.nume_mama);
                strcpy(grupa_3[grupa_3_e].nume_tata,curent.nume_tata);
            }
        }
        ofstream g("date.txt",ios::app);
        g<<curent.id<<' '<<curent.nume<<' '<<curent.prenume<<' '<<curent.varsta<<' '<<curent.adresa<<' '<<curent.nume_mama<<' '<<curent.nume_tata<<endl;
        g.close();
}
void listare(int x)
{
    int i;
    if(x==1)
    {
        for(i=1;i<=grupa_1_e;i++)
        {
            cout<<"  "<<grupa_1[i].id<<". Nume: "<<grupa_1[i].nume<<endl;
            cout<<"     Prenume: "<<grupa_1[i].prenume<<endl;
            cout<<"     Varsta: "<<grupa_1[i].varsta<<endl;
            cout<<"     Adresa: "<<grupa_1[i].adresa<<endl;
            cout<<"     Nume mama: "<<grupa_1[i].nume_mama<<endl;
            cout<<"     Nume tata: "<<grupa_1[i].nume_tata<<endl;
            cout<<endl;
        }

    }
    else if(x==2)
    {
        for(i=1;i<=grupa_2_e;i++)
        {
            cout<<"  "<<grupa_2[i].id<<". Nume: "<<grupa_2[i].nume<<endl;
            cout<<"     Prenume: "<<grupa_2[i].prenume<<endl;
            cout<<"     Varsta: "<<grupa_2[i].varsta<<endl;
            cout<<"     Adresa: "<<grupa_2[i].adresa<<endl;
            cout<<"     Nume mama: "<<grupa_2[i].nume_mama<<endl;
            cout<<"     Nume tata: "<<grupa_2[i].nume_tata<<endl;
            cout<<endl;
        }
    }
    else if(x==3)
    {
        for(i=1;i<=grupa_3_e;i++)
        {
            cout<<"  "<<grupa_3[i].id<<". Nume: "<<grupa_3[i].nume<<endl;
            cout<<"     Prenume: "<<grupa_3[i].prenume<<endl;
            cout<<"     Varsta: "<<grupa_3[i].varsta<<endl;
            cout<<"     Adresa: "<<grupa_3[i].adresa<<endl;
            cout<<"     Nume mama: "<<grupa_3[i].nume_mama<<endl;
            cout<<"     Nume tata: "<<grupa_3[i].nume_tata<<endl;
            cout<<endl;
        }
    }
    else if(x==4)
    {
        cout<<"________________________________________________________________________________________________________________________";
        cout<<endl;
        cout<<"     Grupa 1"<<endl;
        cout<<"________________________________________________________________________________________________________________________";
        cout<<endl;
        for(i=1;i<=grupa_1_e;i++)
        {
            cout<<"  "<<grupa_1[i].id<<". Nume: "<<grupa_1[i].nume<<endl;
            cout<<"     Prenume: "<<grupa_1[i].prenume<<endl;
            cout<<"     Varsta: "<<grupa_1[i].varsta<<endl;
            cout<<"     Adresa: "<<grupa_1[i].adresa<<endl;
            cout<<"     Nume mama: "<<grupa_1[i].nume_mama<<endl;
            cout<<"     Nume tata: "<<grupa_1[i].nume_tata<<endl;
            cout<<endl;
        }
        cout<<"________________________________________________________________________________________________________________________";
        cout<<endl;
        cout<<"     Grupa 2"<<endl;
        cout<<"________________________________________________________________________________________________________________________";
        cout<<endl;
        for(i=1;i<=grupa_2_e;i++)
        {
            cout<<"  "<<grupa_2[i].id<<". Nume: "<<grupa_2[i].nume<<endl;
            cout<<"     Prenume: "<<grupa_2[i].prenume<<endl;
            cout<<"     Varsta: "<<grupa_2[i].varsta<<endl;
            cout<<"     Adresa: "<<grupa_2[i].adresa<<endl;
            cout<<"     Nume mama: "<<grupa_2[i].nume_mama<<endl;
            cout<<"     Nume tata: "<<grupa_2[i].nume_tata<<endl;
            cout<<endl;
        }
        cout<<"________________________________________________________________________________________________________________________";
        cout<<endl;
        cout<<"     Grupa 3"<<endl;
        cout<<"________________________________________________________________________________________________________________________";
        cout<<endl;
        for(i=1;i<=grupa_3_e;i++)
        {
            cout<<"  "<<grupa_3[i].id<<". Nume: "<<grupa_3[i].nume<<endl;
            cout<<"     Prenume: "<<grupa_3[i].prenume<<endl;
            cout<<"     Varsta: "<<grupa_3[i].varsta<<endl;
            cout<<"     Adresa: "<<grupa_3[i].adresa<<endl;
            cout<<"     Nume mama: "<<grupa_3[i].nume_mama<<endl;
            cout<<"     Nume tata: "<<grupa_3[i].nume_tata<<endl;
            cout<<endl;
        }
        cout<<"________________________________________________________________________________________________________________________";
        cout<<endl;
    }
}
int cautare()
{
    int i;
    for(i=1;i<=grupa_1_e;i++)
        if(strcmp(curent.nume,grupa_1[i].nume)==0)
            if(strcmp(curent.prenume,grupa_1[i].prenume)==0)
                return 1;
    for(i=1;i<=grupa_2_e;i++)
        if(strcmp(curent.nume,grupa_2[i].nume)==0)
            if(strcmp(curent.prenume,grupa_2[i].prenume)==0)
                return 2;
    for(i=1;i<=grupa_3_e;i++)
        if(strcmp(curent.nume,grupa_3[i].nume)==0)
            if(strcmp(curent.prenume,grupa_3[i].prenume)==0)
                return 3;
    return 0;
}
void stergere()
{
    int i;
    for(i=1;i<=grupa_1_e;i++)
        if(strcmp(curent.nume,grupa_1[i].nume)==0)
            if(strcmp(curent.prenume,grupa_1[i].prenume)==0)
                grupa_1[i].varsta='9';
    for(i=1;i<=grupa_2_e;i++)
        if(strcmp(curent.nume,grupa_2[i].nume)==0)
            if(strcmp(curent.prenume,grupa_2[i].prenume)==0)
                grupa_2[i].varsta='9';
    for(i=1;i<=grupa_3_e;i++)
        if(strcmp(curent.nume,grupa_3[i].nume)==0)
            if(strcmp(curent.prenume,grupa_3[i].prenume)==0)
                grupa_3[i].varsta='9';
    ofstream g("date.txt");
    for(i=1;i<=grupa_1_e;i++)
            g<<grupa_1[i].id<<' '<<grupa_1[i].nume<<' '<<grupa_1[i].prenume<<' '<<grupa_1[i].varsta<<' '<<grupa_1[i].adresa<<' '<<grupa_1[i].nume_mama<<' '<<grupa_1[i].nume_tata<<endl;
    for(i=1;i<=grupa_2_e;i++)
            g<<grupa_2[i].id<<' '<<grupa_2[i].nume<<' '<<grupa_2[i].prenume<<' '<<grupa_2[i].varsta<<' '<<grupa_2[i].adresa<<' '<<grupa_2[i].nume_mama<<' '<<grupa_2[i].nume_tata<<endl;
    for(i=1;i<=grupa_3_e;i++)
            g<<grupa_3[i].id<<' '<<grupa_3[i].nume<<' '<<grupa_3[i].prenume<<' '<<grupa_3[i].varsta<<' '<<grupa_3[i].adresa<<' '<<grupa_3[i].nume_mama<<' '<<grupa_3[i].nume_tata<<endl;
    g.close();
    init();
}
void editare(int e)
{
    int i;
    for(i=1;i<=grupa_1_e;i++)
        if(strcmp(curent.nume,grupa_1[i].nume)==0)
            if(strcmp(curent.prenume,grupa_1[i].prenume)==0)
                {
                    if(e==1)strcpy(grupa_1[i].prenume,pre);
                    else if(e==2)grupa_1[i].varsta=curent.varsta;
                    else if(e==3)strcpy(grupa_1[i].adresa,curent.adresa);
                    else if(e==4)strcpy(grupa_1[i].nume_mama,curent.nume_mama);
                    else if(e==5)strcpy(grupa_1[i].nume_tata,curent.nume_tata);
                }
    for(i=1;i<=grupa_2_e;i++)
        if(strcmp(curent.nume,grupa_2[i].nume)==0)
            if(strcmp(curent.prenume,grupa_2[i].prenume)==0)
                {
                    if(e==1)strcpy(grupa_2[i].prenume,pre);
                    else if(e==2)grupa_2[i].varsta=curent.varsta;
                    else if(e==3)strcpy(grupa_2[i].adresa,curent.adresa);
                    else if(e==4)strcpy(grupa_2[i].nume_mama,curent.nume_mama);
                    else if(e==5)strcpy(grupa_2[i].nume_tata,curent.nume_tata);
                }
    for(i=1;i<=grupa_3_e;i++)
        if(strcmp(curent.nume,grupa_3[i].nume)==0)
            if(strcmp(curent.prenume,grupa_3[i].prenume)==0)
                {
                    if(e==1)strcpy(grupa_3[i].prenume,pre);
                    else if(e==2)grupa_3[i].varsta=curent.varsta;
                    else if(e==3)strcpy(grupa_3[i].adresa,curent.adresa);
                    else if(e==4)strcpy(grupa_3[i].nume_mama,curent.nume_mama);
                    else if(e==5)strcpy(grupa_3[i].nume_tata,curent.nume_tata);
                }
    ofstream g("date.txt");
    for(i=1;i<=grupa_1_e;i++)
            g<<grupa_1[i].id<<' '<<grupa_1[i].nume<<' '<<grupa_1[i].prenume<<' '<<grupa_1[i].varsta<<' '<<grupa_1[i].adresa<<' '<<grupa_1[i].nume_mama<<' '<<grupa_1[i].nume_tata<<endl;
    for(i=1;i<=grupa_2_e;i++)
            g<<grupa_2[i].id<<' '<<grupa_2[i].nume<<' '<<grupa_2[i].prenume<<' '<<grupa_2[i].varsta<<' '<<grupa_2[i].adresa<<' '<<grupa_2[i].nume_mama<<' '<<grupa_2[i].nume_tata<<endl;
    for(i=1;i<=grupa_3_e;i++)
            g<<grupa_3[i].id<<' '<<grupa_3[i].nume<<' '<<grupa_3[i].prenume<<' '<<grupa_3[i].varsta<<' '<<grupa_3[i].adresa<<' '<<grupa_3[i].nume_mama<<' '<<grupa_3[i].nume_tata<<endl;
    g.close();
    init();
}
int main()
{
    if(valid==0){init();valid=1;}
    cout<<"MENIU";
    cout<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"1.Situatie gradinita";
    cout<<endl;
    cout<<"2.Inregistrare copil";
    cout<<endl;
    cout<<"3.Cautare copil";
    cout<<endl;
    cout<<"4.Iesire";
    cout<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    int x;
    cin>>x;
    system("cls");
    if(x==4)return 0;
    else if(x==1)
    {
        cout<<"SITUATIE GRADINITA";
        cout<<endl;
        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout<<"1.Situatie grupa 1";
        cout<<endl;
        cout<<"2.Situatie grupa 2";
        cout<<endl;
        cout<<"3.Situatie grupa 3";
        cout<<endl;
        cout<<"4.Situatie generala";
        cout<<endl;
        cout<<"5.Iesire";
        cout<<endl;
        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        int x1;
        cin>>x1;
        system("cls");
        if(x1==1)
        {
            cout<<"                                                   Situatie grupa 1"<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
            listare(1);
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
            cout<<"1. Meniu principal"<<endl<<"2. Iesire"<<endl;
            int x11;
            cin>>x11;
            system("cls");
            if(x11==1)main();
            else return 0;
        }
        else if(x1==2)
        {
            cout<<"Situatie grupa 2"<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
            listare(2);
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
            cout<<"1. Meniu principal"<<endl<<"2. Iesire"<<endl;
            int x11;
            cin>>x11;
            system("cls");
            if(x11==1)main();
            else return 0;
        }
        else if(x1==3)
        {
            cout<<"Situatie grupa 3"<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
            listare(3);
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
            cout<<"1. Meniu principal"<<endl<<"2. Iesire"<<endl;
            int x11;
            cin>>x11;
            system("cls");
            if(x11==1)main();
            else return 0;
        }
        else if(x1==4)
        {
            cout<<"Situatie generala"<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
            listare(4);
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
            cout<<"1. Meniu principal"<<endl<<"2. Iesire"<<endl;
            int x11;
            cin>>x11;
            system("cls");
            if(x11==1)main();
            else return 0;
        }
        else if(x==5)return 0;
        else main();
    }
    else if(x==2)
    {
        cout<<"INREGISTRARE COPIL";
        cout<<endl;
        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout<<"Nume: ";
        cin>>curent.nume;
        cout<<"Prenume: ";
        cin>>curent.prenume;
        cout<<"Adresa: ";
        cin>>curent.adresa;
        cout<<"Varsta: ";
        cin>>curent.varsta;
        cout<<"Nume mama: ";
        cin>>curent.nume_mama;
        cout<<"Nume tata: ";
        cin>>curent.nume_tata;
        cout<<"1.Confirmare";
        cout<<endl;
        cout<<"2.Renuntare";
        cout<<endl;
        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        int x2;
        cin>>x2;
        system("cls");
        int ok=0;
        if(x2==2)main();
        else if(x2==1)
        {
            if(curent.varsta>='0'&&curent.varsta<'2'&&grupa_1_e<25){adaugare(curent);ok=1;}
            else if(curent.varsta>='2'&&curent.varsta<'4'&&grupa_2_e<25){adaugare(curent);ok=1;}
            else if(curent.varsta>='4'&&curent.varsta<'7'&&grupa_3_e<25){adaugare(curent);ok=1;}
            else
            {
                cout<<"Ne pare rau, dar nu mai avem locuri disponibile"<<endl;
                main();
            }
        }
        else main();
        if(ok==1)
        {
            init();
            cout<<"Copilul a fost inregistrat cu succes"<<endl;
        }
        cout<<"1. Meniu principal"<<endl<<"2. Iesire"<<endl;
        int x21;
        cin>>x21;
        system("cls");
        if(x21==1)main();
        else return 0;
    }
    else if(x==3)
    {
        cout<<"Cautare copil"<<endl;
        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout<<endl;
        cout<<"Nume: ";
        cin>>curent.nume;
        cout<<"Prenume: ";
        cin>>curent.prenume;
        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout<<endl;
        cout<<"1. Confirmare"<<endl;
        cout<<"2. Renuntare"<<endl;
        int x31;
        cin>>x31;
        system("cls");
        if(x31==2)main();
        else if(x31==1)
        {
            if(cautare()==0)
            {
                cout<<"Cautare copil"<<endl;
                cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                cout<<"Copilul nu exista in baza noasta de date.";
                cout<<endl;
                cout<<"1. Meniu principal";
                cout<<endl;
                cout<<"2. Iesire";
                cout<<endl;
                cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                int x32;
                cin>>x32;
                system("cls");
                if(x32==2)return 0;
                else main();
            }

            else
            {
                cout<<"Cautare copil"<<endl;
                cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                cout<<endl;
                cout<<"Copilul cautat se afla in baza noastra de date";
                cout<<endl;
                cout<<"1. Editare date"<<endl;
                cout<<"2. Stergere copil"<<endl;
                cout<<"3. Meniu principal"<<endl;
                cout<<"4. Iesire"<<endl;
                int x33;
                cin>>x33;
                system("cls");
                if(x33==4)return 0;
                else if(x33==3)main();
                else if(x33==2)
                {
                    stergere();
                    int i;
                    ofstream g("date.txt");
                    for(i=1;i<=grupa_1_e;i++)
                        g<<grupa_1[i].id<<' '<<grupa_1[i].nume<<' '<<grupa_1[i].prenume<<' '<<grupa_1[i].varsta<<' '<<grupa_1[i].adresa<<' '<<grupa_1[i].nume_mama<<' '<<grupa_1[i].nume_tata<<endl;
                    for(i=1;i<=grupa_2_e;i++)
                        g<<grupa_2[i].id<<' '<<grupa_2[i].nume<<' '<<grupa_2[i].prenume<<' '<<grupa_2[i].varsta<<' '<<grupa_2[i].adresa<<' '<<grupa_2[i].nume_mama<<' '<<grupa_2[i].nume_tata<<endl;
                    for(i=1;i<=grupa_3_e;i++)
                        g<<grupa_3[i].id<<' '<<grupa_3[i].nume<<' '<<grupa_3[i].prenume<<' '<<grupa_3[i].varsta<<' '<<grupa_3[i].adresa<<' '<<grupa_3[i].nume_mama<<' '<<grupa_3[i].nume_tata<<endl;
                    g.close();
                    cout<<"Copilul a fost eliminat din baza de date."<<endl;
                    cout<<"1. Meniu principal"<<endl;
                    cout<<"2. Iesire"<<endl;
                    int y1;
                    cin>>y1;
                    if(y1==2)return 0;
                    else main();
                }
                else if(x33==1)
                {
                    cout<<"Editare date"<<endl;
                    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                    cout<<endl;
                    cout<<"1. Editare prenume"<<endl;
                    cout<<"2. Editare varsta"<<endl;
                    cout<<"3. Editare adresa"<<endl;
                    cout<<"4. Editare nume mama"<<endl;
                    cout<<"5. Editare nume tata"<<endl;
                    cout<<"6. Meniu principal"<<endl;
                    cout<<"7. Iesire"<<endl;
                    int x331;
                    cin>>x331;
                    system("cls");
                    if(x331==7)return 0;
                    else if(x331==6)main();
                    else if(x331==1)
                    {
                        cout<<"Editare prenume"<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        cout<<endl;
                        cout<<"Introduceti noul prenume: ";
                        cin>>pre;
                        cout<<"1. Confirmare";
                        cout<<endl;
                        cout<<"2. Renuntare";
                        cout<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        int x332;
                        cin>>x332;
                        system("cls");
                        if(x332==2)main();
                        else if(x332=1)
                        {
                            editare(x331);
                            cout<<"Prenumele a fost modificat cu succes."<<endl;
                            cout<<"1. Meniu principal";
                            cout<<endl;
                            cout<<"2. Iesire";
                            cout<<endl;
                            cin>>x332;
                            system("cls");
                            if(x332==2)return 0;
                            else if(x332==1)main();
                        }
                    }
                    else if(x331==2)
                    {
                        cout<<"Editare varsta"<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        cout<<endl;
                        cout<<"Introduceti noua varsta: ";
                        cin>>curent.varsta;
                        cout<<"1. Confirmare";
                        cout<<endl;
                        cout<<"2. Renuntare";
                        cout<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        int x332;
                        cin>>x332;
                        system("cls");
                        if(x332==2)main();
                        else if(x332==1){
                        editare(x331);
                        if(curent.varsta>='0'&&curent.varsta<'2'&&grupa_1_e==25)
                        {
                            cout<<"Ne pare rau dar nu mai avem locuri disponibile.";
                            cout<<endl;
                            cout<<"1. Meniu principal";
                            cout<<endl;
                            cout<<"2. Iesire";
                            cout<<endl;
                            int y;
                            cin>>y;
                            if(y==2)return 0;
                            else main();
                        }
                        else if(curent.varsta>='2'&&curent.varsta<'4'&&grupa_2_e==25)
                        {
                            cout<<"Ne pare rau dar nu mai avem locuri disponibile.";
                            cout<<endl;
                            cout<<"1. Meniu principal";
                            cout<<endl;
                            cout<<"2. Iesire";
                            cout<<endl;
                            int y;
                            cin>>y;
                            if(y==2)return 0;
                            else main();
                        }
                        else if(curent.varsta>='4'&&curent.varsta<'7'&&grupa_3_e==25)
                        {
                            cout<<"Ne pare rau dar nu mai avem locuri disponibile.";
                            cout<<endl;
                            cout<<"1. Meniu principal";
                            cout<<endl;
                            cout<<"2. Iesire";
                            cout<<endl;
                            int y;
                            cin>>y;
                            if(y==2)return 0;
                            else main();
                        }
                        else if(curent.varsta>='7')
                        {
                            cout<<"Ne pare rau dar nu mai avem locuri disponibile.";
                            cout<<endl;
                            cout<<"1. Meniu principal";
                            cout<<endl;
                            cout<<"2. Iesire";
                            cout<<endl;
                            int y;
                            cin>>y;
                            system("cls");
                            if(y==2)return 0;
                            else main();
                        }
                        else
                        {
                            cout<<"Varsta a fost modificata cu succes."<<endl;
                            cout<<"1. Meniu principal";
                            cout<<endl;
                            cout<<"2. Iesire";
                            cout<<endl;
                            cin>>x332;
                            system("cls");
                            if(x332==2)return 0;
                            else if(x332==1)main();
                        }}
                    }
                    else if(x331==3)
                    {
                        cout<<"Editare adresa"<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        cout<<endl;
                        cout<<"Introduceti noua adresa: ";
                        cin>>curent.adresa;
                        cout<<"1. Confirmare";
                        cout<<endl;
                        cout<<"2. Renuntare";
                        cout<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        int x332;
                        cin>>x332;
                        system("cls");
                        if(x332==2)main();
                        else if(x332=1)
                        {
                            editare(x331);
                            cout<<"Adresa a fost modificata cu succes."<<endl;
                            cout<<"1. Meniu principal";
                            cout<<endl;
                            cout<<"2. Iesire";
                            cout<<endl;
                            cin>>x332;
                            system("cls");
                            if(x332==2)return 0;
                            else if(x332==1)main();
                        }
                    }
                    else if(x331==4)
                    {
                        cout<<"Editare nume mama"<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        cout<<endl;
                        cout<<"Introduceti noul nume al mamei: ";
                        cin>>curent.nume_mama;
                        cout<<"1. Confirmare";
                        cout<<endl;
                        cout<<"2. Renuntare";
                        cout<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        int x332;
                        cin>>x332;
                        system("cls");
                        if(x332==2)main();
                        else if(x332=1)
                        {
                            editare(x331);
                            cout<<"Numele mamei a fost modificat cu succes."<<endl;
                            cout<<"1. Meniu principal";
                            cout<<endl;
                            cout<<"2. Iesire";
                            cout<<endl;
                            cin>>x332;
                            system("cls");
                            if(x332==2)return 0;
                            else if(x332==1)main();
                        }
                    }
                    else if(x331==5)
                    {
                        cout<<"Editare nume tata"<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        cout<<endl;
                        cout<<"Introduceti noul nume al tatalui: ";
                        cin>>curent.nume_tata;
                        cout<<"1. Confirmare";
                        cout<<endl;
                        cout<<"2. Renuntare";
                        cout<<endl;
                        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        int x332;
                        cin>>x332;
                        system("cls");
                        if(x332==2)main();
                        else if(x332=1)
                        {
                            editare(x331);
                            cout<<"Numele tatalui a fost modificat cu succes."<<endl;
                            cout<<"1. Meniu principal";
                            cout<<endl;
                            cout<<"2. Iesire";
                            cout<<endl;
                            cin>>x332;
                            system("cls");
                            if(x332==2)return 0;
                            else if(x332==1)main();
                        }
                    }
                }
            }
        }
        else main();
    }
    return 0;
}
