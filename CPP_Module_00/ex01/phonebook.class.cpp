#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	nextContact = 0;
}

PhoneBook::~PhoneBook(void)
{;
}

int			PhoneBook::GetNextContact()
{
	return nextContact;
}

std::string	PhoneBook::GetContactField(int i, int field)
{
	if (field == 1)
		return this->Contacts[i].GetFirstName();
	else if (field == 2)
		return this->Contacts[i].GetLastName();
	else if (field == 3)
		return this->Contacts[i].GetNickName();
	else if (field == 4)
		return this->Contacts[i].GetPhoneNumber();
	else
		return this->Contacts[i].GetDarkestSecret();
}

bool		PhoneBook::GetContactFull(int i)
{
	return this->Contacts[i].GetIsFull();
}

void		PhoneBook::SetNextContact(int index)
{
	this->nextContact = index;
}

void		PhoneBook::SetContactField(int i, int field, std::string str)
{
	if (field == 1)
		this->Contacts[i].SetFirstName(str);
	else if (field == 2)
		this->Contacts[i].SetLastName(str);
	else if (field == 3)
		this->Contacts[i].SetNickName(str);
	else if (field == 4)
		this->Contacts[i].SetPhoneNumber(str);
	else if (field == 5)
		this->Contacts[i].SetDarkestSecret(str);
}

void		PhoneBook::SetContactFull(int i)
{
	this->Contacts[i].SetIsFull(true);
}
