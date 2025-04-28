#pragma once

#include <iostream>
#include "Eigen/Eigen"

using namespace std;
using namespace Eigen;

namespace PolygonalLibrary {
	
	struct PolygonalMesh
{
    unsigned int NumCell0Ds = 0;  
    unsigned int NumCell1Ds = 0;
    unsigned int NumCell2Ds = 0;

    vector<unsigned int> Cell0DsId = {};   // vettori che contengono gli identificatori delle celle  
	vector<unsigned int> Cell1DsId = {}; 
	vector<unsigned int> Cell2DsId = {};

	vector<unsigned int> Cell0DsMarker = {};   // matrici con i marker dei diversi tipi di cella
	vector<unsigned int> Cell1DsMarker = {};
	vector<unsigned int> Cell2DsMarker = {};
	
	vector<Vector2d> Cell0DsCoordinates = {};  // coordinate delle celle di punti
	vector<Vector2i> Cell1DsVertices = {};  // vertici delle celle di segmenti
	vector<vector<unsigned int>> Cell2DsVertices = {};  // vertici e spigoli delle celle bidimensionali
	vector<vector<unsigned int>> Cell2DsEdges = {};
	
    MatrixXd Points;
	MatrixXi Segments;
	
	const double epsilon = 1.0e-8;   // costante che demarca i lati nulli
};

}
