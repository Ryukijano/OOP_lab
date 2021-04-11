#include<iostream>
#include <stdio.h>

using namespace std;
int main()
{
    char name[80];
    FILE *file;
    int ch, character = 0, line = 0, space = 0, tab = 0;

    cout<<("Enter file name:\n");
    cin>>("%s", name);

    file = fopen(name, "r");

    if (file == NULL)
        cout<<("Can't open %s for reading.\n", name);
    else
    {
        while ((ch = fgetc(file)) != EOF)
        {
            character++;
            if (ch == ' ')
                space++;
            if (ch == '\n')
                line++;
            if (ch == '\t')
                tab++;
        }
        fclose(file);

        cout<<("\nNumber of characters = %d", character);
        cout<<("\n");
        cout<<("\nNumber of spaces = %d", space);
        cout<<("\n");
        cout<<("\nNumber of tabs = %d", tab);
        cout<<("\n");
        cout<<("\nNumber of lines = %d", line);
        cout<<("\n");
    }
    return 0;
}