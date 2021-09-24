#include "phonebook.hpp"

	Contact::Contact(void)
	{
		this->isFull = false;
	}
	Contact::~Contact(void)
	{;
	}

	bool		Contact::GetIsFull(void)
	{
		return this->isFull;
	}

	std::string	Contact::GetFirstName(void)
	{
		return this->firstName;
	}

	std::string	Contact::GetLastName(void)
	{
		return this->lastName;
	}

	std::string	Contact::GetNickName(void)
	{
		return this->Nickname;
	}

	std::string	Contact::GetPhoneNumber(void)
	{
		return this->phoneNumber;
	}

	std::string	Contact::GetDarkestSecret(void)
	{
		return this->darkestSecret;
	}

	void		Contact::SetIsFull(bool flag)
	{
		this->isFull = flag;
	}

	void		Contact::SetFirstName(std::string str)
	{
		this->firstName = str;
	}

	void		Contact::SetLastName(std::string str)
	{
		this->lastName = str;
	}

	void		Contact::SetNickName(std::string str)
	{
		this->Nickname = str;
	}

	void		Contact::SetPhoneNumber(std::string str)
	{
		this->phoneNumber = str;
	}

	void		Contact::SetDarkestSecret(std::string str)
	{
		this->darkestSecret = str;
	}
	