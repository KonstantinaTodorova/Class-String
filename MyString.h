#pragma once
#include "MyFunctions.h"


class String
{
	private:
		char* data;
        size_t size;

        void copy(const String& other);
        void destroy();
        void resize(int newSize);
	public:
		String();
		~String();
		String(char* data, size_t size);
		String(const String& other);
		String& operator=(const String& other);


		void setSize(size_t);
        size_t getSize() const;

        char* getData() const;

		char at(size_t index);//връща елемент на позиция

        char& operator[](size_t index);
 		const char operator[](size_t index) const;

		String& operator+=(const String& rhs);
		bool operator<(const String& rhs);
		bool operator>(const String& rhs);
		bool operator<=(const String& rhs);
		bool operator>=(const String& rhs);

		bool operator==(const String& rhs);
		bool operator!=(const String& rhs);

		friend String operator+ (String lhs, const String& rhs);
		friend ostream& operator<<(ostream& os, const String& obj);
		friend istream& operator>>(istream& is, String& obj);
};
