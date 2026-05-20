void copy_fct() {
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];

    for (auto i = 0; i != 10; ++i) {
        v2[i] = v1[i];
    }
} // set i to zero for statement

void print() {
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for (auto x : v) {
        cout<<x<<'\n';
    }

    for ( auto x: {10,21,32,43,54,65}) {
        cout<<x<<'\n';
    }
} // range for statement

void increment() {
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for (auto& x : v) {
        ++x;
    }
} 
// I rally hate author's coding style
// what the heck is this
// vodi increment()
// {
// for(auto& x:v)
//      ++x;
// }

double* pd = nullptr;
Link<Record>* lst = nullptr; // pointer to a Link to Record
int x = nullptr; // err nullptr is a pointer not an integer

int count_x(char* p, char x) {
    if (p==nullptr) {return 0;}
    int count = 0;
    for(; *p!=0; ++p) {
        if (*p==x) {
            ++count;
        }
    }
    return count;
}

// int count_x(char* p, char x) {
//     if (p==nullptr) {return 0;}
//     int count = 0;

//     while (*p) {
//         if (*p==x) {
//             ++count;
//         }
//         ++p;
//     }
//     return count;
// }