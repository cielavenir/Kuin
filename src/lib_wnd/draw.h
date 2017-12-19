#pragma once

#include "..\common.h"

EXPORT_CPP void _render(S64 fps);
EXPORT_CPP S64 _cnt();
EXPORT_CPP void _viewport(double x, double y, double w, double h);
EXPORT_CPP void _resetViewport();
EXPORT_CPP void _depth(Bool test, Bool write);
EXPORT_CPP void _blend(S64 kind);
EXPORT_CPP void _sampler(S64 kind);
EXPORT_CPP void _clearColor(S64 color);
EXPORT_CPP void _line(double x1, double y1, double x2, double y2, S64 color);
EXPORT_CPP void _tri(double x1, double y1, double x2, double y2, double x3, double y3, S64 color);
EXPORT_CPP void _rect(double x, double y, double w, double h, S64 color);
EXPORT_CPP void _rectLine(double x, double y, double w, double h, S64 color);
EXPORT_CPP void _circle(double x, double y, double radiusX, double radiusY, S64 color);
EXPORT_CPP SClass* _makeTex(SClass* me_, const U8* path);
EXPORT_CPP SClass* _makeTexEvenArgb(SClass* me_, double a, double r, double g, double b);
EXPORT_CPP SClass* _makeTexEvenColor(SClass* me_, S64 color);
EXPORT_CPP void _texDtor(SClass* me_);
EXPORT_CPP void _texDraw(SClass* me_, double dstX, double dstY, double srcX, double srcY, double srcW, double srcH, S64 color);
EXPORT_CPP void _texDrawScale(SClass* me_, double dstX, double dstY, double dstW, double dstH, double srcX, double srcY, double srcW, double srcH, S64 color);
EXPORT_CPP void _texDrawRot(SClass* me_, double dstX, double dstY, double dstW, double dstH, double srcX, double srcY, double srcW, double srcH, double centerX, double centerY, double angle, S64 color);
EXPORT_CPP SClass* _makeFont(SClass* me_, const U8* fontName, S64 size, bool bold, bool italic, bool strong, bool proportional, double advance);
EXPORT_CPP void _fontDtor(SClass* me_);
EXPORT_CPP void _fontDraw(SClass* me_, double dstX, double dstY, const U8* text, S64 color);
EXPORT_CPP void _camera(double eyeX, double eyeY, double eyeZ, double atX, double atY, double atZ, double upX, double upY, double upZ);
EXPORT_CPP void _proj(double fovy, double aspectX, double aspectY, double nearZ, double farZ);
EXPORT_CPP SClass* _makeObj(SClass* me_, const U8* path);
EXPORT_CPP void _objDtor(SClass* me_);
EXPORT_CPP SClass* _makeBox(SClass* me_, double w, double h, double d, S64 color);
EXPORT_CPP void _objDraw(SClass* me_, SClass* diffuse, SClass* specular, SClass* normal, S64 element, double frame);
EXPORT_CPP void _objMtx(SClass* me_, const U8* mtx, const U8* normMtx);
EXPORT_CPP void _objPos(SClass* me_, double scaleX, double scaleY, double scaleZ, double rotX, double rotY, double rotZ, double transX, double transY, double transZ);
EXPORT_CPP void _objLook(SClass* me_, double x, double y, double z, double atX, double atY, double atZ, double upX, double upY, double upZ, Bool fixUp);
EXPORT_CPP void _objLookCamera(SClass* me_, double x, double y, double z, double upX, double upY, double upZ, Bool fixUp);
EXPORT_CPP void _ambLight(double topR, double topG, double topB, double bottomR, double bottomG, double bottomB);
EXPORT_CPP void _dirLight(double atX, double atY, double atZ, double r, double g, double b);

namespace Draw
{
	enum EShaderKind
	{
		ShaderKind_Vs,
		ShaderKind_Gs,
		ShaderKind_Ps,
	};

	enum ELayoutType
	{
		LayoutType_Int1,
		LayoutType_Int2,
		LayoutType_Int4,
		LayoutType_Float1,
		LayoutType_Float2,
		LayoutType_Float3,
		LayoutType_Float4,
	};

	void Init();
	void Fin();
	void* MakeDrawBuf(int tex_width, int tex_height, int scr_width, int scr_height, HWND wnd, void* old);
	void FinDrawBuf(void* wnd_buf);
	void ActiveDrawBuf(void* wnd_buf);
	void* MakeShaderBuf(EShaderKind kind, size_t size, const void* bin, size_t const_buf_size, int layout_num, const ELayoutType* layout_types, const Char** layout_semantics);
	void FinShaderBuf(void* shader_buf);
	void ConstBuf(void* shader_buf, const void* data);
	void VertexBuf(void* vertex_buf);
	void* MakeVertexBuf(size_t vertex_size, const void* vertices, size_t vertex_line_size, size_t idx_size, const U32* idces);
	void FinVertexBuf(void* vertex_buf);
	void Identity(double mtx[4][4]);
	void IdentityFloat(float mtx[4][4]);
	double Normalize(double vec[3]);
	double Dot(const double a[3], const double b[3]);
	void Cross(double out[3], const double a[3], const double b[3]);
	void SetProjViewMtx(float out[4][4], const double proj[4][4], const double view[4][4]);
	HFONT ToFontHandle(SClass* font);
	void ColorToArgb(double* a, double* r, double* g, double* b, S64 color);
	double Gamma(double value);
	U8* AdjustTexSize(U8* rgba, int* width, int* height);
}
