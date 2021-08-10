##################################################################################################
#Instruction
##################################################################################################
#1. You have to edit lines 23 (the line start with LIBS) to indicate where your 'fftw3 library' is.
#   For example: the LIBS line can be:
#   LIBS = -L/Users/username/usr/lib -lfftw3 -lm
#   You may need to edit the directory appearing after -L to give the correct path of LIBS
#2. If you don't have it yet, then see the following:
#   1) visit : http://micro.stanford.edu/wiki/Install_FFTW3  to see how to install the library.
#   2) In the command line:
#      >>mkdir $HOME/usr
#      >>mkdir $HOME/soft
#      >>cd ~/soft
#      >>wget http://www.fftw.org/fftw-3.3.3.tar.gz (this is where the 'latest' fftw3 library is)
#      >>tar -zxvf fftw-3.3.3.tar.gz
#      >>cd fftw-3.3.3
#      >>./configure --prefix=$HOME/usr --enable-shared=yes
#      >>make --jobs=8
#      >>make install    
##################################################################################################


LIBS = -lfftw3 -lm

CXXFLAGS = -g3 -std=c++11

all: Alg2.exe

Alg2.o: Alg2.cpp

Alg2.exe: Alg2.o
	$(CXX) $^ -O3 -o $@ $(LIBS)

clean:
	rm -f *.o *.exe
