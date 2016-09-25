Lab 2: Contact Interface
========================

Streams
-------

This week you will be learning about streams.










```c++
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <ctime>

using namespace std;

vector<string> fnames;
vector<string> lnames;
vector<string> numbers;
vector<int>    timestamps;

void _print(int contact) {
    if (contact < 0 || contact >= fnames.size()) return;
    cout << fnames.at(contact)  << '\t' << lnames.at(contact)     << '\t'
        << numbers.at(contact) << '\t' << timestamps.at(contact) << endl;
}

void _print() {
    for (unsigned i = 0; i < fnames.size(); ++i) {
        _print(i);
    }
}

// accepts first name
int _find(string fname) {
    int location = -1;
    for(unsigned i = 0; i < fnames.size(); ++i) {
        if (fnames.at(i) == fname) {
            location = i;
            break;
        }
    }
    return location;
}

// uses the input string stream to get contact info
// then adds it to our contact list
void add(istream& parse) {
    string fname, lname, number;
    parse >> fname >> lname >> number;
    if (parse.fail()) {
        cout << "ERROR: add [firstName] [lastName] [number]" << endl;
    } else {
        fnames.push_back(fname);
        lnames.push_back(lname);
        numbers.push_back(number);
        timestamps.push_back(time(0));
    }
}

// removes contact based on first name
void rem(istream& parse) {
    string fname;
    parse >> fname;
    if (parse.fail()) {
        cout << "ERROR: remove [firstName]" << endl;
    } else {
        int location = _find(fname);
        if (location != -1) {
            fnames.erase(fnames.begin()+location);
            lnames.erase(lnames.begin()+location);
            numbers.erase(numbers.begin()+location);
            timestamps.erase(timestamps.begin()+location);
        } else {
            cout << "could not find '" << fname << "'" << endl;
        }
    }
}

// no args: print all contacts
// 1 arg:   print that specific contact (1-indexed)
void print(istream& parse) {
    int contact;
    parse >> contact;
    if (!parse.fail()) {
        _print(contact-1);
    } else {
        _print();
    }
}

void _load(string fileName) {
    ifstream fin;
    int count, ts;
    string fname, lname, num;

    fin.open(fileName.c_str());
    if (!fin.is_open()) {
        cout << "ERROR: opening '" << fileName << "' failed" << endl;
        return;
    }

    fin >> count;
    if (fin.fail()) {
        cout << "ERROR: '" << fileName << "' is not in the right format" << endl;
        return;
    }

    for(int i = 0; i < count; ++i) {
        fin >> fname >> lname >> num >> ts;
        if (fin.fail()) {
            cout << "Something went TERRIBLY wrong while loading '" << fileName
                << "'" << endl;
            // uncomment for fatal error:
            //exit(1);
            return;
        }
        fnames.push_back(fname);
        lnames.push_back(lname);
        numbers.push_back(num);
        timestamps.push_back(ts);
    }
}

// loads contacts from a file
void load(istream& parse) {
    string fileName;
    parse >> fileName;
    if (parse.fail()) {
        cout << "ERROR: load [fileName]" << endl;
        return;
    }

    _load(fileName);
}

void _help() {
    cout << "Commands:" << endl;
    cout << "\t(a)dd    [firstName] [lastName] [number]" << endl;
    cout << "\t\t-Add a contact to our list" << endl;
    cout << "\t(l)oad   [fileName]" << endl;
    cout << "\t\t-Load contacts from a file" << endl;
    cout << "\t\t-Does not overwrite contacts; appends to current list" << endl;
    cout << "\t(h)elp" << endl;;
    cout << "\t\t-Print this menu" << endl;
    cout << "\t(p)rint  [contactNumber]" << endl;
    cout << "\t\t-Print a specific contact or all contacts" << endl;
    cout << "\t(r)emove [firstName]" << endl;
    cout << "\t\t-Remove a contact by first name" << endl;
    cout << "\t(q)uit" << endl;
    cout << "\t\t-End program" << endl;
}

int main() {
    const string prompt = "> ";

    cout << "Hello!" << endl;
    while (cin.good()) {
        string line, command;
        istringstream parse;

        cout << prompt;
        getline(cin, line);
        parse.str(line);
        parse >> command;
        if (command == "add" || command == "a") {
            add(parse);
        } else if (command == "remove" || command == "rem" || command == "r") {
            rem(parse);
        } else if (command == "print" || command == "p") {
            print(parse);
        } else if (command == "quit" || command == "q") {
            break;
        } else if (command == "help" || command == "h") {
            _help();
        } else if (command == "load" || command == "l") {
            load(parse);
        } else {
            if (!parse.fail()) {
                cout << "ERROR: invalid command '" << command << '\'' << endl;
                _help();
            }
        }
    }
    cout << "Goodbye!" << endl;
}
```
