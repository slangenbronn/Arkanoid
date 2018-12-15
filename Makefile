#definition du compilateur
CC=g++

#definition des options d'edition des liens
LDFLAGS=`sdl2-config --libs --cflags`

#definition des cibles avec leurs dependances et les regles de production

# editions des liens
arkanoid: arkanoid.o jeux.o windows.o planche.o balle.o vaisseau.o
	$(CC) arkanoid.o jeux.o windows.o planche.o balle.o vaisseau.o $(LDFLAGS) -o arkanoid


#compilations
windows.o: windows.cpp windows.h
	$(CC) -c windows.cpp $(LDFLAGS) -o windows.o

planche.o: planche.cpp planche.h
	$(CC) -c planche.cpp $(LDFLAGS) -o planche.o

balle.o: balle.cpp balle.h
	$(CC) -c balle.cpp $(LDFLAGS) -o balle.o

vaisseau.o: vaisseau.cpp vaisseau.h
	$(CC) -c vaisseau.cpp $(LDFLAGS) -o vaisseau.o

jeux.o: jeux.cpp jeux.h windows.h balle.h vaisseau.h planche.h
	$(CC) -c jeux.cpp $(LDFLAGS) -o jeux.o

arkanoid.o: arkanoid.cpp jeux.h
	$(CC) -c arkanoid.cpp $(LDFLAGS) -o arkanoid.o


#nettoyage
clean:
	rm -f *.o *~ *.bak arkanoid
	rm -f *.o *~ *.bak jeux
	rm -f *.o *~ *.bak windows
	rm -f *.o *~ *.bak planche
	rm -f *.o *~ *.bak balle
	rm -f *.o *~ *.bak vaisseau
