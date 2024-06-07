#pragma once

class Animal
{
public:
	Animal(const char* name);
	virtual ~Animal();

	virtual void Name();

protected:
	const char* name;

};
