#pragma once

#include <vector>

#include "Shape.h"
#include "Primitive.h"

using namespace std;


#define THREDSHOLD_NUM_PRIMITIVES (3)


class AggregatePrimitiveKDNode
	:public Primitive
{
protected:
	vector<Primitive*> vec_primitive;

	//AggregatePrimitiveKDNode* left;
	//AggregatePrimitiveKDNode* right;

	BoundingBox boundingBox;
public:
	//Constructor
	//AggregatePrimitiveKDNode();
	//EIGEN_MAKE_ALIGNED_OPERATOR_NEW

	AggregatePrimitiveKDNode(vector<Primitive*> & list,int depth);
	~AggregatePrimitiveKDNode();


	virtual bool intersect(Ray& ray, float& t_hit, Intersection & in);
    virtual bool intersectP(Ray& ray);
    virtual void getBRDF(LocalGeo& local, BRDF& brdf);


	void initBoundingBox();
	virtual BoundingBox& getBoundingBox();


};