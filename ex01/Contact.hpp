/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 16:00:43 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 10:12:30 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class Contact {

public:

	Contact();
	~Contact();

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickname() const;
	std::string	getLogin() const;
	std::string	getPostalAddress() const;
	std::string	getEmailAddress() const;
	std::string	getPhoneNumber() const;
	std::string	getBirthdayDate() const;
	std::string	getFavoriteMeal() const;
	std::string	getUnderwearColor() const;
	std::string	getDarkestSecret() const;

	void		setFirstName(std::string firstName);
	void		setLastName(std::string lastName);
	void		setNickname(std::string nickname);
	void		setLogin(std::string login);
	void		setPostalAddress(std::string postalAddress);
	void		setEmailAddress(std::string emailAddress);
	void		setPhoneNumber(std::string phoneNumber);
	void		setBirthdayDate(std::string birthdayDate);
	void		setFavoriteMeal(std::string favoriteMeal);
	void		setUnderwearColor(std::string underwearColor);
	void		setDarkestSecret(std::string darkestSecret);

	void		display() const;

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
};
