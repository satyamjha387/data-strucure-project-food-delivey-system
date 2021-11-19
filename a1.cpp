#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

#define Infty 9999
#define MAX 5

void insert_First(int data, string foodname, int quantity, float price);
void insert_Mid(int pos, int data, string foodname, int quantity, float price);
void insertend(int data, string foodname, int quantity, float price);
void updatefood(int udata, int uquantity);
void dijkstra_algo(vector<vector<int>> G, int n, int startnode);
void foodlist();
void order_view(int order, int quantity, int or_no);
void deletefood(int serial);
int countitem();
void cls();
void main_menu();
void br(int line);
void pre(int tab);
void middle1();




vector<vector<int>> G = { 
                            {0,10,0,15,100},
                            {25,0,50,0,0},
                            {0,55,0,20,60},
                            {30,0,80,0,70},
                            {110,0,40,65,0}
                         };


struct Node
{
 
    string foodname;
    int quantity;
    float price;
    int data;
    struct Node *next;
};


void dijkstra_algo(vector<vector<int>> G,int n,int start) 
{
   
    vector<vector<int>> costInTime(MAX,vector<int>(MAX));
    vector<int> Time(MAX),pred(MAX,start),visited(MAX,0);
    int count,minTime,nextnode,i,j;
    for( i=0;i<n;i++)
        for(j=0;j<n;j++)         
            if(G[i][j]==0)
               costInTime[i][j]=Infty;
            else
                costInTime[i][j]=G[i][j];
                

            for(int i=0;i<n;i++)
            {
                
                Time[i]=costInTime[start][i];    
            }
            Time[start]=0;
            visited[start]=1;
            count=1;
            while(count<n-1)
            {
                 
                minTime=Infty;

                for(int i=0;i<n;i++)
                    if(Time[i]<minTime&&!visited[i])
                    {
                        
                        minTime=Time[i];
                        nextnode=i;
                    }
 

                    visited[nextnode]=1;
                    for(int i=0;i<n;i++)
                        if(!visited[i])
                            if(minTime+costInTime[nextnode][i]<Time[i])
                            {
                                 
                                Time[i]=minTime+costInTime[nextnode][i];
                                pred[i]=nextnode;
                            }
                            count++;
                        }

                        for(int i=0;i<start;i++)
                            if(i!=start)
                            {
 
                                 cout<<"\n\t\t\tCafe_Yari_dosti";
                                j=i;
                                do
                                {
                                    j=pred[j];
                                    cout<<"- > "<<j;
                                }while(j!=start);
                               cout<<"\n\t\t\tTime required to reach the destination="<<Time[i]<<" mins";
                                
 
 
                            }
                            int min;
                            min=Time[0];
                            for(int i=1;i<start;i++)
                            {
 
                                if(min>Time[i])
                                {
                                    min=Time[i];
                                }
 
                            }
                            cout<<"\n\n\n\t\t\tMinimum time is "<<min<<" mins\n";
                           
}

typedef struct Node node;
node *head, *list;


int main()
{

    cls();

 
    int c = 0;
    int any;
    vector<int> cardno(20);
    vector<float> cardmoney(20);
    vector<int>total_order(50);
    vector<int> order_quantity(50);
    float totalmoney = 0;
    int order = 0;
    int uquantity;
    int citem;
 
    head = NULL;
    insert_First(1,"Burger   ", 23, 120.23);
    insertend(2, "Pizza    ", 13, 100.67);
    insertend(3, "Hot Cake ", 8, 720.83);
    insertend(4, "Coffie   ", 46, 70.23);
    insertend(5, "Ice-Cream", 46, 70.23);
    insertend(6, "Sandwich ", 34, 60.23);
    insertend(7, "Grill    ", 7, 520.29);
    insertend(8, "Nun-Bread", 121, 35.13);
    insertend(9, "Cold Drinks", 73, 20.13);
 
mainmenu:
    br(1);
    
    main_menu();
    int main_menu_choice;
 
    br(1);
    pre(4);
    fflush(stdin); 
    cin>>main_menu_choice;
 
    if ((main_menu_choice >= 1 && main_menu_choice <= 3))
    {
 
        if (main_menu_choice == 1)
        {
 
        foodlist:
 
            cls();
           cout<<"=> 0. Main Menu ";
            foodlist();
        }
 
        else if (main_menu_choice == 2)
        {
 
        adminpanelchoice:
 
            int admin_panel_choice;
 
            cls();
            middle1();
            pre(4);
            cout<<"1. Main Menu\n\n\t";
            Sleep(300);
           cout<<"Please Enter Password or ( 1 to Back in Main Menu ) : ";
 
            fflush(stdin);
           cin>>admin_panel_choice;
 
            if (admin_panel_choice == 123321)
            {
 
                node *temp;
 
                temp = list;
 
            adminchoice:
 
                cls();
              

                br(5);
                pre(4);
                cout<<"You are on Admin Pannel\n\n";
                pre(4);
                cout<<" 1. Total Cash Today \n\n";
                Sleep(250);
                pre(4);
                cout<<" 2. View Card Pay \n\n";
                Sleep(250);
                pre(4);
                cout<<" 3. Add Food \n\n";
                Sleep(250);
                pre(4);
                cout<<" 4. Delete Food \n\n";
                Sleep(250);
                pre(4);
                cout<<" 5. Instant Food List \n\n";
                Sleep(250);
                pre(4);
                cout<<" 6. Item Counter \n\n";
                Sleep(250);
                pre(4);
                cout<<" 7. Instant Order Preview\n\n";
                Sleep(250);
                pre(4);
                cout<<" 0. Main Menu ";
                Sleep(250);
 
                int adminchoice;
 
               fflush(stdin);
               cin>>adminchoice;
 
                if (adminchoice == 1)
                {
 
                    cls();
                    middle1();
                    pre(4);
                    cout<<"Todays Total Cash : "<<totalmoney<<"  \n" ;
 
                    Sleep(2000);
 
                    goto adminchoice;
                }
                else if (adminchoice == 2)
                {
 
                    if (c != 0)
                    {
 
                        cls();
                        br(3);
                        pre(4);
 
                       cout<<" ____________________________\n";
                        pre(4);
                        cout<<"|   Card NO.   |   Money $   |\n";
                        pre(4);
                        cout<<"------------------------------\n";
                        pre(4);
 
                        for (int z = 0; z < c; z++)
                        {
 
                            cout<<"|" <<  cardno[z]<< "|"<<  cardmoney[z]<<"|\n";
                            pre(4);
                            cout<<"------------------------------\n";
                            pre(4);
                            Sleep(150);
                        }
                        Sleep(1500);
                    }
 
                    if (c == 0)
                    {
 
                        cls();
                        middle1();
                        pre(4);
                        cout<<"No Card History\n";
                    }
                    Sleep(1500);
                    goto adminchoice;
                }
 
                else if (adminchoice == 3)
                {
 
                foodadd:
                    cls();
 
                   string ffoodname;
                    int fquantity;
                    int fdata;
                    float fprice;
                    int fposi;
 
                    br(3);
                    pre(4);
                    cout<<" Enter Food Name :  ";
 
                   fflush(stdin);
                    cin>>ffoodname;
                fquantity:
                 fflush(stdin);
 
                    br(2);
                    pre(4);
                    cout<<" Enter Food Quantity :  ";
 
                   cin>>fquantity;
                   fflush(stdin);
 
                foodserial:
                    br(2);
                    pre(4);
                   cout<<" Enter Food Serial :  ";
                    cin>>fdata;
                    node *exist;
                    exist = list;
                    while (exist->data != fdata)
                    {
                        if (exist->next == NULL)
                        {
                            break;
                        }
                        exist = exist->next;
                    }
                    if (exist->data == fdata)
                    {
                        cls();
                        br(5);
                        pre(3);
                       cout<<" Food Serial Already Exist, Please Re-Enter  ";
                        Sleep(2000);
                        goto foodserial;
                    }
 
                fprice:
                  fflush(stdin);
 
                    br(2);
                    pre(4);
                   cout<<" Enter Food Price :  ";
                    fflush(stdin);
 
                    cin>>fprice;
 
                    br(2);
                    pre(4);
                    cout<<"Submiting your data";
                    for (int cs = 0; cs < 4; cs++)
                    {
                        cout<<" .";
                        Sleep(500);
                    }
 
                    insertend(fdata, ffoodname, fquantity, fprice);
 
                    br(2);
                    pre(4);
                    cout<<"Adding Food  Successfull....\n";
 
                    Sleep(2000);
 
                    goto adminchoice;
                }
                else if (adminchoice == 4)
                {
 
                    cls();
                    middle1();
                    pre(2);
                    cout<<"Enter Serial No of the Food To Delete : ";
                fdelete:
                    int fdelete;
                    fflush(stdin);
                    cin>>fdelete;
                    node *temp;
                    temp = list;
                    while (temp->data != fdelete)
                    {
                        temp = temp->next;
                    }
                    if (temp->data == fdelete)
                    {
                        deletefood(fdelete);
                    }
                    else
                    {
                        br(2);
                        pre(2);
                        cout<<"Please Enter Correct Number :  ";
                        Sleep(500);
                        goto fdelete;
                    }
 
                    goto adminchoice;
                }
 
                else if (adminchoice == 5)
                {
 
                    cls();
                    foodlist();
                    Sleep(1000);
 
                    br(2);
                    pre(4);
                    cout<<"1. <-- back  \n\n";
                    pre(5);
 
                    fflush(stdin);
                    cin>>any;
 
                    goto adminchoice;
                }
 
                else if (adminchoice == 6)
                {
 
                    citem = countitem();
                    cls();
                    for (int cs = 1; cs <= citem; cs++)
                    {
                        middle1();
                        pre(4);
                        cout<<"Item Counting ";
                        cout<<" %d ", cs;
                        Sleep(150);
                        cls();
                    }
                    cls();
                    middle1();
                    pre(4);
                    cout<<"Total Food Item is -->"<<citem<<"\n";
                    Sleep(2000);
                    goto adminchoice;
                }
 
               
              
                else if (adminchoice == 7)
                {
 
                    cls();
                    br(2);
                    pre(2);
                  
                  cout<<"\n\t\t";
                    cout<<"______________________________________________________ ";

                    cout<<"\n\t\t";
     
                    cout<<"|  Order No.  |   FooD Name   |  Quantity |  In Stock |";
            
                    cout<<"\n\t\t";
                 
                    cout<<"------------------------------------------------------";
                  
                    for (int o = 1; o <= order; o++)
                    {
                        order_view(total_order[o], order_quantity[o], o);
                    }
 
                    br(2);
                    pre(4);
                    cout<<"1. <-- back  \n\n";
                    pre(5);
 
                    fflush(stdin);
                   cin>>any;
 
                    goto adminchoice;
                }
                else if (adminchoice == 0)
                {
 
                    goto mainmenu;
                }
 
                else
                {
                    br(2);
                    pre(4);
                    cout<<"Please Select From List :  ";
                    Sleep(500);
                    goto adminchoice;
                }
            }
 
            else if (admin_panel_choice == 1)
            {
                goto mainmenu;
            }
            else
            {
                br(2);
                pre(4);
                cout<<"Please Enter Correct Choice";
                goto adminpanelchoice;
            }
        }
 
        else if (main_menu_choice == 3)
        {
            cls();
            middle1();
            pre(3);
            cout<<"Thank You For Using Our System \n\n\n\n\n\n\n";
            Sleep(1000);
 
            exit(1);
        }
    }
    else
    {
        br(2);
        pre(4);
        cout<<"Please Enter Correct Choice";
        Sleep(300);
        goto mainmenu;
    }
 
    int get_food_choice;
 
    br(2);
    pre(3);
    fflush(stdin);
    cout<<"Place Your Order: ";
    cin>>get_food_choice;
 
    if (get_food_choice == 0)
    {
        goto mainmenu;
    }
 
    node *temp;
 
    temp = list;
 
    while (temp->data != get_food_choice)
    {
 
        temp = temp->next;
        if (temp == NULL)
        {
            br(2);
            pre(4);
            cout<<"Please Choice From List ";
            br(2);
            Sleep(1000);
            goto foodlist;
        }
    }
    if (get_food_choice == temp->data)
    {
 
    fcquantity:
        br(2);
        pre(4);
        cout<<"Enter Food Quantity : ";
 
        int fcquantity;
 
        fflush(stdin);
       cin>>fcquantity;
        cls();
 
        if (fcquantity == 0)
        {
            cls();
            middle1();
            pre(3);
            cout<<"Quantity Can not be Zero ";
            Sleep(2000);
            cls();
            goto foodlist;
        }
        else if (fcquantity > temp->quantity)
        {
            cls();
            middle1();
            pre(3);
            cout<<"Out of Stock ! ";
            Sleep(2000);
 
            goto foodlist;
        }
       
        middle1();
        pre(4);
        cout<<"Choice food"<<temp->foodname<<" its price is"<<  temp->price * fcquantity<< " \n\n";
     
        pre(4);
        cout<<"\n\t\t\t Please select your locality \n";
         cout<<"\n\t\t\t1:DTU_Rohni_sector_16 \n\t\t\t2:Punjabi Bagh \n\t\t\t3:karol Bagh \n\t\t\t4:Chandni Chowk \n\t\t\t5:Janakpuri";
    cout<<"\n\n\t\t\tEnter Your Area no.: ";
    int u,i,j;
    int ant=5;
    cin>>u;
    dijkstra_algo(G,ant,u-1);
 
         pre(4);
        cout<<"\n\t\t\t1. Confirm to buy this \n\n";
        pre(4);
        cout<<"2. Food List  \t\t\t";
 
    confirm:
        int confirm;
 
        fflush(stdin);
        cin>>confirm;
 
        if (confirm == 1)
        {
 
            br(2);
            pre(4);
            cout<<" 1. Cash ";
            br(2);
            pre(4);
            cout<<" 2. Credit ";
        payment:
            int payment;
 
            fflush(stdin);
            cin>>payment;
 
            if (payment == 1)
            {
 
                totalmoney += temp->price * fcquantity;
                order++;
                total_order[order] = get_food_choice;
                order_quantity[order] = fcquantity;
                uquantity = temp->quantity - fcquantity;
 
                updatefood(get_food_choice, uquantity);
 
                cls();
                middle1();
                pre(4);
                cout<<"===>THANK YOU<===";
                br(2);
                pre(4);
                cout<<"Food Ordered Successfully ...";
                br(2);
                pre(4);
                cout<<"1. Wanna Buy Another Delicacy  ? ";
                br(2);
                pre(4);
                cout<<"2. Main Menu ";
            psmenu:
                int ps_menu;
 
                fflush(stdin);
                cin>>ps_menu;
 
                if (ps_menu == 1)
                {
                    goto foodlist;
                }
                else if (ps_menu == 2)
                {
                    goto mainmenu;
                }
                else
                {
                    br(2);
                    pre(4);
                    cout<<"Please Choice from list : ";
                    goto psmenu;
                }
            }
 
          
 
            else if (payment == 2)
            {
 
                int card_number[100];
 
                c++;
 
                cls();
                middle1();
                pre(4);
                cout<<"Enter Your Card No : ";
 
                fflush(stdin);
                cin>>card_number[c];
 
                cardno[c-1] = card_number[c-1];
 
                int pin;
 
                br(2);
                pre(2);
                cout<<"Enter Your Card Pin [we never save your pin]  : ";
 
                fflush(stdin);
                cin>>pin;
 
                cardmoney[c] = temp->price * fcquantity;
 
                totalmoney += temp->price * fcquantity;
                order++;
                total_order[order] = get_food_choice;
                order_quantity[order] = fcquantity;
 
                uquantity = temp->quantity - fcquantity;
 
                updatefood(get_food_choice, uquantity);
 
                br(2);
                pre(4);
                cout<<"Payment Success...";
                br(2);
                pre(4);
                cout<<"1. Wanna Buy Another Delicious ? ";
                br(2);
                pre(4);
                cout<<"2. Main Menu ";
            psmenu2:
                int ps_menu2;
 
                cin>>ps_menu2;
 
                if (ps_menu2 == 1)
                {
                    goto foodlist;
                }
                else if (ps_menu2 == 2)
                {
                    goto mainmenu;
                }
                else
                {
                    br(2);
                    pre(4);
                    cout<<"Please Choice from list : ";
                    goto psmenu2;
                }
            }
 
            else
            {
 
                br(2);
                pre(4);
                cout<<"Enter Choice from List : ";
 
                goto payment;
            }
 
        }
 
        else if (confirm == 2)
        {
 
            goto foodlist;
        }
 
        else
        {
            br(2);
            pre(4);
            cout<<"Enter Choise from List : ";
 
            goto confirm;
 
        }
 
    } 
 
    else
    {
 
        br(2);
        pre(4);
        cout<<"Please Choice From List ";
        br(2);
        Sleep(300);
 
        goto foodlist;
 
    } 
}


void main_menu()
{
 
    cls();
    br(5);
    pre(3);
    cout<<"===> 1. Food List";
    Sleep(400);
    br(2);
    pre(3);
    cout<<"===> 2. Admin Panel";
    Sleep(400);
    br(2);
    pre(3);
    cout<<"===> 3. Exit";
    Sleep(400);
   
 
    br(1);
}

void insertend(int data,string foodname, int quantity, float price)
{
 
    node *temp;
 
    temp = new node;
 
    temp->data = data;
 
    temp->price = price;
 
    temp->quantity = quantity;
 
    temp->foodname = foodname;  
 
    temp->next = NULL;
 
    if (head == NULL)
    {
        head = temp;
        list = head;
    }
    else
    {
 
        while (head->next != NULL)
        {
            head = head->next;
        }
 
        head->next = temp;
    }
}
 
void insert_First(int data,string foodname, int quantity, float price)
{
 
    node *temp;
 
    temp = new node;
 
    temp->data = data;
 
    temp->price = price;
 
    temp->foodname = foodname;  
 
    temp->quantity = quantity;
 
    temp->next = head;
 
    head = temp;
 
    list = head;
}
 
void insert_Mid(int pos, int data, string foodname, int quantity, float price)
{
 
    node *temp;
 
    temp = new node;
 
    temp->data = data;
 
    temp->price = price;
 
    temp->quantity = quantity;
 
    temp->foodname = foodname;  
 
    while (head->next->data != pos)
    {
 
        head = head->next;
    }
 
    temp->next = head->next;
    head->next = temp;
 
    
}
 
void deletefood(int serial)
{
 
    node *temp;
    temp = new node;
 
    temp = list;
 
    if (temp->data != serial)
    {
 
        while (temp->next->data != serial)
        {
            temp = temp->next;
        }
 
        if (temp->next->data == serial)
        {
 
            temp->next = temp->next->next;
            cls();
           cout<<"\n\n\n\n\t\t\tDeleting Item "<< serial;
            for (int cs = 0; cs < 4; cs++)
            {
                cout<<" .";
                Sleep(400);
            }
 
            cout<<"\n\n\n\n\t\t\tDeleted Successfylly \n";
            Sleep(500);
        }
        else
        {
            cout<<"\n\n\n\n\t\t\tFood Item Not Found\n";
            Sleep(500);
        }
 
        head = temp;
    }
    else
    {
 
        temp = temp->next;
        cls();
        cout<<"\n\n\n\n\t\t\tDeleting Item "<<serial;
        for (int cs = 0; cs < 4; cs++)
        {
            cout<<" .";
            Sleep(400);
        }
 
        cout<<"\n\n\n\n\t\t\tDeleted Successfylly \n";
        Sleep(500);
 
        head = temp;
 
        list = head;
    }
}
 
void updatefood(int udata, int uquantity)
{
 
    node *temp;
    temp = list;
 
    while (temp->data != udata)
    {
        temp = temp->next;
    }
    if (temp->data == udata)
    {
        temp->quantity = uquantity;
    }
}
 
int countitem()
{
 
    node *temp;
 
    temp = list;
 
    int countitem = 0;
 
    if (temp == NULL)
    {
        countitem = 0;
    }
    else
    {
        countitem = 1;
        while (temp->next != NULL)
        {
            countitem++;
            temp = temp->next;
        }
    }
 
    return countitem;
}
void foodlist()
{
    cout<<"\n\t\t";
    cout<<"______________________________________________________ ";
    cout<<"\n\t\t";
    cout<<"|  Food No.  |   FooD Name   |  Price  |   In Stock   |";
    cout<<"\n\t\t";
    cout<<"-------------------------------------------------------";
 
    node *temp;
    temp = list; 
    while (temp != NULL)
    {
        cout<<"\n\t\t";
        cout<<"|      " <<     temp->data      <<"          |         "<<    temp->foodname  <<"         |         "<<    temp->price   <<"         |       "<<     temp->quantity    <<"       |   ";
        cout<<"\n\t\t";
        cout<<"-------------------------------------------------------";
 
        temp = temp->next;
 
        Sleep(100);
    }
 
}
 
void order_view(int order, int quantity, int or_no)
{
 
    node *temp;
 
    temp = list;
 
    while (temp->data != order)
    {
 
        temp = temp->next;
    }
    if (temp->data == order)
    {
        printf("|     %d      |    %s  |     %d     |     %d     |", or_no, temp->foodname, quantity, temp->quantity);
       
        cout<<"\n\t\t";
        
        cout<<"-------------------------------------------------------";
 
        Sleep(100);
    }
 
    
}


void cls()
{
 
    system("cls");
}

void br(int line)
{
    for (int i = 0; i < line; i++)
    {
        cout<<"\n";
    }
}

void pre(int tab)
{
 
    for (int i = 0; i < tab; i++)
    {
        cout<<"\t";
    }
}

 
void middle1(void)
{
 
    cout<<"\n\n\n\n\n\n\n";
}


 