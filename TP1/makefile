all: 
	moc traducteur.hh -o moc_trad.cc
	g++ -Wall -std=c++14 -fPIC $(shell pkg-config --cflags Qt5Widgets) main.cpp vue.cc traducteur.cc moteur.cc moc_trad.cc -o TP1 $(shell pkg-config --libs Qt5Widgets)

