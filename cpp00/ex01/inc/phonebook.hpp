#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_added;
		void	_printPhoneBook(void);
		void	_addContact(void);
		void	_searchContact(void);
	
	public:
		PhoneBook();
		~PhoneBook();
		void	launchApp(void);
};

#endif