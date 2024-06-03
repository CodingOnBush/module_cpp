Une méthode = une fonction membre virtuelle d'une classe. Elle est déclarée dans la classe de base et redéfinie dans les classes dérivées. Elle permet de définir un comportement par défaut dans la classe de base et de le spécialiser dans les classes dérivées.

```cpp
class Base
{
	public:
		virtual void methode() {
			std::cout << "Méthode de la classe de base" << std::endl;
		}
};

class Derivee : public Base
{
	public:
		void methode() override {
			std::cout << "Méthode de la classe dérivée" << std::endl;
		}
};
```
