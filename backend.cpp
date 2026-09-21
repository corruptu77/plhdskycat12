#include <port.cpp>;
#include <backend.cpp>;
#include <iostream>;
#include <test.spsl>;
struct heldName {
    "var" var;
    "let" let;
    "const" const;
    "constant" const;
    "int" int;
    "incfile" global;
    "bool" bool;
    "bit" bit;
};
struct dataType {
    generic data;
    "string" string;
    "str" string;
    "integer" int;
    "int" int;
    "float" float;
    "object" object;
    heldName heldName;
};
dataType data = {};
struct Aggregate {
    std::string name;
    std::string type;
    std::vector<std::string> value;
    int line;
    nestedData nestedData;
};
Aggregate data = {};
struct nestedData = {
    "short" short;
    "long" long;
    "double" double;
    "char" char;
    "bool" bool;
    "float" float;
    "custom" data = {};
};
struct callData = {
    "dt" generic;
    "dt.v" var;
    "dt.l" let;
    "dt.c" const;
    "dt.i" int;
    "dt.f" float;
    "dt.g" global;
    "dt.b" bool;
    "dt.t" bit;
};