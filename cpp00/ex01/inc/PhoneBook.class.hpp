#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook
{
	private:
		Contact		contacts_[8];
		int			added_;
		void		welcome_( void );
		void		goodbye_( void );
		void		printPhoneBook_( void );
		void		addContact_( void );
		void		seachContact_( void );
	
	public:
		void		startSimulation( void );

		PhoneBook();
		~PhoneBook();
};

#endif