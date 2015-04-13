/*
VROOM (Vehicle Routing Open-source Optimization Machine)
Copyright (C) 2015, Julien Coupey

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef EDGE_H
#define EDGE_H
#include <algorithm>

class edge{

private:
  unsigned _first_vertex;
  unsigned _second_vertex;
  unsigned _weight;

public:
  edge(unsigned first_vertex, unsigned second_vertex, unsigned weight);

  bool operator<(const edge& rhs) const;

  unsigned get_weight() const;
};

#endif