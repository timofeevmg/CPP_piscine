#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	bool		isFull;
	std::string	firstName;
	std::string	lastName;
	std::string	Nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:
	Contact(void);
	~Contact(void);

	bool		GetIsFull(void);
	std::string	GetFirstName(void);
	std::string	GetLastName(void);
	std::string	GetNickName(void);
	std::string	GetPhoneNumber(void);
	std::string	GetDarkestSecret(void);
	void		SetIsFull(bool flag);
	void		SetFirstName(std::string str);
	void		SetLastName(std::string str);
	void		SetNickName(std::string str);
	void		SetPhoneNumber(std::string str);
	void		SetDarkestSecret(std::string str);
};

class PhoneBook
{
private:
	Contact Contacts[8];
	int		nextContact;

public:
	PhoneBook(void);
	~PhoneBook(void);

	int			GetNextContact(void);
	std::string	GetContactField(int i, int field);
	bool		GetContactFull(int i);

	void		SetNextContact(int index);
	void		SetContactField(int i, int field, std::string str);
	void		SetContactFull(int i);
};

void	printGreetings(void);
void	printBye(void);

int		addFunc(PhoneBook *PhoneBook);

int		searchFunc(PhoneBook *PhoneBook);
void	printFullContacts(PhoneBook *PhoneBook);
void	printShortContactsFields(PhoneBook *PhoneBook, int i);
void	printResizeContactField(PhoneBook *PhoneBook, int i, int field);
bool	isIndexNum(std::string index);
void	printContactFields(PhoneBook *PhoneBook, int i);

#endif
