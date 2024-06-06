#pragma once
#define _USE_MATH_DEFINES
#include <struct.h>
#include <assert.h>
#include <Novice.h>
#include <cmath>
#include <math.h>
#include <objidl.h>
#include <corecrt_math.h>


//�t�s��
Matrix4x4 Inverse(const Matrix4x4& matrix);

//���W�ϊ�
Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);

//1. X����]�s��
Matrix4x4 MakeRotateXMatrix(float radian);

//2. Y����]�s��
Matrix4x4 MakeRotateYMatrix(float radian);

//3. Z����]�s��
Matrix4x4 MakeRotateZMatrix(float radian);

Matrix4x4  Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

// �A�t�B���ϊ��s��v�Z�֐�
Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rot, const Vector3& translate);

//1.�������e�s��
Matrix4x4 MakePerspectiveFovMatrix(float fovY, float aspectRatio, float nearClip, float farClip);

//2.���ˉe�s��
Matrix4x4 MakeOrthographicMatrix(float left, float top, float right, float bottom, float nearClip, float farClip);

//3.�r���[�|�[�g�ϊ��s��
Matrix4x4 MakeViewportMatrix(float left, float top, float width, float height, float minDepth, float maxDepth);

//�O���b�h
void DrawGrid(const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewportMatrix);

//��
void DrawSphere(const Sphere& sphere, const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewportMatrix, uint32_t color);

float Length(const Vector3& v);

Vector3 Normalize(const Vector3& v);

Vector3 Cross(const Vector3& a, const Vector3& b);

Vector3 Add(const Vector3& v1, const Vector3& v2);

Vector3 Perpendicular(const Vector3& vector);

Vector3 Multiply2(float scalar, const Vector3& vector);

void DrawPlane(const Plane& plane, const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewPortMatrix, uint32_t color);


// �~�i���j�̏Փ˔���֐�
bool isColliding(const Sphere& c1, const Sphere& c2);

bool Colliding(const Sphere& c1, const Plane& c2);


//void DrawTriangle(const Triangle& triangle, const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewportMatrix, uint32_t color);

void DrawAABB(const AABB& aabb, const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewProjection, uint32_t color);