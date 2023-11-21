#include <iostream>
using namespace std;

main()
{
    int words;
    char letter;
    int x=0;
    int count = 0;
    cout << "Enter how many words you want to enter: ";
    cin >> words;
    string word[words];
    while(x<words)
    {
        cout << "Enter word " << x+1 << ": ";
        cin >> word[x];
        x++;
    }
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    for(int y=0 ; y < words ; y++ )
    {
        for(int z=0; word[y][z]!= '\0' ; z++)
        {
            if(word[y][z] == letter)
            {
                count++;
            }
        }
    }
    cout << letter << " shows up " << count << " times in the data.";
}