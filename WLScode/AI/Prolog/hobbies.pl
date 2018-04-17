    who(don).
    who(kim).
    who(dan).
    who(pete).
    who(fred).

    activity(camping).
    activity(music).
    activity(movies).
    activity(eating).
    activity(sleeping).
    activity(reading).
    activity(travel).

    enjoys(don,camping).
    enjoys(don,music).
    enjoys(don,movies).
    enjoys(don,reading).
    enjoys(don,sleeping).
        
    enjoys(kim,sleeping).
    enjoys(kim,music).
    enjoys(kim,movies).
    
    enjoys(dan,music).
    enjoys(dan,eating).
    enjoys(dan,sleeping).
    
    enjoys(pete,sleeping).
    enjoys(pete,eating).
    
    enjoys(fred,music).
    enjoys(fred,reading).
    enjoys(fred,travel).

    persons(X, Y) :- enjoys(X, Y), who(X).
    hobbies(X, Y) :- enjoys(X, Y), activit(Y).

whoenjoys:-
	write('Who enjoys camping?'),nl,
	hobbies(X,camping),
	write(X);nl,
	write('Who enjoys music?'),nl,
	hobbies(X,music),
	write(X);nl.
