A simple project that implements a bar(as in a drinking bar. this is a pretty weird assignment) in C++

The following hierarchy exists between the classes that represents different kind of drinks:

                                                      Drink - abstract base class
                                                      /  \
                                                     /    \
                                                    /      \
                                                   /        \
                                                  /          \
                                                Wine        Beer
                                               /   \
                                              /     \
                                             /       \
                                            /         \
                                           /           \
                                          /             \
                                         /               \
                                    WhiteWine          RedWine
                                        |                 |
                  types of white wines: |                 | types of red wines:
                                        |                 |
              --------------------------------     -----------------------------------------------
               |           |            |               |         |          |                |
               |           |            |               |         |          |                |
               |           |            |               |         |          |                |
               |       GolanSmadar      |               |    ChadeauMargot   |       RedJordanMountHermon
               |                        |               |                    |
   CarmelEmeraldRiesling       JordanChardonnay      Chianti      JordanCabernetSauvignon


As specified in the above diagram the Drink class is an abstract base class that any type of drink must inherit. An array
of pointers to Drink objects is then created in the Bar class to hold the stock of different drinks.
There are two pure virtual functions-one is prepare and the other is clone. In my case the function prepare() doesn't really do anything
(if I was an animator, I would make the function start an animation for example), so it just returns a string describing how the drink
was made. The clone() function is just used for copying, it returns a pointer to a dynamically allocated drink object that is a copy of
the given argument(used in addDrink in Bar class).

The Bar class keeps an array of Drinks and serves the customer according to his orders. The method serveCustomer() waits for an input in stdin.
So this is what you will see:

What can I get sir? (0 to list options)
0 - user typed 0
(0)	list options
(1)	Heineken
(2)	Tuborg
(3)	Carlsberg
(4)	Maccabi
(5)	Carmel Emerald Riesling (year 1986)
(6)	Golan Smadar (year 1989)
(7)	Jordan Chardonnay (year 1997)
(8)	Chianti (year 1997)
(9)	Red Jordan Mount Hermon (year 1994)
(10)	Jordan Cabernet Sauvignon (year 1997)
(11)	Chadeau Margot (year 1997)
(99)	How did you prepare my last drink?
(100)	Leave the bar
What can I get sir? (0 to list options)
11 - typed 11
Chadeau Margot (year 1997) coming right up.
What can I get sir? (0 to list options)
5 - typed 5
Carmel Emerald Riesling (year 1986) coming right up.
What can I get sir? (0 to list options)
100 - typed 100
Bye Bye
guy@guy:~$

In case there is no need for an interactive console you can use the function serveOneDrink(int command), take a look at main.cpp to see how 
to use it.
