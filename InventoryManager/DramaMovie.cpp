#include "DramaMovie.h"

DramaMovie::DramaMovie(std::string dramaMovieData) : Movie(dramaMovieData)
{
}

DramaMovie::~DramaMovie()
{
}

bool DramaMovie::operator==(const DramaMovie & other) const
{
	if (this == &other)
	{
		return true;
	} else if (this->getTitle() == other.getTitle() &&
		this->getReleaseDate() == other.getReleaseDate() &&
		this->getDistributionType() == other.getDistributionType() &&
		this->getDirector() == other.getDirector())
	{
		return true;
	}
	return false;
}

bool DramaMovie::operator<(const DramaMovie & other) const
{
	if (this->getDirector() == other.getDirector())
	{
		return this->getTitle() < other.getTitle();
	}
	return this->getDirector() < other.getDirector();
}