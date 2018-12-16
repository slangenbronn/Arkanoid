#definition du compilateur
CC=g++

#definition des fichiers et dossiers
SRCDIR=Src
HEADDIR=Header
EXECDIR=Exec
sources=$(SRCDIR)/arkanoid.cpp $(SRCDIR)/jeux.cpp $(SRCDIR)/windows.cpp $(SRCDIR)/planche.cpp $(SRCDIR)/balle.cpp $(SRCDIR)/vaisseau.cpp $(SRCDIR)/brique.cpp $(SRCDIR)/normalBrique.cpp $(SRCDIR)/visuel.cpp $(SRCDIR)/factory.cpp $(SRCDIR)/normalBriqueBuilder.cpp $(SRCDIR)/jauneNormalBriqueBuilder.cpp $(SRCDIR)/normalBriqueMaker.cpp
objets=$(EXECDIR)/arkanoid.o $(EXECDIR)/jeux.o $(EXECDIR)/windows.o $(EXECDIR)/planche.o $(EXECDIR)/balle.o $(EXECDIR)/vaisseau.o $(EXECDIR)/brique.o $(EXECDIR)/normalBrique.o $(EXECDIR)/visuel.o $(EXECDIR)/factory.o $(EXECDIR)/normalBriqueBuilder.o $(EXECDIR)/jauneNormalBriqueBuilder.o $(EXECDIR)/normalBriqueMaker.o
dep=$(HEADDIR)/jeux.h $(HEADDIR)/windows.h $(HEADDIR)/planche.h $(HEADDIR)/balle.h $(HEADDIR)/vaisseau.h $(HEADDIR)/brique.h $(HEADDIR)/normalBrique.h $(HEADDIR)/visuel.h $(HEADDIR)/factory.h $(HEADDIR)/normalBriqueBuilder.h $(HEADDIR)/jauneNormalBriqueBuilder.h $(HEADDIR)/normalBriqueMaker.h

#definition des options d'edition des liens
LDFLAGS=`sdl2-config --libs --cflags`

#definition des cibles avec leurs dependances et les regles de production

# editions des liens
arkanoid: $(objets)
	$(CC) $(objets) $(LDFLAGS) -o arkanoid


#compilations
$(EXECDIR)/windows.o: $(SRCDIR)/windows.cpp $(HEADDIR)/windows.h
	$(CC) -c $(SRCDIR)/windows.cpp $(LDFLAGS) -o $(EXECDIR)/windows.o

$(EXECDIR)/planche.o: $(SRCDIR)/planche.cpp $(HEADDIR)/planche.h
	$(CC) -c $(SRCDIR)/planche.cpp $(LDFLAGS) -o $(EXECDIR)/planche.o

$(EXECDIR)/balle.o: $(SRCDIR)/balle.cpp $(HEADDIR)/balle.h
	$(CC) -c $(SRCDIR)/balle.cpp $(LDFLAGS) -o $(EXECDIR)/balle.o

$(EXECDIR)/vaisseau.o: $(SRCDIR)/vaisseau.cpp $(HEADDIR)/vaisseau.h
	$(CC) -c $(SRCDIR)/vaisseau.cpp $(LDFLAGS) -o $(EXECDIR)/vaisseau.o

$(EXECDIR)/jeux.o: $(SRCDIR)/jeux.cpp $(HEADDIR)/jeux.h $(HEADDIR)/windows.h $(HEADDIR)/balle.h $(HEADDIR)/vaisseau.h $(HEADDIR)/planche.h
	$(CC) -c $(SRCDIR)/jeux.cpp $(LDFLAGS) -o $(EXECDIR)/jeux.o

$(EXECDIR)/arkanoid.o: $(SRCDIR)/arkanoid.cpp $(HEADDIR)/jeux.h
	$(CC) -c $(SRCDIR)/arkanoid.cpp $(LDFLAGS) -o $(EXECDIR)/arkanoid.o

$(EXECDIR)/brique.o: $(SRCDIR)/brique.cpp $(HEADDIR)/brique.h
	$(CC) -c $(SRCDIR)/brique.cpp $(LDFLAGS) -o $(EXECDIR)/brique.o

$(EXECDIR)/normalBrique.o: $(SRCDIR)/normalBrique.cpp $(HEADDIR)/normalBrique.h
	$(CC) -c $(SRCDIR)/normalBrique.cpp $(LDFLAGS) -o $(EXECDIR)/normalBrique.o

$(EXECDIR)/visuel.o: $(SRCDIR)/visuel.cpp $(HEADDIR)/visuel.h
	$(CC) -c $(SRCDIR)/visuel.cpp $(LDFLAGS) -o $(EXECDIR)/visuel.o

$(EXECDIR)/factory.o: $(SRCDIR)/factory.cpp $(HEADDIR)/factory.h
	$(CC) -c $(SRCDIR)/factory.cpp $(LDFLAGS) -o $(EXECDIR)/factory.o

$(EXECDIR)/normalBriqueBuilder.o: $(SRCDIR)/normalBriqueBuilder.cpp $(HEADDIR)/normalBriqueBuilder.h
	$(CC) -c $(SRCDIR)/normalBriqueBuilder.cpp $(LDFLAGS) -o $(EXECDIR)/normalBriqueBuilder.o

$(EXECDIR)/jauneNormalBriqueBuilder.o: $(SRCDIR)/jauneNormalBriqueBuilder.cpp $(HEADDIR)/jauneNormalBriqueBuilder.h
	$(CC) -c $(SRCDIR)/jauneNormalBriqueBuilder.cpp $(LDFLAGS) -o $(EXECDIR)/jauneNormalBriqueBuilder.o

$(EXECDIR)/normalBriqueMaker.o: $(SRCDIR)/normalBriqueMaker.cpp $(HEADDIR)/normalBriqueMaker.h
	$(CC) -c $(SRCDIR)/normalBriqueMaker.cpp $(LDFLAGS) -o $(EXECDIR)/normalBriqueMaker.o

#nettoyage
clean:
	rm -f *.o *~ *.bak $(EXECDIR)/*
	rm -f *.o *~ *.bak arkanoid
