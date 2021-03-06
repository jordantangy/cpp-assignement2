#pragma once

#include <iostream>
using namespace std;


namespace family {
    class person{
    private:
    string _name;
    string _type;
    person* _father;
    person* _mother;
    public:
    person(string name, string type);
    void addParent(string name, string type, string fOrM);
    string get_type();
    string get_name();
    person* get_father();
    person* get_mother();
    void set_father(person* p);
    void set_mother(person* p);
    person* search(string name);
    person* searchSon(string name);
    person* find(string type);
    void remove();
    ~person();
    };

    class Tree{
        private:
        person* _head;
        public:
        Tree(string name);
        Tree& addFather(string childName, string fatherName);
        Tree& addMother(string childName, string motherName);
        string relation(string name);
        string find(string name);
        void display();
        void remove(string name);
        ~Tree();
    };

static string typeDefF(string type);
static string typeDefM(string type);
}