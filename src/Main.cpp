#include"sorts.h"
#include<iostream>
#include<string>
#include<stdio.h>
class celebrity(){
public:
/***
 *This retrieves the Name of the celebrity
 */
	int  getCelebrityName(int  name){
		return name;
	}	
/**
 *This sets the Celebrity name and turns it into an integer value to save 
 * to the 2D array
 */
	int  setCelebrityName(int name){
		std::char name[8] = this.name;
		for(name = 97 + rand()%26; name[8]< [8]; name++){
			name += new int[8] name;
	}
/**
 *This gets and returns the integer value of how badly
 * you want to meet the Celebrity
 */
	int getRateMeetCelebrity(int rateMeetThem){
		return rateMeetThem;
	}
/**
 *This sets the value of how badly you want to 
 *meet them from (1-10)
 */
	int setRateMeetCelebrity(int rateMeetThem){
		rateMeetThem = rand()% 10 +1;
		rateMeetThem = this.rateMeetThem;
	}
/**This gets what type of Celebrity they are(what industry they are in)
 *
 */
	std::string getCelebrityInvolvedIn(string involvedIn){
		return involvedIn;
	}
/**
 *This sets the string value to what industry the celebrity comes from
 */
	std::string setCelebrityInvolvedIn(string involvedIn){
		involvedIn = this.involvedIn;
	}
/**
 * This gets and returns if you have met the Celebrity before
 */
	int getMetCelebrity(int  metThem){
		return metThem;
	}
/**
 * This sets an integer value to True or False (1 or 0) based on
 * if you have met the Celebrity before or not
 */
	int setMetCelebrity(int metThem){
		if(metThem == true){
			return metThem =  1;
		}
		if(metThem == false){
			return metThem = 0;
		}
	}
/**
 * This compares the values and puts them in an order of importance
 * how badly(1-10) comes before if you have met them (0 or 1)
 * but if after all the that comes to a tie you decide alphabetically
 * who comes first
 */
	int compare(){
		int i;
		int j;
		int celeb[i][j]; 
		celeb[i][j].getCelebrityName();
		celeb[i][j].getRateMeetCelebrity();
		celeb[i][j].getCelebrityMetThem();
		celeb[i][j].getCelebrityName() > celeb[i][j].getRateMeetCelebrity();
		celeb[i][j].getRateMeetCelebrity() > celeb[i][j].getCelebrityMetThem();
		celeb[i][j].getCelebrityName() > celeb[i][j].getCelebrityMetThem();
		if(celeb[i][j].getRateMeetCelebrity() == celeb[i][j].getCelebrityMetThem(){
		celeb[i][j].getCelebrityName();
		for(unsigned i = 0; i<name.length(); ++i){
			char c = name.at(0);
			std::cout<< "The ASCII value of " <<c<< " is " int(c);
		return 0;
		}
		if(celeb[i].getCelebrityName > celeb[j].getCelebrityName()){
			celeb[i+1]
		}
		else{
			celeb[j+1]
		}
		}
	}
/**
 *This class sorts them using different algorithms
 */	
	int main(){
		quicksort(celeb[10][10].compare());
		quicksort(celeb[100][100].compare());
		quicksort(celeb[1000][1000].compare());
		quicksort(celeb[10000][10000].compare());
		quicksort(celeb[100000][100000].compare());
		quicksort(celeb[1000000][1000000].compare());
		
		mergesort(celeb[10][10].compare());
		mergesort(celeb[100][100].compare());
		mergesort(celeb[1000][1000].compare());
		mergesort(celeb[10000][10000].compare());
		mergesort(celeb[100000][100000].compare());
		mergesort(celeb[1000000][1000000].compare()); 

		insertion_sort(celeb[10][10].compare());
		insertion_sort(celeb[100][100].compare());
		insertion_sort(celeb[1000][1000].compare());
		insertion_sort(celeb[10000][10000].compare());
		insertion_sort(celeb[100000][100000].compare());
		insertion_sort(celeb[1000000][1000000].compare());

		selection_sort(celeb[10][10].compare());
		selection_sort(celeb[100][100].compare());
		selection_sort(celeb[1000][1000].compare());
		selection_sort(celeb[10000][10000].compare());
		selection_sort(celeb[100000][100000].compare());
		selection_sort(celeb[1000000][1000000].compare());
		
		bubble_sort(celeb[10][10].compare());
		bubble_sort(celeb[100][100].compare());
		bubble_sort(celeb[1000][1000].compare());
		bubble_sort(celeb[10000][10000].compare());
	}
private:
	int name;
	std::string name;
	int rateMeetThem;
	std::string involvedIn;
	int metThem;
	int i;
	int j;
};
	
