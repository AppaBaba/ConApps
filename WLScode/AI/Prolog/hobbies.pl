    who(don).
    who(kim).
    who(dan).
    who(pete).
    who(fred).

    what(camping).
    what(music).
    what(movies).
    what(eating).
    what(sleeping).
    what(reading).
    what(travel).

    likes(don,camping).
    likes(don,music).
    likes(don,movies).
    likes(don,reading).
    likes(don,sleeping).
        
    likes(kim,sleeping).
    likes(kim,music).
    likes(kim,movies).
    
    likes(dan,music).
    likes(dan,eating).
    likes(dan,sleeping).
    
    likes(pete,sleeping).
    likes(pete,eating).
    
    likes(fred,music).
    likes(fred,reading).
    likes(fred,travel).

    persons(X, Y) :- likes(X, Y), who(X).
    hobbies(X, Y) :- likes(X, Y), what(Y).