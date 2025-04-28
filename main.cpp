#include "Utils.hpp"

using namespace std;
using namespace Eigen;
using namespace PolygonalLibrary;

int main()
{
	PolygonalMesh mesh;
	string path = "/Docker/Data/esercitazioni_c/Esercitazione5/ESERCITAZIONE_5_STL/PolygonalMesh";
	string File_0D_Path = "/Docker/Data/esercitazioni_c/Esercitazione5/ESERCITAZIONE_5_STL/Export/Cell0Ds.inp";
	string File_1D_Path = "/Docker/Data/esercitazioni_c/Esercitazione5/ESERCITAZIONE_5_STL/Export/Cell1Ds.inp";
	
	if (!ImportMesh(path, mesh))
	{
		return 1;
	}
	
	if(!CheckLength(mesh))
	{
		return 1;
	}
	
	if(!CheckAreas(mesh))
	{
		return 1;
	}
	
	if(!CheckMarker0Ds(mesh))
	{
		return 1;
	}
	
	if(!CheckMarker1Ds(mesh))
	{
		return 1;
	}
	
	if(!ExpPoints(mesh, File_0D_Path))
	{
		return 1;
	}
	
	if(!ExpSegments(mesh,File_1D_Path))
	{
		return 1;
	}
	
	cout << "Non sono stati individuati errori" << endl;
	
    return 0;
}
