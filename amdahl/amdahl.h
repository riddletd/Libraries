
#ifndef amdahl_h__
#define amdahl_h__ 

extern float tnew(float oldTime, float alpha, float factor);
extern float told(float newTime, float alpha, float factor);
extern float speedup(float alpha, float factor);

#endif // amdahl_h__

