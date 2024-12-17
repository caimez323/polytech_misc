CLASS = Vecteur
PGM = main

all: clean test

# apres l'etiquete (test:) un .o pour chaque .cpp compilé
# cette ligne genere un executable appele 'test'
test: $(PGM).o $(CLASS).o
	g++ -Wall -o $@ $^

# cette ligne compile tous les .ccp et genere des .o avec le meme nom
%.o: %.cpp
	g++ -c -o $@ $<

# cette ligne compile tous les pairs .ccp/.h et genere des .o avec le meme nom
%.o: %.cpp %.h
	g++ -c -o $@ $<

clean:
	rm -f *.o test
