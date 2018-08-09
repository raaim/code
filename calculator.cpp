#include <iostream>
using namespace std;

class Token{
public:
    char kind;
    double value;
};

class Token_stream{
public:
    Token get();
    void putback(Token t);
private:
    bool full {false};
    Token buffer;
};

void Token_stream::putback(Token t)
{
    if (full);
    buffer = t;
    full = true;
}

Token Token_stream::get()
{
    if (full){
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;

    switch (ch){
    case ';':
    case 'q':
    case '(': case ')': case '+': case '-': case '*': case '/':
        return Token{ch};
        break;
    case'.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
    {
        cin.putback(ch);
        double val;
        cin >> val;
        return Token{'8',val};
        break;
    }
    default:
        break;
    }

}

Token_stream ts;

double primary()
{
    double expression();
    Token t =ts.get();
    switch(t.kind){
    case'(':
        {
            double d = expression();
            t = ts.get();
            if (t.kind != ')');
            break;
        }
    case '8':
        return t.value;
        break;
    default:
        break;
    }   
}

double term()
{
    double primary();
    double left = primary();
    Token t = ts.get();

    while (true){
        switch (t.kind){
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0);
            left /= d;
            t = ts.get();
            break;
        }
        default:
            ts.putback(t);
            return left;
            break;
        }
    }    
}

double expression()
{
    double term();
    double left = term();
    Token t = ts.get();

    while (true){
        switch(t.kind){
        case '+':
            left += term();
            t = ts.get();
            break;
        case '-':
            left -= term();
            t = ts.get();
            break;
        default:
            ts.putback(t);
            return left;
        }
    }
}

int main()
{
    try{
        while(cin)
            cout << expression() << endl;
    }
    catch(exception& e){
        cerr << e.what() <<endl;
        return 1;
    }
    catch(...){
        cerr << "exception\n";
        return 2;
    }
}

