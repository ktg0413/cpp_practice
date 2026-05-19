vector<int> vec; // vec is global

struct Record {
    string name; // name is a member
};

void fct(int arg) { // fct is a global
    // arg is local
    string motto {"Who dares wins"}; // motto is local
    auto p = new Record("Hume"); // p points to an nnamed Record
}