#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		Contact(void);
		~Contact(void);
		void		fillContact(void);
		void		printLineContact(void) const;
		void		printFullInfos(void) const;
};

#endif