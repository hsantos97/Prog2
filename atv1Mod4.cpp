#include <iostream>
#include <string>

using namespace std;

template <typename M>
M maximum(const M &val1, const M &val2)
{
    if (less<M>()(val1, val2))
        return val2;

    if (less<M>()(val2, val1))
        return val1;

    return 0;
}

template <class P>
class Pair
{
private:
    P first;
    P second;

public:
    Pair(const P &t, const P &u) : first(t), second(u){};

    P &get_first() { return first; }
    P &get_second() { return second; }

    const P &get_first() const { return first; }
    const P &get_second() const { return second; }

    void add_pairs()
    {
        cout << first + second << endl;
    }
};

template <class PP>
void print_pair(const PP &pair)
{
    std::cout << "(" << pair.get_first() << ", " << pair.get_second() << ")" << endl;
}

int main()
{

    // Exercise 1
    string str1 = "Harison";
    string str2 = " Santos";

    cout << "Max value: " << maximum(15.7, 9.3) << endl;

    cout << "Max value: " << maximum(str1, str2) << endl;

    // Exercise 2
    Pair<string> p1(str1, str2);
    Pair<double> p2(2.2, 6.8);

    cout << endl;
    print_pair(p1);
    print_pair(p2);

    cout << endl;
    p1.add_pairs();
    p2.add_pairs();

    return 0;
}
