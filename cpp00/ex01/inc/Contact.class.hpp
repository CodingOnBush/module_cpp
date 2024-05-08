#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>

class Contact
{
	private:
		std::string	firstName_;
		std::string	lastName_;
		std::string	nickname_;
		std::string	phoneNumber_;
		std::string	darkestSecret_;
		std::string	getInput_( std::string msg );
		std::string	getInputNumber_( std::string msg );

	public:
		Contact(void);
		~Contact(void);
		int			index;
		void		updateIndex(int index);
		void		initNewContact_(void);
		void		printLineContact(void);
		void		printFullInfos(void);
};

#endif