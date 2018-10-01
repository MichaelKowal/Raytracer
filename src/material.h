//
// Created by Michael Kowal on 2018-09-30.
//

#ifndef RAYTRACING_MATERIAL_H
#define RAYTRACING_MATERIAL_H


#include "hitable.h"

class material {
public :
    virtual bool scatter(const ray& r_in, const hit_record& rec, vec3& attenuation, ray& scattered) const = 0;
};

vec3 reflect(const vec3& v, const vec3& n) {
    return v - 2*dot(v, n)*n;
}


#endif //RAYTRACING_MATERIAL_H
