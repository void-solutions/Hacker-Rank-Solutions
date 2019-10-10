#include <iostream>
#include <string>
using namespace std;

int main()
{
    int totalPage, wantedPage, pageTurn = 0, firstPage = 1;
    cin >> totalPage >> wantedPage;
    int tempTotalPage = totalPage;

    if (totalPage / 2 >= wantedPage)
    {
        while (firstPage < wantedPage)
        {
            firstPage += 2;
            pageTurn++;
        }
        cout << pageTurn << endl;
    }

    if (totalPage / 2 < wantedPage)
    {
        while (tempTotalPage > wantedPage)
        {
            tempTotalPage -= 2;
            pageTurn++;
        }
        if (tempTotalPage % 2 == 1)
            pageTurn--;
        cout << pageTurn << endl;
    }
    // 9/27 ERROR!
    //     if (totalPage / 2 < wantedPage)
    //         cout << ((totalPage / 2) - (wantedPage / 2));
    //     else
    //         cout << ((totalPage / 2) - (wantedPage / 2) - 1);
}