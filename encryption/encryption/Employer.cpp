#include "Employer.h"

Employer::Employer() {
	Rank = "entry level";
}
Employer::Employer(string last, string first) {
	LastName = last;
	FirstName = first;
}
void Employer::setRank(string rank) {
	Rank = rank;
}
string Employer::getRank() {
	return Rank;
}