#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook
{
	private:
		Contact		contacts_[8];
		int			added_;
		void		printPhoneBook_(void);
		void		addContact_(void);
		void		seachContact_(void);
	
	public:
		PhoneBook();
		~PhoneBook();
		void		launchApp(void);
};

#endif