#include <windows.h>

// Typ LPSTR to po prostu synonim typu char*. Ogólnie wszystkie typy z
// przedrostkiem P lub LP oznaczają w WinAPI wskaźniki
// == char * NazwaKlasy = "Klasa Okienka"; - deklaracja wskaznika
LPSTR NazwaKlasy = "Klasa Okienka";

// typy danych z przedrostkiem H oznaczaja uchwyty
// deklaracja funkcji WndProc z parametrami
// Czym jest CALLBACK?
LRESULT CALLBACK WndProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam );


// hPrevInstance od wersji Win95 = NULL
// lpCmdLine zawiera linie polecen, z jakiej zostal uruchomiony program
// Typ LPSTR to po prostu synonim typu char*. Ogólnie wszystkie typy z
// przedrostkiem P lub LP oznaczają w WinAPI wskaźniki
// nCmdShow określa, jaki powinien być stan okna naszego programu
int WINAPI WinMain(
   HINSTANCE hInstance,
   HINSTANCE hPrevInstance,
   LPSTR lpCmdLine,
   int nCmdShow
   )
{
   // Składnia: MessageBox( hWnd, lpText, lpCaption, uType )
   // hWnd - uchwyt okna, które jest właścicielem komunikatu
   // lpText - tekst komunikatu
   // lpCaption - tytul okienka
   // uType - kombinacja stylów okienka komunikatu
   MessageBox( NULL, "Dzien dobry!\nZa chwile zobaczysz interfejs.", "Projekt zaliczeniowy", MB_OKCANCEL);

   // Wypelnienie struktury danymi
   WNDCLASSEX wc;

   // cbSize - Rozmiar struktury w bajtach
   // style - Style klasy. Ten argument może zawierać dowolne kombinacje stylów klasy okien
   // lpfnWndProc - Wskaźnik do procedury okna
   // cbClsExtra - Liczba dodatkowych bajtów pamięci do zaalokowania struktury klasy okna. System ustawia domyślnie tą wartość na 0
   // cbWndExtra - Liczba dodatkowych bajtów pamięci do zaalokowania instancji okna. System ustawia domyślnie tą wartość na 0. Jeśli program używa struktury » WinAPI ♦ WNDCLASS do rejestracji dialogu utworzonego przez użycie dyrektywy CLASS w pliku zasobów, wartość tej zmiennej musi być ustawiona na DLGWINDOWEXTRA.
   // hInstance - Uchwyt do instancji zawierającej procedurę okna dla tej klasy
   // hIcon - Uchwyt do ikony klasy. Wartość tej zmiennej musi być uchwytem do zasobów ikony
   // hCursor - Uchwyt do klasy kursora. Wartość tej zmiennej musi być uchwytem do zasobów kursora
   // hbrBackground - Uchwyt do klasy pędzla tła.
   // lpszMenuName - Nazwa zasobu klasy menu, której nazwa występuje w pliku zasobów.
   // lpszClassName - Wskaźnik do łańcucha znaków zakonczonego znakiem zerowym lub wartość typu ATOM.
   // hIconSm - Uchwyt do małej ikony klasy okna. Jeśli wartość tej zmiennej wynosi NULL, system szuka zasobów ikony określonej przez składową hIcon o odpowiednich rozmiarach
   wc.cbSize = sizeof( WNDCLASSEX );
   wc.style = 0;
   wc.lpfnWndProc = WndProc; // Tutaj wlasna funkcja
   wc.cbClsExtra = 0;
   wc.cbWndExtra = 0;
   wc.hInstance = hInstance;
   wc.hIcon = LoadIcon( NULL, IDI_APPLICATION );
   wc.hCursor = LoadCursor( NULL, IDC_ARROW );
   wc.hbrBackground =( HBRUSH )( COLOR_WINDOW + 1 );
   wc.lpszMenuName = NULL;
   wc.lpszClassName = NazwaKlasy;
   wc.hIconSm = LoadIcon( NULL, IDI_APPLICATION );

   if( !RegisterClassEx( & wc ) )
   {
      MessageBox( NULL, "Wysoka Komisja odmawia rejestracji tego okna!", "Niestety...",
      MB_ICONEXCLAMATION | MB_OK );
    return 1;
   };

   // typy danych z przedrostkiem H oznaczaja uchwyty
   HWND hWnd;

   // Składnia:    CreateWindowEx(
   // dwExStyle - Rozszerzone parametry stylu okna,
   // lpClassName - Nazwa klasy okna, którą właśnie zarejestrowaliśmy,
   // lpWindowName - Napis na pasku tytułowym okienka,
   // dwStyle - "Zwykłe" style okienka,
   // x, y - Pozycja okna. Można ustawić na CW_USEDEFAULT
   // nWidth, nHeight - Wymiary okienka
   // hWndParent - Uchwyt okna nadrzędnego. Zwykle takowe nie istnieje, więc dajemy NULL,
   // hMenu - Uchwyt menu dla naszego okna. Na razie żadnego nie mamy, więc NULL,
   // hInstance - Uchwyt aplikacji, której przypisujemy okienko. Dajemy parametr hInstance, otrzymany od systemu jako argument dla WinMain,
   // lpParam - wskaźnik do dodatkowych parametrów - wpisz NULL )



   hWnd = CreateWindowEx( WS_EX_CLIENTEDGE, NazwaKlasy, "### Projekt zaliczeniowy nr 169 ###", WS_OVERLAPPEDWINDOW,
CW_USEDEFAULT, CW_USEDEFAULT, 1024, 512, NULL, NULL, hInstance, NULL );

   if( hWnd == NULL )
   {
      MessageBox( NULL, "Okno odmówiło przyjścia na świat!", "Ale kicha...", MB_ICONEXCLAMATION );
      return 1;
   }

   // ShowWindow - Controls how the window is to be shown
   ShowWindow( hWnd, nCmdShow );

   // The UpdateWindow function updates the client area of the specified window by sending a WM_PAINT message to the window if the window's update region is not empty. 
   UpdateWindow( hWnd );

   // GetMessage Loop - ???
   MSG Komunikat;

   while( GetMessage( & Komunikat, NULL, 0, 0 ) )
   {
      TranslateMessage( & Komunikat );
      DispatchMessage( & Komunikat );
   }
   return Komunikat.wParam;

   return 0;
}

// definicja funkcji WndProc()
LRESULT CALLBACK WndProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
   // TCHAR greeting[] = {"Hello, World!"};
   // PAINTSTRUCT ps;
   // HDC hdc;

   switch( msg )
   {
   case WM_CLOSE:
      DestroyWindow( hWnd );
      break;

   case WM_DESTROY:
      PostQuitMessage( 0 );
      break;

   // case WM_PAINT:
   //    hdc = BeginPaint(hWnd, &ps);

   //    TextOut(hdc, 5, 5, greeting, 10);
   //    TextOut( hdc, 5, 5, "Jakis tekst", 12 );
   //    EndPaint(hWnd, &ps);
   //    break;

   default:
      return DefWindowProc( hWnd, msg, wParam, lParam );
   }

    return 0;
}
