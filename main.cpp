#include <iostream>
#include <string>

#include "Eigen/Dense"


//#include "PointLight.h"
//#include "DirectionalLight.h"
//#include "Sphere.h"
//#include "Triangle.h"
//#include "GeometricPrimitive.h"
////#include "AggregatePrimitive.h"
//#include "AggregatePrimitiveKDNode.h"
#include "Scene.h"



//using namespace Eigen;
using namespace std;


int main(int argc, char * argv[])
{
	string filename = argv[1];

	if(filename.size() <= 0)
	{
		cout<<"wrong filename!\n";
		abort();
	}

	Scene scene(filename);



	scene.render("test.png");



}