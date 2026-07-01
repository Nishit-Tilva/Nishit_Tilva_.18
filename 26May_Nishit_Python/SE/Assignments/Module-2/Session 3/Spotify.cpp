#include<stdio.h>
main()
{
    char playlist[50];
    int songs;
    float duration;
    printf("Enter Playlist Name: ");
    scanf(" %[^\n]", playlist);
    printf("Enter Total Number of Songs: ");
    scanf("%d", &songs);
    printf("Enter Average Song Duration (minutes): ");
    scanf("%f", &duration);
    printf("\nMy favorite Spotify playlist \"%s\" contains %d songs with an average duration of %.2f minutes per song."
			, playlist, songs, duration);
}
