# C++ Module 02
## Table of Contents
- [Ex00](#ex00)
- [Ex01](#ex01)
- [Ex02](#ex02)

### Introduction
Polymorphisme ad-hoc <=> surcharge de fonctions\
**Definition** : Une fonction est dite surchargée si elle a plusieurs définitions, mais avec des paramètres différents.
```
void	foo(int a)
{
	cout << "int" << endl;
}

void	foo(float a)
{
	cout << "float" << endl;
}

void	foo(double a) 
{
	cout << "double" << endl;
}
```


Trois facon d'ecrire une operation arithmetique simple :
```bash
#Notation infix
1 + 1

#Notation prefix (fonctionnelle)
+ 1 1
+(1, 1)

#Notation postfix
1 1 +
```

### La forme canonique de Coplien
À partir de maintenant, vos classes devront impérativement se conformer à la forme
canonique de Coplien, sauf en cas d’indication contraire. Cela signifie qu’elles devront
comporter les quatre fonctions membres suivantes :
- Constructeur par défaut
- Constructeur de recopie
- Opérateur d’affectation
- Destructeur

**Voici une sorte de template avec cette class Sample :**
```cpp
#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

class Sample {

public:
	Sample(void);							// ✅ Constructeur par défaut 
	Sample(const int n);					// 🆗 Bonne pratique ce constructeur
	Sample(const Sample &rhs);				// ✅ Constructeur de recopie
	Sample	&operator=(const Sample &rhs);	// ✅ Opérateur d’affectation
	~Sample(void);							// ✅ Destructeur

	const int	getFoo(void);				// 🆗 Bonne pratique cet accesseur

private:
	int	foo_;								// 🆗 Bonne pratique le _

};

// 🆗 Bonne pratique
std::operator	&operator<<(std::ostream &o, const Sample &i);

#endif
```
**Maintenant voyons voir le code de ces fonctions :**
```cpp
#include "Sample.hpp"

Sample::Sample(void) : foo_(0) {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::Sample(const int n) : foo_(n) {
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

Sample::Sample(const Sample &rhs) {
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Sample	&Sample::operator=(const Sample &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->foo_ = rhs.getFoo();
	return (*this);
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

const int	Sample::getFoo(void) {
	return (this->foo_);
}

std::operator	&operator<<(std::ostream &o, const Sample &i) {
	o << i.getFoo();
	return (o);
}
```
**Et voici un exemple d'utilisation de cette classe :**
```cpp
#include "Sample.hpp"

int		main(void) {
	Sample	instance1;
	Sample	instance2( 42 );
	Sample	instance3( instance1 );

	std::cout << "instance1 : " << instance1 << std::endl;
	std::cout << "instance2 : " << instance2 << std::endl;
	std::cout << "instance3 : " << instance3 << std::endl;

	instance3 = instance2;
	std::cout << "instance3 : " << instance3 << std::endl;
	return (0);
}
```

### Ex00
les entiers	-> des briques\
les floats	-> de la pâte à modeler\
Facile de faire une sphère avec de la pâte à modeler, mais pas avec des briques.\
Facile de faire un cube parfait avec des briques, mais pas avec de la pâte à modeler (les coins notamment, seront difficile à faire).\

Les nombres à virgule flottante <=> Les flottants\

Les nombres à virgule flottante (ou flottants) sont une manière de représenter des nombres réels en informatique.\

Dans la vie réelle, 1 / 3 = 0.333333333333[...]∞\
Le resultat de 1 / 3 est un nombre à virgule floatante.\
Aucune représentation décimale finie (par exemple 0,333333) ne peut être égale à 1/3 ; il n'y a jamais assez de 3.