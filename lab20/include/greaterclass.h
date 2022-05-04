#pragma once
#include<string.h>
#include<iostream>

class Greater{
    virtual bool operator<(const Greater & a) const= 0;
     friend bool operator >(const Greater& a, const Greater& b) {
        return !a.operator<(b);
    }
};

class Int : public Greater{
    public:
        Int(){};
        Int(int a): data(a){};
        bool operator<(const Greater& a) const {
            const Int &b = static_cast<const Int &>(a);
            return (data < b.data);
        }
        friend std::ostream & operator<<(std::ostream& os,const Int& a){
            os<<a.data;
            return os;
        }
        void print()const{ std::cout<<data; };
        Int(const Int& a) : data(a.data) {};
        operator int() {return data;}
    private:
        int data;

};

class String : public Greater{
    public:
        String(const char* a){
            data = new char[strlen(a)+ 1];
            strcpy(data, a);
        }
        String(const String & a){
            int l= strlen(a.data)+1;
            data = new char[l];
            strcpy(data, a.data);
        }
        bool operator<(const Greater& a) const {
            const String & b = static_cast<const String &>(a);
            return (data[0]<b.data[0]);
        }

        friend std::ostream & operator<<(std::ostream& os,const String& a){
            for(int i = 0; i< (int)strlen(a.data); i++)
                os<<a.data[i];
            return os;
        }

        void print()const {
            for(int i = 0; i< (int)strlen(data); i++)
                std::cout<<data[i];
        } 

        String & operator=(const String& a){
            if(strcmp(data, a.data)==0)
                return *this;
            delete [] data;
            int l= strlen(a.data)+1;
            data = new char[l];
            strcpy(data,a.data);
            return *this;
        }

        operator char*() {return data;}
        ~String(){    delete [] data;};
    private:
        char* data;
};

const Greater& max(const Greater &a, const Greater &b);