enum Type {str,num}

struct Entry {
    char* name;
    Type t;
    char* s;
    int i;
};

void f(Entry* p) {
    if (p->t == str) {
        cout<< p->s;
    }
}

// =========================

union Value {
    char* s;
    int i;
}

struct Entry {
    char* name;
    Type t;
    Value v;
};