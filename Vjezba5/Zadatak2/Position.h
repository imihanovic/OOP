#include<iostream>
#include<time.h>
#include<random>
#include<math.h>

class Position {

public:

    double x, y, z;

public:
    Position();
    ~Position() {}
    void setValue(const double x, const double y, const double z);
    void setRandom(const int l, const int u);
    void getValue(double& px, double& py, double& pz) const;
    double distance2D(const Position& t1) const;
    double distance3D(const Position& t1)const;
};
#pragma once
