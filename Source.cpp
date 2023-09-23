#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct memberreg
{
	char user[10];
	char name[10];
	char family[10];
	int pass;
	int phonenumber;
	int bb[2] ;
}user[3];
struct memberlog
{
	char user[10];
	int pass;
}userlog;
struct managerlog {
	char manageuser[20];
	int managerpass;
}manlog;
struct librarybooks {
	char title[100];
	char author[100];
	double fine;
	int borrow;
	char borroweddate[10];
	char returndate[10];
}book[3];
int main()
{
	int d;
	int yy = 1401;
	int mm = 11;
	int dd = 1;
	char manuser[] = "Sana1382";
	int manpass = 2081165910;

	int x, i = 0, j = 0, k, p,h;
	int usercount = 0;
	int bookcounter = 0;
	int ta = 0;
	int tab = 0;
	cout << "----WELCOME TO VIRTUAL (SANA) LIBRARY----";

part1:cout << "\n" << "\n" << "1." << " " << "Manager Login" <<
"\n" << "2." << " " << "Member Login" <<
"\n" << "3." << " " << "Member registration" <<
"\n" << "4." << " " << "Exit";
cout << "\n" << "____________________" << "\n";
cout << "Please enter your section code :";
cin >> x;
if (x == 1)
{
	cout << "\n" << "MANAGER USERNAME :";
	cin >> manlog.manageuser;
	cout << "\n" << "MANAGER PASSWORD :";
	cin >> manlog.managerpass;

	if (manlog.managerpass == manpass && strcmp(manlog.manageuser, manuser) == 0)
	{
		cout << "WELCOM TO LIBRARY" << " " << "Manager";
		goto partmanager;
	}
	else
	{
		cout << "*MANAGER INFORMATION IS INCORECT*";
		goto part1;
	}
}
if (x == 2)
{
	cout << "\n" << "USERNAME :";
	cin >> userlog.user;
	cout << "\n" << "PASSWORD :";
	cin >> userlog.pass;

	for (i = 0; i < 3; i++)
	{
		if (strcmp(userlog.user, user[i].user) == 0 && userlog.pass == user[i].pass)
		{
			cout << "WELCOM TO LIBRARY" << " " << user[i].name;
			goto partlogin;
		}

		cout << "USER NOT FOUND...";
		break;
	}
}
if (x == 3)
{
	if (usercount == 3)
	{
		cout << "library is full...";
		goto part1;
	}
	if (ta == 1)
	{
		for (i = 0; i < 3; i++)
		{
			if (strcmp("DELETED", user[i].user) == 0 && user[i].pass == 0)
			{
				cout << "You are User" << " " << i + 1;
				cout << "\n" << "USERNAME :";
				cin >> user[i].user;
				cout << "\n" << "NAME :";
				cin >> user[i].name;
				cout << "\n" << "FAMILY NAME :";
				cin >> user[i].family;
				cout << "\n" << "PASSWORD :";
				cin >> user[i].pass;
				cout << "\n" << "PHONE NUMBER :(09)";
				cin >> user[i].phonenumber;
				cout << "\n" << "SAVING INFORMATIONS..."
					<< "\n" << "\n" << "SAVED!" << "\n" << "\n" << "YOUR REGISTRATIOM COMPLETED AT:  " << dd<<"/"<<mm<<"/"<<yy;
				usercount = 1 + usercount;

				cout << "\n" << "1." << " " << "Main Menu"
					<< "\n" << "2." << " " << "Exit";

				cin >> x;
				if (x == 1)
				{
					goto part1;
				}
				if (x == 2)
				{
					cout << "THNKS FOR USING LIBRARY..."
						<< "\n" << "\n" << "creator : mohammad sana hejazi" << "\n" << "\n" << "\n";
					return 0;
				}
			}
		}

	}
	cout << "You are User" << " " << usercount + 1;
	cout << "\n" << "USERNAME :";
	cin >> user[i].user;
	cout << "\n" << "NAME :";
	cin >> user[i].name;
	cout << "\n" << "FAMILY NAME :";
	cin >> user[i].family;
	cout << "\n" << "PASSWORD :";
	cin >> user[i].pass;
	cout << "\n" << "PHONE NUMBER :(09)";
	cin >> user[i].phonenumber;
	cout << "\n" << "SAVING INFORMATIONS..."
		<< "\n" << "\n" << "SAVED!" << "\n" << "\n" << "YOUR REGISTRATIOM COMPLETED AT:  " << dd << "/" << mm << "/" << yy;
	usercount = 1 + usercount;
}
if (x == 4)
{
	cout << "THNKS FOR USING LIBRARY..."
		<< "\n" << "\n" << "creator : mohammad sana hejazi" << "\n" << "\n" << "\n";
	return 0;
}
i = i + 1;
cout << "\n" << "1." << " " << "Main Menu"
<< "\n" << "2." << " " << "Exit";

cin >> x;
if (x == 1)
{
	goto part1;
}
if (x == 2)
{
	cout << "THNKS FOR USING LIBRARY..."
		<< "\n" << "\n" << "creator : mohammad sana hejazi" << "\n" << "\n" << "\n";
	return 0;
}



partlogin:cout << "\n" << "\n" << "1." << " " << "VIEW ALL LIBRARY BOOKS" <<
"\n" << "2." << " " << "VIEW ALL BORROWED BOOKS" <<
"\n" << "3." << " " << "MEMBERSHIP RENEWAL" <<
"\n" << "4." << " " << "PAY FINE" <<
"\n" << "5." << " " << "BACK";
cout << "\n" << "____________________" << "\n";
cout << "Please enter your section code :";
cin >> x;
if (x == 1)
{
	if (j == 0)
	{
		cout << "NO BOOK IN LIBRARY PLEASE ENTER A BOOK IN MANAGER SECTION...";
	}
	allbooks:cout <<"\n" << "\n" << "1. " << "TITLE :  " << book[0].title << "\n" << "AUTHOR:  " << book[0].author
		<< "\n" << "FINE : " << book[0].fine <<"\n" << "BORROWED : " << book[0].borrow;
	cout << "\n" << "2. " << "TITLE :  " << book[1].title << "\n" << "AUTHOR:  " << book[1].author
		<< "\n" << "FINE : " << book[1].fine <<"\n" << "BORROWED : " << book[1].borrow;
	cout << "\n" << "3. " << "TITLE :  " << book[2].title << "\n" << "AUTHOR:  " << book[2].author
		<< "\n" << "FINE : " << book[2].fine <<"\n" << "BORROWED : " << book[2].borrow;
	cout << "\n"<<"\n" << "4. SEARCH";
	cout << "\n" << "\n" << "5. BACK";
	cin >> x;
	if (x == 1)
	{
		if (strlen(book[0].title) == 0)
		{
			cout << "\n" << "NO BOOK HERE...";
			goto allbooks;
		}
		if (book[0].borrow == 1) 
		{
			cout << "\n" << *"THIS BOOK IS BORROWED AND NOT AVAIBLE NOW...* ";
			goto allbooks;
		}
		if (book[0].borrow == 0)
		{
			cout << "\n" << "YOU BORROWED THE  " << book[0].title << " FORM " << book[0].author;
			book[0].borrow += 1;
			user[i].bb[0] = 1;
			goto allbooks;
	}
	}
	if (x == 2)
	{
		if (strlen(book[1].title) == 0)
		{
			cout << "\n" << "NO BOOK HERE...";
			goto allbooks;
		}
		if (book[1].borrow == 1)
		{
			cout << "\n" << *"THIS BOOK IS BORROWED AND NOT AVAIBLE NOW...* ";
			goto allbooks;
		}
		if (book[1].borrow == 0)
		{
			cout << "\n" << "YOU BORROWED THE  " << book[1].title << " FORM " << book[1].author;
			book[1].borrow += 1;
			user[i].bb[1] = 1;
			goto allbooks;
		}
	}
	if (x == 3)
	{
		if (strlen(book[2].title) == 0)
		{
			cout << "\n" << "NO BOOK HERE...";
			goto allbooks;
		}
		if (book[2].borrow == 1)
		{
			cout << "\n" << *"THIS BOOK IS BORROWED AND NOT AVAIBLE NOW...* ";
			goto allbooks;
		}
		if (book[2].borrow == 0)
		{
			cout << "\n" << "YOU BORROWED THE  " << book[2].title << " FORM " << book[2].author;
			book[2].borrow += 1;
			user[i].bb[2] = 1;
			goto allbooks;
		}
	}
	if (x == 4)
	{
		char search[10];
		cout << "\n" << "PLEASE ENTER YOUR TITLE :(MAX 10 CHAR) ";
		cin >> search;
		if (strstr(book[0].title, search) != 0)
		{
			cout<<"\n"<< "1. " << "TITLE :  " << book[0].title << "\n" << "AUTHOR:  " << book[0].author
				<< "\n" << "FINE : " << book[0].fine << "\n" << "BORROWED : " << book[0].borrow;
		}
		if (strstr(book[1].title, search) != 0)
		{
			cout << "\n" << "2. " << "TITLE :  " << book[1].title << "\n" << "AUTHOR:  " << book[1].author
				<< "\n" << "FINE : " << book[1].fine << "\n" << "BORROWED : " << book[1].borrow;
		}
		if (strstr(book[2].title, search) != 0)
		{
			cout << "\n" << "3. " << "TITLE :  " << book[2].title << "\n" << "AUTHOR:  " << book[2].author
				<< "\n" << "FINE : " << book[2].fine << "\n" << "BORROWED : " << book[2].borrow;
		}
		cout << "\n" << "4. BACK";
		cin >> x;
		if (x == 1)
		{
			cout <<"\n" << "YOU BORROWED THE  " << book[0].title << " FORM " << book[0].author;
			book[0].borrow += 1;
			user[i].bb[0] = 1;
			goto allbooks;
		}
		if (x == 2)
		{
			cout << "\n" << "YOU BORROWED THE  " << book[1].title << " FORM " << book[1].author;
			book[1].borrow += 1;
			user[i].bb[1] = 1;
			goto allbooks;
		}
		if (x == 3)
		{
			cout << "\n" << "YOU BORROWED THE  " << book[2].title << " FORM " << book[2].author;
			book[2].borrow += 1;
			user[i].bb[2] = 1;
			goto allbooks;
		}
		if (x == 4)
		{
			goto allbooks;
		}
	}
	if (x == 5)
	{
		goto partlogin;
	}
}
if (x == 2) 
{
	bbooks:if (user[i].bb[0] == 1 && strlen(book[0].title) != 0)
	{
		cout << "\n" << "1. " << "TITLE :  " << book[0].title << "\n" << "AUTHOR:  " << book[0].author
			<< "\n" << "FINE : " << book[0].fine << "\n" << "BORROWED : " << book[0].borrow;
	}
	if (user[i].bb[1] == 1 && strlen(book[1].title) != 0)
	{
		cout << "\n" << "2. " << "TITLE :  " << book[1].title << "\n" << "AUTHOR:  " << book[1].author
			<< "\n" << "FINE : " << book[1].fine << "\n" << "BORROWED : " << book[1].borrow;
	}
	if (user[i].bb[2] == 1 && strlen(book[2].title) != 0)
	{
		cout << "\n" << "3. " << "TITLE :  " << book[2].title << "\n" << "AUTHOR:  " << book[2].author
			<< "\n" << "FINE : " << book[2].fine << "\n" << "BORROWED : " << book[2].borrow;
	}
	cout<< "\n" <<"\n" << "4." << " " << "BACK";
	cin >> x;
	if (x == 1)
	{
		cout << "\n" << "TITLE :" << book[0].title;
		cout << "\n" << "\n" << "1.RETURN IT TO LIBRARY"
			<<"\n" << "2. BACK";
		cin >> x;
		if (x == 1)
		{
			cout << " YOU RETURN " << book[0].title << "TO LIBRARY";
			user[i].bb[0] = 0;
			book[0].borrow =0;
		}
		if (x == 2)
		{
			goto bbooks;
		}
	}
	if (x == 2)
	{
		cout << "\n" << "TITLE :" << book[1].title;
		cout << "\n" << "\n" << "1.RETURN IT TO LIBRARY"
			<<"\n "<<"2. BACK";
		cin >> x;
		if (x == 1)
		{
			cout << " YOU RETURN " << book[1].title << "TO LIBRARY";
			user[i].bb[1] = 0;
			book[1].borrow = 0;
		}
		if (x == 2)
		{
			goto bbooks;
		}
	}
	if (x == 3)
	{
		cout << "\n" << "TITLE :" << book[2].title;
		cout << "\n" << "\n" << "1.RETURN IT TO LIBRARY"
			<<"\n" << "2. BACK";
		cin >> x;
		if (x == 1)
		{
			cout << " YOU RETURN " << book[2].title << "TO LIBRARY";
			user[i].bb[2] = 0;
			book[2].borrow = 0;
		}
		if (x == 2)
		{
			goto bbooks;
		}
	}
	if (x == 4)
	{
		goto partlogin;
	}
}
if (x == 3)
{
	cout << "\n" << "CURENT DATE :" << dd << "/" << mm << "/" << yy;
	cout << "\n" << " YOUR REGISTRATION EXPIRED IN :" << dd << "/" << mm << "/" << yy + 1;
	cout << "\n" << "\n" << "1.RENEW FOR 9.99$" << "\n" << "2.Back";
	cin >> x;
	if (x == 1)
	{
		cout<<"\n"<<"\n"<<"YOUR REGISTRATION WAS SUCCSSEFULLY AT "<< dd << "/" << mm << "/" << yy
		<<"\n"<<"EXPIRED IN "<< dd << "/" << mm << "/" << yy+1;
		goto partlogin;
	}
	if (x == 2)
	{
		goto partlogin;
	}
}
if (x == 4)
{
	PAYFINE:if (user[i].bb[0] == 1 && strlen(book[0].title) != 0)
	{
		cout << "\n" << "1. " << "TITLE :  " << book[0].title << "\n" << "AUTHOR:  " << book[0].author
			<< "\n" << "FINE : " << book[0].fine << "\n" << "BORROWED : " << book[0].borrow;
	}
	if (user[i].bb[1] == 1 && strlen(book[1].title) != 0)
	{
		cout << "\n" << "2. " << "TITLE :  " << book[1].title << "\n" << "AUTHOR:  " << book[1].author
			<< "\n" << "FINE : " << book[1].fine << "\n" << "BORROWED : " << book[1].borrow;
	}
	if (user[i].bb[2] == 1 && strlen(book[2].title) != 0)
	{
		cout << "\n" << "3. " << "TITLE :  " << book[2].title << "\n" << "AUTHOR:  " << book[2].author
			<< "\n" << "FINE : " << book[2].fine << "\n" << "BORROWED : " << book[2].borrow;
	}
	cout << "\n" << "\n" << "4." << " " << "BACK";
	cin >> x;
	if (x == 1)
	{
		cout << "\n" << "TITLE :" << book[0].title
			<< "\n" << "FINE PER A DAY :$" << book[0].fine;
		cout << "\n" << "\n" << "1.PAY FINE"
			<< "\n" << "2. BACK";
		cin >> x;
		if (x == 1)
		{
			cout << "HOW MANY DAYS YOU HAVE THE BOOK ?";
				cin >> d;
				cout << "\n" << "YOU WILL PAY (BOOK FINE*DAY) AMD IT COST :$" << d * book[0].fine;
				cout << "\n" << "\n" << "1.PAY IT" << "\n" << "2.BACK";
				cin >> x;
				if (x == 1)
				{
					cout << "YOU SUCCSSEFULLY PAY THE " << book[0].title << "FINE "
						<< "\n" << "IT COST :$" << d * book[0].fine;
					cout <<"\n" << "THANK YOU FOR YOUR PAYMENT...";
					goto PAYFINE;

				}
				if (x == 2) {
					goto PAYFINE;
				}
		}
		if (x == 2)
		{
			goto bbooks;
		}
	}
	if (x == 2)
	{
		cout << "\n" << "TITLE :" << book[1].title
			<< "\n" << "FINE PER A DAY :$" << book[1].fine;
		cout << "\n" << "\n" << "1.PAY FINE"
			<< "\n" << "2. BACK";
		cin >> x;
		if (x == 1)
		{
			cout << "HOW MANY DAYS YOU HAVE THE BOOK ?";
				cin >> d;
				cout << "\n" << "YOU WILL PAY (BOOK FINE*DAY) AMD IT COST :$" << d * book[1].fine;
				cout << "\n" << "\n" << "1.PAY IT" << "\n" << "2.BACK";
				cin >> x;
				if (x == 1)
				{
					cout << "YOU SUCCSSEFULLY PAY THE " << book[1].title << "FINE "
						<< "\n" << "IT COST :$" << d * book[1].fine;
					cout <<"\n" << "THANK YOU FOR YOUR PAYMENT...";
					goto PAYFINE;
				}
				if (x == 2) {
					goto PAYFINE;
				}
		}
		if (x == 2)
		{
			goto bbooks;
		}
	}
	//here
	if (x == 3)
	{
		cout << "\n" << "TITLE :" << book[2].title
			<< "\n" << "FINE PER A DAY :$" << book[2].fine;
		cout << "\n" << "\n" << "1.PAY FINE"
			<< "\n" << "2. BACK";
		cin >> x;
		if (x == 1)
		{
			cout << "HOW MANY DAYS YOU HAVE THE BOOK ?";
			cin >> d;
			cout << "\n" << "YOU WILL PAY (BOOK FINE*DAY) AMD IT COST :$" << d * book[2].fine;
			cout << "\n" << "\n" << "1.PAY IT" << "\n" << "2.BACK";
			cin >> x;
			if (x == 1)
			{
				cout << "YOU SUCCSSEFULLY PAY THE " << book[2].title << "FINE "
					<< "\n" << "IT COST :$" << d * book[2].fine;
				cout <<"\n" << "THANK YOU FOR YOUR PAYMENT...";
				goto PAYFINE;

			}
			if (x == 2) {
				goto PAYFINE;
			}
		}
		if (x == 2)
		{
			goto bbooks;
		}
	}
	//here
	if (x == 4)
	{
		goto partlogin;
	}
}
if (x == 5)
{
	goto part1;
}

//HERE

partmanager:cout << "\n" << "\n" << "1." << " " << "MANAGE BOOKS" <<
"\n" << "2." << " " << "MANAGE MEMBERS" <<
"\n" << "3." << " " << "MANAGE DATE" <<
"\n" << "4." << " " << "BACK";
cin >> x;
if (x == 1)
{
partmanagebook: cout <<"\n" << "----------" << "\n" << "**MANAGE BOOKS**";
	int z = 3;
	for (p = 0; p < 3; p++)
	{
		cout << "\n" << z << "." << "TITLE :  " << book[p].title
			<< "\n" << "AUTHOR : " << book[p].author
			<< "\n" << "BOOK FINE :($)" << book[p].fine
			<< "\n" << "BORROWED : " << book[p].borrow;
		z = z + 1;
	}
	cout << "\n" << "--------------------";
	cout << "\n" << "1." << " " << "ADD NEW BOOK" <<
		"\n" << "2." << " " << "BACK";

	cin >> x;
	if (x == 1)
	{
		if (j == 3)
		{
			cout << "\n" << "LIBRARY IS FULL...";
		}
		if (tab == 1)
		{
			for (j = 0; j < 3; j++)
			{
				if (strcmp("DELETED", book[j].title)==0)
				{
					cout << "TOTAL BOOKS IN LIBRARY" << " " << ":" << bookcounter;
					cout << "\n" << "BOOK TITLE :";
					cin.ignore();
					cin.getline(book[j].title, 100);
					cout << "\n" << "BOOK AUTHOR :";
					cin.getline(book[j].author, 100);
					cout << "\n" << " BOOK FINE PER A FAY : $";
					cin>>book[j].fine;
					cout << "\n" << " BORROWED :";
					cin >> book[j].borrow;
					cout << "\n" << "SAVING INFORMATIONS..."
						<< "\n" << "\n" << "SAVED!";
					j = j + 1;
					bookcounter = bookcounter + 1;
					goto partmanagebook;
				}
			}


		}
		cout << "TOTAL BOOKS IN LIBRARY" << " " << ":" << j;
		cout << "\n" << "BOOK TITLE :";
		cin.ignore();
		cin.getline(book[j].title, 100);
		cout << "\n" << "BOOK AUTHOR :";
		cin.getline(book[j].author, 100);
		cout << "\n" << " BOOK FINE PER A DAY : $";
		cin>>book[j].fine;
		cout << "\n" << " BORROWED :";
		cin >> book[j].borrow;
		cout << "\n" << "SAVING INFORMATIONS..."
			<< "\n" << "\n" << "SAVED!";
		j = j + 1;
		bookcounter = bookcounter + 1;
		goto partmanagebook;
	}
	if (x == 2)
	{
		goto partmanager;
	}
	if (x == 3)
	{
		cout << "\n" << "1." << "TITLE :  " << book[0].title
			<< "\n" << "2." << "AUTHOR : " << book[0].author
			<< "\n" << "3." << "BOOK FINE PER A DAY :$ " << book[0].fine
			<< "\n" << "4." << "BORROWED : " << book[0].borrow
			<< "\n" << "5." << "LAST BORROWED DATE" << book[0].borroweddate
			<< "\n" << "6." << "LAST RETURN DATE" << book[0].returndate
			<< "\n" << "7." << "DELETE  " << book[0].title
			<<"\n"<<"8."<<"BACK";
		cin >> x;
		if (x == 1)
		{
			cout <<"\n" << "CHANGE THE TITLE OF" << book[0].title;
			cin >> book[0].title;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 2) {
			cout << "\n" << "CHANGE THE AUTHORA OF" << book[0].author;
			cin >> book[0].author;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 3)
		{
			cout << "\n" << "CHANGE THE BOOK FINE (PER A DAY) OF" << book[0].title;
			cout <<"\n" << "CURENT FINE IS :$" << book[0].fine;
			cout << "\n" << "$";
			cin >> book[0].fine;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 4) {
			cout << "\n" << "CHANGE THE BOROWED TIMES" << book[0].title;
			cin >> book[0].borrow;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 5)
		{
			cout << "\n" << "CHANGE THE LAST BORROWED FATE OF" << book[0].title;
			cin >> book[0].borroweddate;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 6)
		{
			cout << "\n" << "CHANGE THE RETURN DATE OF" << book[0].title;
			cin >> book[0].returndate;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 7)
		{
			cout << "\n" << book[0].title<<" "<< "WAS SUCCSSEFULLY DALETED";
			strcpy_s(book[0].title, "DELETED");
			strcpy_s(book[0].author, "DELETED");
			book[0].fine=0;
			book[0].borrow = 0;
			strcpy_s(book[0].borroweddate, "DELETED");
			strcpy_s(book[0].returndate, "DELETED");
			j = j - 1;
			bookcounter = bookcounter - 1;
			tab = 1;
			goto partmanagebook;
		}
		if(x==8)
		{
			goto partmanagebook;
		}
	}
	if(x==4)
	{
		cout << "\n" << "1." << "TITLE :  " << book[1].title
			<< "\n" << "2." << "AUTHOR : " << book[1].author
			<< "\n" << "3." << "BOOK FINE (PER A DAY) :$" << book[1].fine
			<< "\n" << "4." << "BORROWED : " << book[1].borrow
			<< "\n" << "5." << "LAST BORROWED DATE" << book[1].borroweddate
			<< "\n" << "6." << "LAST RETURN DATE" << book[1].returndate
			<< "\n" << "7.DELETE  " << book[1].title
			<< "\n" << "8." << "BACK";
		cin >> x;
		if (x == 1)
		{
			cout << "\n" << "CHANGE THE TITLE OF" << book[1].title;
			cin >> book[1].title;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 2) {
			cout << "\n" << "CHANGE THE AUTHORA OF" << book[1].author;
			cin >> book[1].author;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 3)
		{
			cout << "\n" << "CHANGE THE BOOK FINE OF" << book[1].title;
			cout <<"\n" << "CURENT FINE IS :$" << book[1].fine;
			cout << "\n" << "$";
			cin >> book[1].fine;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 4) {
			cout << "\n" << "CHANGE THE BOROWED TIMES" << book[1].title;
			cin >> book[1].borrow;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 5)
		{
			cout << "\n" << "CHANGE THE LAST BORROWED FATE OF" << book[1].title;
			cin >> book[1].borroweddate;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 6)
		{
			cout << "\n" << "CHANGE THE RETURN DATE OF" << book[1].title;
			cin >> book[1].returndate;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 7)
		{
			cout << "\n" << book[1].title <<" " << "WAS SUCCSSEFULLY DALETED";
			strcpy_s(book[1].title, "DELETED");
			strcpy_s(book[1].author, "DELETED");
			book[1].fine=0;
			book[1].borrow = 0;
			strcpy_s(book[1].borroweddate, "DELETED");
			strcpy_s(book[1].returndate, "DELETED");
			j = j - 1;
			bookcounter -= 1;
			tab = 1;
			goto partmanagebook;
		}
		if (x == 8)
		{
			goto partmanagebook;
		}
	}
	if(x==5)
	{
		cout << "\n" << "1." << "TITLE :  " << book[2].title
			<< "\n" << "2." << "AUTHOR : " << book[2].author
			<< "\n" << "3." << "BOOK FINE (PER A DAY) :$ " << book[2].fine
			<< "\n" << "4." << "BORROWED : " << book[2].borrow
			<< "\n" << "5." << "LAST BORROWED DATE" << book[2].borroweddate
			<< "\n" << "6." << "LAST RETURN DATE" << book[2].returndate
			<<"\n"<<"7.DELETE  "<<book[2].title
			<< "\n" << "8." << "BACK";
		cin >> x;
		if (x == 1)
		{
			cout << "\n" << "CHANGE THE TITLE OF" << book[2].title;
			cin >> book[2].title;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 2) {
			cout << "\n" << "CHANGE THE AUTHORA OF" << book[2].author;
			cin >> book[2].author;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 3)
		{
			cout << "\n" << "CHANGE THE BOOK FINE OF" << book[2].title;
			cout << "\n" << "CURENT FINE IS :$" << book[2].fine;
			cout << "\n" << "$";
			cin >> book[2].fine;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 4) {
			cout << "\n" << "CHANGE THE BOROWED TIMES" << book[2].title;
			cin >> book[2].borrow;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 5)
		{
			cout << "\n" << "CHANGE THE LAST BORROWED FATE OF" << book[2].title;
			cin >> book[2].borroweddate;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 6)
		{
			cout << "\n" << "CHANGE THE RETURN DATE OF" << book[2].title;
			cin >> book[2].returndate;
			cout << "\n" << "INFORMATION SAVED!";
			goto partmanagebook;
		}
		if (x == 7)
		{
			cout << "\n" << book[2].title <<" " << "WAS SUCCSSEFULLY DALETED";
			strcpy_s(book[2].title, "DELETED");
			strcpy_s(book[2].author, "DELETED");
			book[2].fine=0;
			book[2].borrow = 0;
			strcpy_s(book[2].borroweddate, "DELETED");
			strcpy_s(book[2].returndate, "DELETED");
			j = j - 1;
			bookcounter -= 1;
			tab = 1;
			goto partmanagebook;
		}
		if (x == 8)
		{
			goto partmanagebook;
		}
	}
}
if (x == 2)
{
partmanmem:cout <<"\n" << "-MANAGE MEMBERS-" << "\n" << "\n";

	cout << "1." << user[0].user;
	cout << "\n" << "2." << user[1].user;
	cout << "\n" << "3." << user[2].user;
	cout << "\n" <<"\n" << "4." << "BACK";
	cin >> x;
	if (x == 1)
	{
	part1manmem:cout <<"\n" << "----------------";
		cout << "1.USERNAME :" << user[0].user;
		cout << "\n" << "2.NAME :" << user[0].name;
		cout << "\n" << "3.FAMILYNAME :" << user[0].family;
		cout << "\n" << "4.USER PASSWORD :" << user[0].pass;
		cout << "\n" << "5.USER PHONENUMBER :(09)" << user[0].phonenumber;
		cout << "\n" << "6.DELETE " << user[0].user;
		cout << "\n" << "0.BACK";
		cin >> x;
		if (x == 0)
		{
			goto partmanmem;
		}
		if (x == 1)
		{
			cout << "\n" << "PLEASE ENTER NEW USERNAME FOR " << user[0].user;
			cin.ignore();
			cin.getline(user[0].user, 10);
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part1manmem;
		}
		if (x == 2)
		{
			cout << "\n" << "PLEASE ENTER NEW NAME FOR " << user[0].name;
			cin.ignore();
			cin.getline(user[0].name, 10);
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part1manmem;
		}
		if (x == 3)
		{
			cout << "\n" << "PLEASE ENTER NEW FAMILYNAME FOR " << user[0].family;
			cin.ignore();
			cin.getline(user[0].family, 10);
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part1manmem;
		}
		if (x == 4)
		{
			cout << "\n" << "PLEASE ENTER NEW PASSWORD FOR " << user[0].user;
			cin >> user[0].pass;
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part1manmem;
		}
		if (x == 5)
		{
			cout << "\n" << "PLEASE ENTER NEW PHONENUMBER FOR " << user[0].user;
			cin >> user[0].phonenumber;
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part1manmem;
		}
		if (x == 6)
		{
			cout << user[0].user << " WAS SUCCSSEFULLY DELETED";
			strcpy_s(user[0].user, "DELETED");
			strcpy_s(user[0].name, "DELETED");
			strcpy_s(user[0].family, "DELTED");
			user[0].pass = 0;
			user[0].phonenumber = 0;
			usercount = usercount - 1;
			ta = 1;
			goto partmanager;
		}
	}
	if (x == 2)
	{
	part2manmem:cout << "----------------";
		cout << "1.USERNAME :" << user[1].user;
		cout << "\n" << "2.NAME :" << user[1].name;
		cout << "\n" << "3.FAMILY :" << user[1].family;
		cout << "\n" << "4.USER PASSWORD :" << user[1].pass;
		cout << "\n" << "5.USER PHONENUMBER :(09)" << user[1].phonenumber;
		cout << "\n" << "6.DELETE " << user[1].user;
		cout << "\n" << "0.BACK";
		cin >> x;
		if (x == 0)
		{
			goto partmanmem;
		}
		if (x == 1)
		{
			cout << "\n" << "PLEASE ENTER NEW USERNAME FOR " << user[1].user;
			cin.ignore();
			cin.getline(user[1].user, 10);
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part2manmem;
		}
		if (x == 2)
		{
			cout << "\n" << "PLEASE ENTER NEW NAME FOR " << user[1].name;
			cin.ignore();
			cin.getline(user[1].name, 10);
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part2manmem;
		}
		if (x == 3)
		{
			cout << "\n" << "PLEASE ENTER NEW FAMILYNAME FOR " << user[1].family;
			cin.ignore();
			cin.getline(user[1].family, 10);
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part2manmem;
		}
		if (x == 4)
		{
			cout << "\n" << "PLEASE ENTER NEW PASSWORD FOR " << user[1].user;
			cin >> user[1].pass;
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part2manmem;
		}
		if (x == 5)
		{
			cout << "\n" << "PLEASE ENTER NEW PHONENUMBER FOR " << user[1].user;
			cin >> user[1].phonenumber;
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part2manmem;
		}
		if (x == 6)
		{
			cout << user[1].user << " WAS SUCCSSEFULLY DELETED";
			strcpy_s(user[1].user, "DELETED");
			strcpy_s(user[1].name, "DELETED");
			strcpy_s(user[1].family, "DELETED");
			user[1].pass = 0;
			user[1].phonenumber = 0;
			usercount = usercount - 1;
			ta = 1;
			goto partmanager;
		}
	}
	if (x == 3)
	{
	part3manmem:cout << "----------------";
		cout << "1.USERNAME :" << user[2].user;
		cout << "\n" << "2.NAME :" << user[2].name;
		cout << "\n" << "3.FAMILY :" << user[2].family;
		cout << "\n" << "4.USER PASSWORD :" << user[2].pass;
		cout << "\n" << "5.USER PHONENUMBER :(09)" << user[2].phonenumber;
		cout << "\n" << "6.DELETE " << user[2].user;
		cout << "\n" << "0.BACK";
		cin >> x;
		if (x == 0)
		{
			goto partmanmem;
		}
		if (x == 1)
		{
			cout << "\n" << "PLEASE ENTER NEW USERNAME FOR " << user[2].user;
			cin.ignore();
			cin.getline(user[2].user, 10);
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part3manmem;
		}
		if (x == 2)
		{
			cout << "\n" << "PLEASE ENTER NEW NAME FOR " << user[2].name;
			cin.ignore();
			cin.getline(user[2].name, 10);
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part3manmem;
		}
		if (x == 3)
		{
			cout << "\n" << "PLEASE ENTER NEW FAMILYNAME FOR " << user[2].family;
			cin.ignore();
			cin.getline(user[2].family, 10);
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part3manmem;
		}
		if (x == 4)
		{
			cout << "\n" << "PLEASE ENTER NEW PASSWORD FOR " << user[2].user;
			cin.ignore();
			cin >> user[2].pass;
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part3manmem;
		}
		if (x == 5)
		{
			cout << "\n" << "PLEASE ENTER NEW PHONENUMBER FOR " << user[2].user;
			cin.ignore();
			cin >> user[2].phonenumber;
			cout << "SAVING INFORMATION..." << "\n" << "\n" << "SAVED!";
			goto part3manmem;
		}
		if (x == 6)
		{
			cout << user[2].user << " WAS SUCCSSEFULLY DELETED";
			strcpy_s(user[2].user, "DELETED");
			strcpy_s(user[2].name, "DELETED");
			strcpy_s(user[2].family, "DELETED");
			user[2].pass = 0;
			user[2].phonenumber = 0;
			usercount = usercount - 1;
			ta = 1;
			goto partmanager;
		}
	}
	if (x == 4)
	{
		goto partmanager;
	}
}
if (x == 3)
{
	cout << "CURENT DATE IS : "   << dd << "/" << mm << "/" << yy;
	cout << "\n" << "\n" << "1.CHANGE IT" << "\n" << "2.BACK";
	cin >> x;
	if (x == 2)
	{
		goto partmanager;
	}
	if (x == 1)
	{
		cout << "PLEASE ENTER YOUR NEW DATE" << " " << "(dd/mm/yy)";
		cin >> dd >> mm >> yy;
		cout << "CHANGING DATE WAS SUCCESSFULLY..." << "\n"
			<< "YOUR CURRENT DATE IS:  " <<  dd << "/" << mm << "/" << yy;
		cout << "\n" << "\n" << "1.BACK";
		cin >> x;
		if (x == 1)
		{
			goto partmanager;
		}
	}
}
if (x == 4)
{
	goto part1;
}
}
