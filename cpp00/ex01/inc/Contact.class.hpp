#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>

class Contact
{
	public:
		Contact( void );
		~Contact( void );

		void		setIndex( int index );
		void		setFirstName( std::string first_name );
		void		setLastName( std::string last_name );
		void		setNickname( std::string nickname );
		void		setPhoneNumber( std::string phone_number );
		void		setDarkestSecret( std::string darkest_secret );
		int			getIndex( void );
		std::string	getFirstName( void );
		std::string	getLastName( void );
		std::string	getNickname( void );
		void		initNewContact_( void );

	private:
		int			index_;
		std::string	first_name_;
		std::string	last_name_;
		std::string	nickname_;
		std::string	phone_number_;
		std::string	darkest_secret_;

		std::string	getInput_( std::string msg );
		std::string	getInputNumber_( std::string msg );
};

#endif