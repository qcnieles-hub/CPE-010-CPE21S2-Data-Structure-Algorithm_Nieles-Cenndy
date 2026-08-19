#include <iostream>
#include <string>
#include "playlist_ll.h"

int main() {

    // create the playlist head
    SongNode<std::string>* head = nullptr;

    std::cout << "Testing Create Playlist Function:\n";
    addSong(std::string("Levitating - Dua Lipa"), &head);
    addSong(std::string("Sign of times - Harry Styles"), &head);
    addSong(std::string("As it Was - Harry Styles"), &head);
    addSong(std::string("Flowers - Miley Cyrus"), &head);
    PlaylistTraversal(head);

    std::cout << "\nTesting the addSong Function\n";
    addSong(std::string("It will rain - Bruno Mars"), &head);
    PlaylistTraversal(head);

    std::cout << "Testing the remove Song Function \n";
    removeSong(std::string("Iris - Goo Goo Dolls"), &head);
    PlaylistTraversal(head);

    std::cout << "Testing the Play Song Function (1 full round...\n";

    std::cout << "Deleting the whole playlist \n";
    deletePlaylist(&head);
    PlaylistTraversal(head);

    return 0;
}
