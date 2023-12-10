#include <iostream>

using namespace std;

void hanoi(int n, char a, char b, char c)
{
    if(n <= 0)
    {
        perror("Nu sunt discuri!");
        exit(EXIT_FAILURE);
    }
    else if(n == 1)
        cout<<a<<" -> "<<c<<"\n";
    else
    {
        hanoi(n-1, a, c, b);
        cout<<a<<" -> "<<c<<"\n";
        hanoi(n-1, b, a, c);
    }
}

int main()
{
    int n;
    cout<<"Introduceti numarul de discuri: ";
    cin>>n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}