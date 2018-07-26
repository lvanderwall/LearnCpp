#include <iostream>


int main()
{
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_favorited = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;

    unsigned char myArticleFlags = 0;

    myArticleFlags |= option_viewed;    // set article as viewed

    if(myArticleFlags & option_deleted) // if article was deleted...
        std::cout << "Deleted!\n";

    return 0;
}
