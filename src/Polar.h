/***************************************************************************
 *
 * Project:  OpenCPN Weather Routing plugin
 * Author:   Sean D'Epagnier
 *
 ***************************************************************************
 *   Copyright (C) 2016 by Sean D'Epagnier                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
 ***************************************************************************
 */

#include <vector>
#include "PolygonRegion.h"

struct SailingVMG
{
    enum { STARBOARD_UPWIND, PORT_UPWIND, STARBOARD_DOWNWIND, PORT_DOWNWIND};
    float values[4];
};

class Boat;

#define DEGREES 360

class Polar
{
public:
    static double VelocityApparentWind(double VB, double W, double VW);
    static double DirectionApparentWind(double VA, double VB, double W, double VW);
    static double DirectionApparentWind(double VB, double W, double VW);
    static double VelocityTrueWind(double VA, double VB, double W);

    Polar();

    bool Open(const wxString &filename, wxString &message);
    bool Save(const wxString &filename);

    wxString FileName, WavePolarFileName;

    void OptimizeTackingSpeed();
    void ClosestVWi(double VW, int &VW1i, int &VW2i);

    double Speed(double W, double VW);
    double SpeedAtApparentWindDirection(double A, double VW, double *pW=0);
    double SpeedAtApparentWindSpeed(double W, double VA);
    double SpeedAtApparentWind(double A, double VA, double *pW=0);

    SailingVMG GetVMGTrueWind(double VW);
    SailingVMG GetVMGApparentWind(double VA);

    double TrueWindSpeed(double VB, double W, double maxVW);
    void UpdateDegreeStepLookup();

    bool InsideCrossOverContour(float H, float VW);
    PolygonRegion CrossOverRegion;
    
private:
    void CalculateVMG(int speed);

    double AngleofAttackBoat(double A, double VA);
    double VelocityBoat(double A, double VA);

    struct SailingWindSpeed {
        SailingWindSpeed(double nVW) : VW(nVW) {}

        float VW;
        std::vector<float> speeds; // by degree_count
        SailingVMG VMG;
    }; // num_wind_speeds

    std::vector<SailingWindSpeed> wind_speeds;
    std::vector<double> degree_steps;
    unsigned int degree_step_index[DEGREES];
};
