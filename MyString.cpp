#include "MyString.h"



void String::copy(const String& other)
{
    delete[] this->data;
    this -> data = new char[mystrlen(other.data) +1];
    mystrcpy(this->data, other.data);
    this->size = other.size;

}

void String::destroy()
{
    delete [] this -> data;
    this -> size = 0;
}
void String::resize(int newSize)
{
if(this->size > 0)
    {
    char* temp;
    temp = new char[this->size];
    temp = this->data;
    delete[] data;
    this->size = newSize;
    this->data = new char[size];
    mystrcpy(this->data,temp);
    delete[] temp;
    }
    else
    {
        delete[] data;
        this->size = newSize;
        data = new char[size];
    }
}

String::String()
{
    this->data = NULL;
    this->size = 0;
}

String::~String()
{
   destroy();
}

String::String(char* data, size_t size)
{
    this-> data = new char[mystrlen(data) +1];
    mystrcpy(this->data, data);
    this->size = size;
}

String::String(const String& other)
{
    copy(other);
}

String& String::operator=(const String& other)
{
    if(this != &other)
    {
        destroy();
        copy(other);
    }
    return *this;
}

void String::setSize(size_t newSize)
{
    resize(newSize);
}
size_t String::getSize() const
{
    return this->size;
}
char* String::getData() const
{
    return this->data;
}

char String::at(size_t index)
{
     return this->data[index];
}

char& String::operator[](size_t index)
{
    return data[index];
}
const char String::operator[](size_t index) const
{
    return data[index];
}

String& String::operator+=(const String& rhs)
{
    int size1 = mystrlen(this->data);
    int size2 = mystrlen(rhs.data);
    char* temp = new char[size1 + size2];
    for(int i = 0; i< size1; ++i)
    {
        temp[i] = this->data[i];
    }
    for(int i = 0; i< size2; ++i)
    {
        temp[i + size1] = rhs[i];
    }
    temp[size1+size2] = '\0';
    destroy();
    this->size=mystrlen(temp);
    this->data=new char[this->size];
    mystrcpy(this->data,temp);
    return *this;
}
bool String::String::operator<(const String& rhs)
{
    if(mystrlen(data) < mystrlen(rhs.data))
        return true;
    else
        return false;
}
bool String::operator>(const String& rhs)
{
    if(mystrlen(data) > mystrlen(rhs.data))
        return true;
    else
        return false;
}
bool String::operator<=(const String& rhs)
{
    if(mystrlen(data) <= mystrlen(rhs.data))
        return true;
    else
        return false;
}
bool String::operator>=(const String& rhs)
{
    if(mystrlen(data) >= mystrlen(rhs.data))
        return true;
    else
        return false;
}

bool String::operator==(const String& rhs)
{
    return (mystrcmp(data, rhs.data) == 0? true : false);
}
bool String::operator!=(const String& rhs)
{
    return (mystrcmp(data, rhs.data) != 0? true : false);
}

String operator+ (String lhs, const String& rhs)
{
    int size1 = mystrlen(lhs.data);
    int size2 = mystrlen(rhs.data);
    String temp(lhs);

    temp+=rhs;

    return temp;
}
ostream& operator<<(ostream& os, const String& obj)
{
    for(int i = 0; i < obj.getSize(); i++)
        os << obj[i];
    return os;
}
istream& operator>>(istream& is, String& obj)
{
    char val[1000];
    cout << endl << "Enter the String: ";
    is>>val;


    obj.size=mystrlen(val);
    obj.data=new char[obj.size + 1];

    mystrcmp(obj.data, val);

    return is;

}

