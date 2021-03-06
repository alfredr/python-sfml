#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#
# pySFML - Python bindings for SFML
# Copyright 2012-2013, Jonathan De Wachter <dewachter.jonathan@gmail.com>
#
# This software is released under the LGPLv3 license.
# You should have received a copy of the GNU Lesser General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.


from libcpp.vector cimport vector
from libcpp.sfml cimport VideoMode

cdef extern from "SFML/Graphics.hpp" namespace "sf::VideoMode":
    cdef VideoMode& getDesktopMode()
    cdef vector[VideoMode]& getFullscreenModes()
