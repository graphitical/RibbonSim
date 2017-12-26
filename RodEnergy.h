#ifndef RODENERGY_H
#define RODENERGY_H

#include <Eigen/Core>
#include "RodConfig.h"

double rodEnergy(const Rod &rod, const RodState &state, Eigen::MatrixXd *dE, Eigen::VectorXd *dtheta);

Eigen::Vector3d parallelTransport(const Eigen::Vector3d &v, const Eigen::Vector3d &e1, const Eigen::Vector3d &e2);

#endif